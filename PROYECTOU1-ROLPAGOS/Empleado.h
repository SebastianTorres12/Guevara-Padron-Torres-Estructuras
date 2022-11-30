/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 19/11/2022
FECHA DE MODIFICACIÓN: 29/11/2022
Proyecto Unidad 1-Rol de pagos
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#pragma once
#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

class Empleado
{
public:
   ~Empleado();
   Empleado();
   Empleado(string nNombre,string nApellido,int nCedula,string nCargo, double nSueldo,int horas);
   //Empleado(string nNombre,string nApellido,int nCedula,string nCargo, double nSueldo,int horas,double sueldoN);
   void setCedula(int newCedula);
   std::string getCargo(void);
   void setCargo(std::string newCargo);
   double getSueldo(void);
   void setSueldo(double newSueldo);
   double getSueldoNeto(void);
   void setSueldoNeto(double );
   int getHorasExtra(void);
   void setHorasExtra(int newHorasExtra);
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   std::string getApellido(void);
   void setApellido(std::string newApellido);
   
   int getCedula(void);
   void informacion();
protected:
private:
   std::string nombre;
   std::string apellido;
   int cedula;
   std::string cargo;
   double sueldo;
   int horasExtra;
   double sueldoNeto;

};

#endif