/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 4/11/2022
FECHA DE MODIFICACIÓN: 6/11/2022
Tarea5-Tabla de Amortización
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include "Calendario.h"
Calendario::Calendario(){
	this->dia=0;
	this->mes=0;
	this->ano=0;
}
int Calendario::getDia(){
	return dia;
}

void Calendario::setDia(int nDia){
	this->dia=nDia;
}

int Calendario::getMes(){
	return mes;
}

void Calendario::setMes(int nMes){
	this->mes=nMes;
}

int Calendario::getAno(){
	return ano;
}

void Calendario::setAno(int nAno){
	this->ano=nAno;
}

Calendario Calendario::tomarFecha(){
	ValidacionDatos objValidar;
	int diaV,mesV,anoV;
	char dia[10],mes[10],ano[10];
	cout<<"\nINGRESO FECHA"<<endl;
	do{
	diaV=objValidar.casteoEnteros(dia,"\nIngresar el dia: ");
	}while(diaV>31||diaV<1);
	do{
	mesV=objValidar.casteoEnteros(mes,"\nIngresar el mes: ");
	}while(mesV>12||mesV<1);
	anoV=objValidar.casteoEnteros(ano,"\nIngresar el anio: ");
	this->setDia(diaV);
	this->setMes(mesV);                               
	this->setAno(anoV);
	return *this;
}

void Calendario::verFecha(){
	if(mes<10){
		cout<<"["<<dia<< ":"<<mes<<":"<<ano<<" ]";
	}else{
		cout<<"["<<dia<< ":"<<mes<<":"<<ano<<"]";
	}
	
}

Calendario& Calendario::operator++(){
	mes++;
	
	if(mes>12){
		mes=mes-12;
		ano++;
	}
}
Calendario& Calendario::operator--(){
	dia++;
}


/*
------------	FERIADOS NACIONALES -----------
		   dd mm  
año nuevo: 01 01 
carnaval: 28 02 y 01 03
viernes santo: 15 04
dia del trabajo: 01 05
batalla Pichincha: 24 05
1 er grito de Independencia: 10 08
Independencia de Guayaquil: 09 10
Dia de difuntos: 02 11
Independencia de Cuenca: 03 11
Navidad: 25 12

------------	FERIADOS LOCALES -----------

Fundacion de Quito: 06 12
 




*/