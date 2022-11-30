/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 19/11/2022
FECHA DE MODIFICACIÓN: 29/11/2022
Proyecto Unidad 1-Rol de pagos
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#pragma once
#include "Empleado.h"

////////////////////////////////////////////////////////////////////////
// Name:       Empleado::~Empleado()
// Purpose:    Implementation of Empleado::~Empleado()
// Return:     
////////////////////////////////////////////////////////////////////////

Empleado::~Empleado()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Empleado::Empleado()
// Purpose:    Implementation of Empleado::Empleado()
// Return:     
////////////////////////////////////////////////////////////////////////

Empleado::Empleado()
{
}

/*Empleado::Empleado(string nNombre,string nApellido,int nCedula,string nCargo, double nSueldo,int horas){
	this->nombre=nNombre;
	this->apellido=nApellido;
	this->cedula=nCedula;
	this->cargo=nCargo;
	this->sueldo=nSueldo;
	this->horasExtra=horas;
}*/

Empleado::Empleado(string nNombre,string nApellido,int nCedula,string nCargo, double nSueldo,int horas){
	this->nombre=nNombre;
	this->apellido=nApellido;
	this->cedula=nCedula;
	this->cargo=nCargo;
	this->sueldo=nSueldo;
	this->horasExtra=horas;
	this->sueldoNeto=0;
}

////////////////////////////////////////////////////////////////////////
// Name:       Empleado::setCedula(int newCedula)
// Purpose:    Implementation of Empleado::setCedula()
// Parameters:
// - newCedula
// Return:     void
////////////////////////////////////////////////////////////////////////

void Empleado::setCedula(int newCedula)
{
   cedula = newCedula;
}

////////////////////////////////////////////////////////////////////////
// Name:       Empleado::getCargo()
// Purpose:    Implementation of Empleado::getCargo()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Empleado::getCargo(void)
{
   return cargo;
}

////////////////////////////////////////////////////////////////////////
// Name:       Empleado::setCargo(std::string newCargo)
// Purpose:    Implementation of Empleado::setCargo()
// Parameters:
// - newCargo
// Return:     void
////////////////////////////////////////////////////////////////////////

void Empleado::setCargo(std::string newCargo)
{
   cargo = newCargo;
}

////////////////////////////////////////////////////////////////////////
// Name:       Empleado::getSueldo()
// Purpose:    Implementation of Empleado::getSueldo()
// Return:     double
////////////////////////////////////////////////////////////////////////

double Empleado::getSueldo(void)
{
   return sueldo;
}

////////////////////////////////////////////////////////////////////////
// Name:       Empleado::setSueldo(double newSueldo)
// Purpose:    Implementation of Empleado::setSueldo()
// Parameters:
// - newSueldo
// Return:     void
////////////////////////////////////////////////////////////////////////

void Empleado::setSueldo(double newSueldo)
{
   sueldo = newSueldo;
}

double Empleado::getSueldoNeto(){
	return sueldoNeto;
}
void Empleado::setSueldoNeto(double newSN){
	sueldoNeto=newSN;
}
////////////////////////////////////////////////////////////////////////
// Name:       Empleado::getHorasExtra()
// Purpose:    Implementation of Empleado::getHorasExtra()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Empleado::getHorasExtra(void)
{
   return horasExtra;
}

////////////////////////////////////////////////////////////////////////
// Name:       Empleado::setHorasExtra(int newHorasExtra)
// Purpose:    Implementation of Empleado::setHorasExtra()
// Parameters:
// - newHorasExtra
// Return:     void
////////////////////////////////////////////////////////////////////////

void Empleado::setHorasExtra(int newHorasExtra)
{
   horasExtra = newHorasExtra;
}

////////////////////////////////////////////////////////////////////////
// Name:       Empleado::getNombre()
// Purpose:    Implementation of Empleado::getNombre()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Empleado::getNombre(void)
{
   return nombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       Empleado::setNombre(std::string newNombre)
// Purpose:    Implementation of Empleado::setNombre()
// Parameters:
// - newNombre
// Return:     void
////////////////////////////////////////////////////////////////////////

void Empleado::setNombre(std::string newNombre)
{
   nombre = newNombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       Empleado::getApellido()
// Purpose:    Implementation of Empleado::getApellido()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Empleado::getApellido(void)
{
   return apellido;
}

////////////////////////////////////////////////////////////////////////
// Name:       Empleado::setApellido(std::string newApellido)
// Purpose:    Implementation of Empleado::setApellido()
// Parameters:
// - newApellido
// Return:     void
////////////////////////////////////////////////////////////////////////

void Empleado::setApellido(std::string newApellido)
{
   apellido = newApellido;
}

////////////////////////////////////////////////////////////////////////
// Name:       Empleado::getCedula()
// Purpose:    Implementation of Empleado::getCedula()
// Return:     int
////////////////////////////////////////////////////////////////////////

int Empleado::getCedula(void)
{
   return cedula;
}

////////////////////////////////////////////////////////////////////////
// Name:       Empleado::getCedula()
// Purpose:    Implementation of Empleado::getCedula()
// Return:     int
////////////////////////////////////////////////////////////////////////

void Empleado::informacion(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Apellido: "<<apellido<<endl;
	cout<<"Cedula: "<<cedula<<endl;
	cout<<"Cargo: "<<cargo<<endl;
	cout<<"Sueldo: "<<sueldo<<endl;
	cout<<"Horas extra: "<<horasExtra<<endl;
	
	
}
