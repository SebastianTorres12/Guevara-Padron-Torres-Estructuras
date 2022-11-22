/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 10/11/2022
FECHA DE MODIFICACIÓN: 10/11/2022
Tarea7: Operaciones Matriz con memoria estática
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include"LecturaDatos.h"
#pragma once
class ValidacionDatos:public LecturaDatos
{
	public:
		char* lecturaEnteros(char const *msj) override;
		char* lecturaReales(char const *msj) override;
		char* lecturaTexto(char const *msj) override;
		
		int casteoEnteros(char* dato,char const *msj);
		double casteoReales(char* dato, char const *msj);
		
};