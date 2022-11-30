/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 19/11/2022
FECHA DE MODIFICACIÓN: 29/11/2022
Proyecto Unidad 1-Rol de pagos
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#pragma once
#include "NodoDoble.cpp"
#include "FuncionesLista.h"
template <typename T> 
class ListaDoble : public FuncionesLista {		
	public:
		//metodos de orden de la lista
   		void insertarPorCabeza(Empleado *);
   		void insertarPorCola(Empleado *);
    	void eliminarPorCabeza();
    	void eliminarPorCola();
		void mostrarPorCabeza();
		void buscar(int);
		bool getListaVacia();
		void insertarEntre(Empleado *empleado);
		void eliminarEntre(int); 

		ListaDoble();
		void setPrimero(NodoDoble*);
		void setActual(NodoDoble *);
		NodoDoble *getPrimero();
		NodoDoble *getActual();
		int getNumNodos();
	private:
		NodoDoble *primero;
		NodoDoble *actual;
		int numNodos;
		
};