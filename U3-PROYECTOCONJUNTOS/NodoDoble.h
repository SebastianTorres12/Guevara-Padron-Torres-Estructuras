
/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Ariel Guevara
FECHA DE CREACIÓN: 19/02/2023
FECHA DE MODIFICACIÓN: 26/02/2023
Proyecto Unidad 3
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "ValidacionDatos.cpp"
#pragma once
using namespace std;
class NodoDoble{
	private:
		int valor;
		NodoDoble *siguiente;
		NodoDoble *anterior;
	public:
		NodoDoble(int valor , NodoDoble *,NodoDoble*);
		NodoDoble();
    	int getValor();
    	void setValor(int newValor);
    	NodoDoble *getSiguiente();
    	void setSiguiente(NodoDoble *);
    	NodoDoble *getAnterior();
    	void setAnterior(NodoDoble *);
		~NodoDoble();
	};
