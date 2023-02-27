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

//
template <typename T>
class Conjunto {
	public:
		//metodos de orden de la lista
		Conjunto();
   		void insertarPorCola(int valor);
    	void eliminarPorCola();
    	void eliminarPorCabeza();
    	void eliminarEntre(int pos);
		void mostrarPorCabeza();
		void buscar(int);
		void adicionarAlConjunto(Conjunto<T> &conjT);
		bool getListaVacia();
		void setPrimero(NodoDoble*);
		void setActual(NodoDoble *);
		NodoDoble *getPrimero();
		NodoDoble *getActual();
		int getNumNodos();
		int getPos(int valor);
		Conjunto<T>& operator=(const Conjunto<T> &conjunto);
	private:
		NodoDoble *primero;
		NodoDoble *actual;
		int numNodos;

};

