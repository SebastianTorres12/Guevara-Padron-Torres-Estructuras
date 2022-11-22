/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 22/11/2022
FECHA DE MODIFICACIÓN: 22/11/2022
Tarea11: Lista Doble Circular
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/

#include "Nodo.h"

Nodo::Nodo() {
	valor = 0;
	anterior=NULL;
	siguiente=NULL;

}

Nodo::Nodo(int _valor){
	this->valor =_valor;
	this->anterior=NULL;
	this->siguiente =NULL;
}

Nodo::~Nodo(){

}

Nodo* Nodo::getAnterior(){
	return this->anterior;
}

void Nodo::setAnterior(Nodo *_anterior){
	this->anterior=_anterior;
}

Nodo* Nodo::getSiguiente(){
	return this->siguiente;
}

void Nodo::setSiguiente (Nodo *_siguiente){
	this->siguiente=_siguiente;
}

int Nodo::getValor() {
	return this->valor;
}

void Nodo::setValor(int _valor){
	this->valor=_valor;
} 

void Nodo::imprimirNodoCabeza(){
	//cout<< "anterior " <<anterior <<"<-valor "<<valor<<"->siguiente " <<siguiente<<endl;
	cout<< valor << "-->";
	
}

void Nodo::imprimirNodoCola(){
	cout<< "-->" <<valor;
}
