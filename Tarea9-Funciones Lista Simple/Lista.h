/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 17/11/2022
FECHA DE MODIFICACIÓN: 17/11/2022
Tarea9: Lista Simple 
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#pragma once
#include "Nodo.cpp"


using namespace std;
class Lista{
	private:
		Nodo *primero;
		Nodo *actual;	
	public:
		//métodos de los atributos
		Lista();
		void setPrimero(Nodo *);
		void setActual(Nodo *);
		Nodo *getPrimero();
		Nodo *getActual();
		bool getListaVacia();
		//métodos de orden de la lista
		void insertarPorCabeza(int);
		void insertarPorCola(int);
		void eliminarPrimeraOcurrencia(int);	
		void eliminarPorCabeza();
		void eliminarPorCola();
		void mostrarPorCola();
		void mostrarPorCabeza();
		int contar();
		void buscar(int);
};