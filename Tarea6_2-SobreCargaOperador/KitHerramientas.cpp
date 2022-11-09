/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 7/11/2022
FECHA DE MODIFICACIÓN: 8/11/2022
Tarea6_2: Sobrecarga operador varias veces
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include "KitHerramientas.h"

KitHerramientas::KitHerramientas(Perno objP,Tornillo objTor,Tuerca objTue){
	this->objPerno=objP;
	this->objTornillo=objTor;
	this->objTuerca=objTue;
	
}

KitHerramientas::KitHerramientas()
{

}



KitHerramientas::~KitHerramientas()
{
   // TODO : implement
}



Perno KitHerramientas::getObjPerno(void)
{
   return objPerno;
}



void KitHerramientas::setObjPerno(Perno newObjPerno)
{
   objPerno = newObjPerno;
}



Tornillo KitHerramientas::getObjTornillo(void)
{
   return objTornillo;
}



void KitHerramientas::setObjTornillo(Tornillo newObjTornillo)
{
   objTornillo = newObjTornillo;
}



Tuerca KitHerramientas::getObjTuerca(void)
{
   return objTuerca;
}



void KitHerramientas::setObjTuerca(Tuerca newObjTuerca)
{
   objTuerca = newObjTuerca;
}

double KitHerramientas::getPrecioKit(){
	return precioKIT;
}
void KitHerramientas::setPrecioKit(double newPrecioKit){
	precioKIT=newPrecioKit;
}

KitHerramientas KitHerramientas::operator +(KitHerramientas &k1){
	
	KitHerramientas objKit;
	objKit.precioKIT=(objPerno.getPrecio()+objTornillo.getPrecio()+objTuerca.getPrecio())+(k1.getObjPerno().getPrecio()+k1.getObjTornillo().getPrecio()+k1.getObjTuerca().getPrecio());
	return objKit;
	
}

KitHerramientas KitHerramientas:: operator + (Perno &p1){
	KitHerramientas objKit;
	objKit.objPerno.setUnidades(objPerno.getUnidades()+p1.getUnidades());
	return objKit;
}

KitHerramientas KitHerramientas:: operator + (Tuerca &tuer){
	KitHerramientas objKit;
	objKit.objTuerca.setPrecio(objTuerca.getPrecio()+tuer.getPrecio());
	return objKit;
}

KitHerramientas KitHerramientas:: operator + (Tornillo &tor){
	KitHerramientas objKit;
	objKit.objTornillo.setPrecio(objTornillo.getPrecio()+tor.getPrecio());
	return objKit;
}
