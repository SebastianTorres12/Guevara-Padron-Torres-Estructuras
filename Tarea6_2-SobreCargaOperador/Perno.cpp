/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 7/11/2022
FECHA DE MODIFICACIÓN: 8/11/2022
Tarea6_2: Sobrecarga operador varias veces
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/


#include "Perno.h"

Perno::Perno(double nPrecio,int unidad){
    this->precio=nPrecio;
	this->unidades=unidad;
}

Perno::Perno()
{
  
}



Perno::~Perno()
{
   // TODO : implement
}



double Perno::getPrecio(void)
{
   return precio;
}



void Perno::setPrecio(double newPrecio)
{
   precio = newPrecio;
}


int Perno::getUnidades(void)
{
   return unidades;
}


void Perno::setUnidades(int newUnidades)
{
   unidades = newUnidades;
}