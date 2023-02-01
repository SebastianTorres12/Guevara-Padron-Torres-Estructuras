/***********************************************************************
UFA - ESPE
AUTORES: Ariel Guevara,Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 31/01/2023
FECHA DE MODIFICACIÓN: 31/01/2023
Tarea2: Correcion Prueba 
GITHUB: Guevara-Padron-Torres-Estructuras
 ***********************************************************************/
#include"LecturaDatos.h"

class ValidacionDatos:public LecturaDatos
{
	public:
		char* lecturaEnteros(char const *msj) override;
		char* lecturaReales(char const *msj) override;
		char* lecturaTexto(char const *msj) override;
		char* lecturaTextoNumerico(char const *msj) override;
		int casteoEnteros(char* dato,char const *msj);
		double casteoReales(char* dato, char const *msj);
		
		
};
