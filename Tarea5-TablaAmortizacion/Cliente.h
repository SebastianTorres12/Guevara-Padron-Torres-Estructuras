/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 4/11/2022
FECHA DE MODIFICACIÓN: 4/11/2022
Tarea5-Tabla de Amortización
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "ValidacionDatos.cpp"
using namespace std;
class Cliente{
	private:
	string nombre;
	string apellido;
	public:
	Cliente();	
	Cliente tomarDatos();
	void verDatos();
	string getNombre();
	void setNombre(string nNombre);
	string getApellido();	
	void setApellido(string nApellido);
	
};