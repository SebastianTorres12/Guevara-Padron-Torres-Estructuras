/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 22/11/2022
FECHA DE MODIFICACIÓN: 22/11/2022
Tarea11: Lista Doble Circular
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/

#ifndef NODO_H
#define NODO_H

#include <iostream>
using namespace std;

class Nodo{
	private:
		int valor;
		Nodo *siguiente;
		Nodo *anterior;		
	
	public:
		Nodo();
		Nodo(int);
		~Nodo();
		int getValor();
		Nodo *getSiguiente();
		Nodo *getAnterior();	
		void setValor(int);
		void setSiguiente(Nodo *);
		void setAnterior(Nodo *);

		void imprimirNodoCabeza();
		void imprimirNodoCola();

		friend class ListaDobleCircular;
		
};

#endif
