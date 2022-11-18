/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 17/11/2022
FECHA DE MODIFICACIÓN: 17/11/2022
Tarea9: Lista Simple 
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#pragma once
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

class Nodo{
	private:
		int valor;
		Nodo *siguiente;
	public:
		Nodo(int _valor, Nodo *);
    	int getValor(void);
    	void setValor(int newValor);
    	Nodo *getSiguiente(void);
    	void setSiguiente(Nodo *newSiguiente);
		~Nodo();
	};