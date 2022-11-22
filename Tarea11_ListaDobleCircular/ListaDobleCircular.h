/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 22/11/2022
FECHA DE MODIFICACIÓN: 22/11/2022
Tarea11: Lista Doble Circular
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/

#ifndef LISTADOBLECIRCULAR_H
#define LISTADOBLECIRCULAR_H

#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>
#include "Nodo.h"
#include "Nodo.cpp"

using namespace std;

class ListaDobleCircular{
	private:
		Nodo *cabeza;//primero
		Nodo *actual;
		int numNodos;
	
	public:
		ListaDobleCircular();
		~ListaDobleCircular();
		
		int getNumNodos();
		Nodo *getCabeza();
		Nodo *getActual();	
		void setNumNodos(int);
		void setCabeza(Nodo *);
		void setActual(Nodo *);
		
		bool ListaVacia();
		void agregarCabeza(int);
		void agregarCola(int);
		void agregarEnPosicion(int, int);
		void buscar(int);
		void borrarCabeza();
		void borrarCola();
		void borrarEnPosicion(int);
		void imprimirCabeza();
		void imprimirCola();
		
};

#endif