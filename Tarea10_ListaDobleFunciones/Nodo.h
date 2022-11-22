/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 22/11/2022
FECHA DE MODIFICACIÓN: 22/11/2022
Tarea10_ListaDoble
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
class Nodo{
	private:
		int valor;
		Nodo *siguiente;
		Nodo *anterior;
	public:
		Nodo(int , Nodo *,Nodo*);
    	int getValor();
    	void setValor(int);
    	Nodo *getSiguiente();
    	void setSiguiente(Nodo *);
    	Nodo *getAnterior();
    	void setAnterior(Nodo *);
		~Nodo();
	};