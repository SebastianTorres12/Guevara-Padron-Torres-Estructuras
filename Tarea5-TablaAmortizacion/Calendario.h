/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 4/11/2022
FECHA DE MODIFICACIÓN: 6/11/2022
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
class Calendario{
	private:
	int dia;
	int mes;
	int ano;
	public:
		
	Calendario();	
	Calendario tomarFecha();
	void verFecha();
	Calendario& operator++();
	Calendario& operator--();
	int getDia();
	int getMes();
	int getAno();
	void setDia(int nDia);
	void setMes(int nMes);
	void setAno(int nAno);
};