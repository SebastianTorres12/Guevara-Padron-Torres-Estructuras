/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 30/10/2022
FECHA DE MODIFICACIÓN: 30/10/2022
Tarea2-Lectura y validación Datos-Interfaces
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
class LecturaDatos{
	public:
	virtual char* lecturaEnteros(char const *msj)=0;
	virtual char* lecturaReales(char const *msj)=0;
	virtual char* lecturaTexto(char const *msj)=0;	
};
