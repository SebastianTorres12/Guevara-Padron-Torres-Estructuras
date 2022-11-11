/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 10/11/2022
FECHA DE MODIFICACIÓN: 10/11/2022
Tarea7: Operaciones Matriz con memoria estática
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
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
};