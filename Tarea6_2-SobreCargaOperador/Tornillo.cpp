/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 7/11/2022
FECHA DE MODIFICACIÓN: 7/11/2022
Tarea6_2: Sobrecarga operador varias veces
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/


#include "Tornillo.h"

Tornillo::Tornillo(double nPrecio,int unidad){
	this->precio=nPrecio;
	this->unidades=unidad;
}
Tornillo::Tornillo()
{
   
}



Tornillo::~Tornillo()
{
   // TODO : implement
}



double Tornillo::getPrecio(void)
{
   return precio;
}



void Tornillo::setPrecio(double newPrecio)
{
   precio = newPrecio;
}



int Tornillo::getUnidades(void)
{
   return unidades;
}



void Tornillo::setUnidades(int newUnidades)
{
   unidades = newUnidades;
}