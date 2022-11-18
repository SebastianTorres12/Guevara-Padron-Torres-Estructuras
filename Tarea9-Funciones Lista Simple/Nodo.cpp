#include"Nodo.h"
/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 17/11/2022
FECHA DE MODIFICACIÓN: 17/11/2022
Tarea9: Lista Simple 
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
Nodo::Nodo(int _valor, Nodo *_sig=NULL)
{
	this->valor=_valor;	
	this->siguiente=_sig;
}

int Nodo::getValor(){
	return valor;
}
void Nodo::setValor(int newValor)
{
	valor = newValor;
}
Nodo *Nodo::getSiguiente(void)
{
   return siguiente;
}
void Nodo::setSiguiente(Nodo *newSiguiente)
{
   siguiente = newSiguiente;
}
Nodo::~Nodo(){

}