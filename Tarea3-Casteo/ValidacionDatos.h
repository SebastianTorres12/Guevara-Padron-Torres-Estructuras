/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 30/10/2022
FECHA DE MODIFICACIÓN: 31/10/2022
Tarea2-Lectura y validación Datos-Interfaces
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include"LecturaDatos.h"
class ValidacionDatos:public LecturaDatos
{
	public:
		char* lecturaEnteros(char const *msj) override;
		char* lecturaReales(char const *msj) override;
		char* lecturaTexto(char const *msj) override;
		
		int casteoEnteros(char* dato);
		double casteoReales(char* dato);
		
};