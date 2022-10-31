/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 30/10/2022
FECHA DE MODIFICACIÓN: 30/10/2022
Tarea3-PLantillaCASTING
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
template<typename T>
class CastingDatos{
	private:
		T valor;
	public:
		void transformarDatos(T valor) ;
		void setValor(T v);
		T getValor() const;
};