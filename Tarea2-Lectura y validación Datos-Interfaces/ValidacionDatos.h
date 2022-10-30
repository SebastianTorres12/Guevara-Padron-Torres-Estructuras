#include "LecturaDatos.h"

class ValidacionDatos:public LecturaDatos{
	public:	
		char* lecturaEnteros(char const *msj) override;
		char* lecturaReales(char const *msj) override;
		char* lecturaTexto(char const *msj) override;   
};