/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 19/11/2022
FECHA DE MODIFICACIÓN: 29/11/2022
Proyecto Unidad 1-Rol de pagos
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/

#ifndef LISTADOBLECIRCULAR_H
#define LISTADOBLECIRCULAR_H

#include <fstream>
#include <iostream>
#include <string>
#include <stdlib.h>

#include "NodoDoble.cpp"
#include "FuncionesLista.h"
using namespace std;
template <typename T>
class ListaDobleCircular : public FuncionesLista {
	private:
		NodoDoble *cabeza;//primero
		NodoDoble *actual;
		int numNodos;
	
	public:
		ListaDobleCircular();
		~ListaDobleCircular();
		
		int getNumNodos();
		NodoDoble *getCabeza();
		NodoDoble *getActual();	
		void setNumNodos(int);
		void setCabeza(NodoDoble *);
		void setActual(NodoDoble *);
		//Metodos
  		 void insertarPorCabeza(Empleado *) ;
    	 void insertarPorCola(Empleado *) ;
     	 void eliminarPorCabeza() ;
    	 void eliminarPorCola() ;
	 	 void mostrarPorCabeza() ;
	 	 void buscar(int) ;
	 	 bool getListaVacia();
	 	 void agregarEnPosicion(Empleado*);
	 	 void borrarEnPosicion(int);
	
		
};

#endif