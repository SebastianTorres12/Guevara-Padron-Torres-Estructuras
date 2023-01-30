/***********************************************************************
UFA - ESPE
AUTORES: Ariel Guevara,Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 28/01/2023
FECHA DE MODIFICACIÓN: 29/01/2023
Tarea2: Solucion Alfiles 
GITHUB: Guevara-Padron-Torres-Estructuras
 ***********************************************************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#pragma once
class Metodos{
	public:
		virtual void encerarTablero()=0;
		virtual void crearArchivo()=0;
		virtual void bloquear(int x, int y)=0;
		virtual void mostrar()=0;
		virtual void quitarRelleno(int x, int y)=0;
		virtual void solucion(int x, int y, int n1)=0;
		virtual void solucionAlfilFilas() = 0;
		virtual void solucionAlfil() = 0;
		
};