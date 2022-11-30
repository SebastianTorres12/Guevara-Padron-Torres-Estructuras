/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 19/11/2022
FECHA DE MODIFICACIÓN: 22/11/2022
Proyecto Unidad 1-Rol de pagos
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "Empleado.cpp"
#pragma once

class FuncionesLista{
    virtual void insertarPorCabeza(Empleado *) = 0;
    virtual void insertarPorCola(Empleado *) = 0;
    virtual void eliminarPorCabeza() = 0;
    virtual void eliminarPorCola() = 0;
	virtual void mostrarPorCabeza() = 0;
	virtual void buscar(int) = 0;
	virtual bool getListaVacia() = 0;
	
};