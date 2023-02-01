/***********************************************************************
UFA - ESPE
AUTORES: Ariel Guevara,Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 31/01/2023
FECHA DE MODIFICACIÓN: 31/01/2023
Tarea2: Correcion Prueba 
GITHUB: Guevara-Padron-Torres-Estructuras
 ***********************************************************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#pragma once
class LecturaDatos{
	public:
	virtual char* lecturaEnteros(char const *msj)  = 0;
	virtual char* lecturaReales(char const *msj) = 0;
	virtual char* lecturaTexto(char const *msj) = 0;
	virtual char* lecturaTextoNumerico(char const *msj) = 0;
};