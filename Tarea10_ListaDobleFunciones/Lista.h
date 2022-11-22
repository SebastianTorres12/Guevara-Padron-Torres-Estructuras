/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 22/11/2022
FECHA DE MODIFICACIÓN: 22/11/2022
Tarea10_ListaDoble
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#pragma once
#include "Nodo.cpp"


class Lista{
	private:
		Nodo *primero;
		Nodo *actual;
		bool ListaVacia();		
	public:
		//metodos de los atributos
		Lista();
		void setPrimero(Nodo *);
		void setActual(Nodo *);
		Nodo *getPrimero();
		Nodo *getActual();
		bool getListaVacia();
		//metodos de orden de la lista
		void insertarPorCabeza(int);
		void insertarPorCola(int);
		void insertarEntre(int);
		void eliminarPorCabeza();
		void eliminarPorCola();
		void eliminarEntre();
		void mostrar();
		void buscarPrimeraInstancia(int);
		void eliminarPrimeraInstancia(int);
	    
		
};