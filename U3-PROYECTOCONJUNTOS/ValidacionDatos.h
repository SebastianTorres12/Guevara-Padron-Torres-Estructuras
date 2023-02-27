
/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Ariel Guevara
FECHA DE CREACIÓN: 19/02/2023
FECHA DE MODIFICACIÓN: 26/02/2023
Proyecto Unidad 3
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