/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 26/10/2022
FECHA DE MODIFICACIÓN: 26/10/2022
Tarea1-TDA
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#if !defined(__Class_Diagram_2_Cproceso_h)
#define __Class_Diagram_2_Cproceso_h
#include <iostream>

#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <cstring>
using namespace std;
class Cproceso
{
protected:
private:
   int num;
   int den;
   string nombre;
   string apellido;
   int nacimiento;
public:
	Cproceso(int nume, int deno);
   ~Cproceso();
   int getNum(void);
   void setNum(int newNum);
   int getDen(void);
   void setDen(int newDen);
   int getNacimiento();
   void setNacimiento(int newNaci);
   	string getNombre(void);
	void setNombre(string newNombre);
	string getApellido(void);
	void setApellido(string newApellido);
 
   Cproceso obtencionDatos();
   Cproceso relacional(Cproceso numer, Cproceso denom);
   void imprimirObj(Cproceso obj);

};
#endif