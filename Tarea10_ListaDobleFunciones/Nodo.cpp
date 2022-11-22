/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 22/11/2022
FECHA DE MODIFICACIÓN: 22/11/2022
Tarea10_ListaDoble
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include"Nodo.h"
Nodo::Nodo(int v, Nodo *sig=NULL,Nodo *ant=NULL)
{
	this->valor=v;	
	this->siguiente=sig;
	this->anterior=ant;
}

int Nodo::getValor(){
	return valor;
}
void Nodo::setValor(int newValor)
{
	valor = newValor;
}
Nodo *Nodo::getSiguiente()
{
   return siguiente;
}
void Nodo::setSiguiente(Nodo *newSiguiente)
{
   siguiente = newSiguiente;
}
Nodo *Nodo::getAnterior()
{
   return anterior;
}
void Nodo::setAnterior(Nodo *newAnterior)
{
   anterior = newAnterior;
}
Nodo::~Nodo(){

}