/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 7/11/2022
FECHA DE MODIFICACIÓN: 8/11/2022
Tarea6_2: Sobrecarga operador varias veces
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/


#include "Tuerca.h"

Tuerca::Tuerca(double nPrecio,int unidad){
		this->precio=nPrecio;
	this->unidades=unidad;
}
Tuerca::Tuerca()
{
 
}


Tuerca::~Tuerca()
{
   // TODO : implement
}


double Tuerca::getPrecio(void)
{
   return precio;
}


void Tuerca::setPrecio(double newPrecio)
{
   precio = newPrecio;
}


int Tuerca::getUnidades(void)
{
   return unidades;
}



void Tuerca::setUnidades(int newUnidades)
{
   unidades = newUnidades;
}