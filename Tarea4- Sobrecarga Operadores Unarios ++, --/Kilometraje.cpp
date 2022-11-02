/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 1/11/2022
FECHA DE MODIFICACIÓN: 1/11/2022
Tarea4-Sobre Carga Operadores
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include "Kilometraje.h"
Kilometraje::Kilometraje(){
	this->km=0;
	this->m=0;
	this->cm=0;
}
int Kilometraje::getCm(){
	return cm;
}

void Kilometraje::setCm(int newCm){
	this->cm=newCm;
}

int Kilometraje::getM(){
	return m;
}

void Kilometraje::setM(int newM){
	this->m=newM;
}

int Kilometraje::getKm(){
	return km;
}

void Kilometraje::setKm(int newKm){
	this->km=newKm;
}

Kilometraje Kilometraje::tomarMedida(){
	int km,m,cm;
	cout<<"BIENVENIDO A LA TOMA DEL KILOMETRAJE"<<endl;
	cout<<"Ingrese las medidas en el siguiente orden [km/m/cm]"<<endl;
	cin>>km>>m>>cm;
	this->setCm(cm);
	this->setKm(km);
	this->setM(m);
	return *this;
}

void Kilometraje::verMedidas(){
	cout<<"["<<km<< ":"<<m<<":"<<cm<<"]"<<endl;
}

Kilometraje& Kilometraje::operator++(){
	cm++;
	if(cm>99){
		cm=cm-100;
		m++;
	}
	if(m>999){
		m=m-1000;
		km++;
	}
	
}

Kilometraje& Kilometraje::operator--(){
	cm--;
	if(cm>99){
		cm=cm-100;
		m--;
	}
	if(m>999){
		m=m-1000;
		km--;
	}
}