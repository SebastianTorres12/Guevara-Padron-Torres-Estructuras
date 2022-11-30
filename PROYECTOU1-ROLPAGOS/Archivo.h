/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 19/11/2022
FECHA DE MODIFICACIÓN: 29/11/2022
Proyecto Unidad 1-Rol de pagos
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include <string.h>
#include <string>
#include <vector>
#include <stdlib.h>
#include <fstream>
#include <sstream>
#include "Empleado.cpp"
#include "ListaSimple.cpp"
#include "ListaDoble.cpp"
#include "ListaDobleCircular.cpp"

using namespace std;

class Archivo{
	public:
	void lecturaArchivo(ListaSimple<Empleado> &lista);
	void lecturaArchivo(ListaDoble<Empleado> &lista);
	void lecturaArchivo(ListaDobleCircular<Empleado> &lista);
	void escribirArchivoTxt(Empleado *empleado);
	void eliminarLineaTXT(int numLinea);
	bool buscarEmpleadoTxt(int cedulaB);
	int contarLineasTxt();
};