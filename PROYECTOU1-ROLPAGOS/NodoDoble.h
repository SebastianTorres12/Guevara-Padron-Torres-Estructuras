/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 19/11/2022
FECHA DE MODIFICACIÓN: 29/11/2022
Proyecto Unidad 1-Rol de pagos
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "Empleado.cpp"
#include "ValidacionDatos.cpp"
#pragma once
using namespace std;
class NodoDoble{
	private:
		Empleado *objEmpleado;
		NodoDoble *siguiente;
		NodoDoble *anterior;
	public:
		NodoDoble(Empleado* , NodoDoble *,NodoDoble*);
		NodoDoble();
    	Empleado *getObjEmpleado();
    	void setObjEmpleado(Empleado *newObjEmpleado);
    	void setValor(int);
    	NodoDoble *getSiguiente();
    	void setSiguiente(NodoDoble *);
    	NodoDoble *getAnterior();
    	void setAnterior(NodoDoble *);
		~NodoDoble();
	};