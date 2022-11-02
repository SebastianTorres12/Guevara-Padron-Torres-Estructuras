/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 1/11/2022
FECHA DE MODIFICACIÓN: 1/11/2022
Tarea4-Sobre Carga Operadores
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
using namespace std;
class Kilometraje{
	private:
	int cm;
	int m;
	int km;
	public:
		
	Kilometraje();	
	Kilometraje tomarMedida();
	void verMedidas();
	Kilometraje& operator++();
	Kilometraje& operator--();
	int getCm();
	int getM();
	int getKm();
	void setCm(int newCm);
	void setM(int newM);
	void setKm(int newKm);
};