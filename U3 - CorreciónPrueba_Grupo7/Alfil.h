/***********************************************************************
UFA - ESPE
AUTORES: Ariel Guevara,Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 31/01/2023
FECHA DE MODIFICACIÓN: 31/01/2023
Tarea2: Correcion Prueba 
GITHUB: Guevara-Padron-Torres-Estructuras
 ***********************************************************************/
#pragma once
#include <iostream>
#define DIMENSION 8
class Alfil{
	public:
		bool validarMovimiento(int,int,int);
		bool solucionAlfil(int,int,int);
		Alfil();
		void encerar();
		int** getTableroAlfil();
		friend class menu;
		int **tableroAlfil;
	private:
		int nA;
};
