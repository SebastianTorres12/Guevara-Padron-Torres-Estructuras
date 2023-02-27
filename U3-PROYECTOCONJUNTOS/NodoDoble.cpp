

/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Ariel Guevara
FECHA DE CREACIÓN: 19/02/2023
FECHA DE MODIFICACIÓN: 26/02/2023
Proyecto Unidad 3
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include"NodoDoble.h"
#pragma once

/**
 * NodoDoble::NodoDoble(Empleado *objE, NodoDoble *sig=NULL,NodoDoble *ant=NULL)
 *
 * @param objE es un puntero a un objeto de tipo Empleado
 * @param sig es el siguiente nodo
 * @param ant puntero al nodo anterior
 */
NodoDoble::NodoDoble(int valor, NodoDoble *sig=NULL,NodoDoble *ant=NULL)
{
	this->valor=valor;
	this->siguiente=sig;
	this->anterior=ant;
}

/**
 * NodoDoble::NodoDoble()
 */
NodoDoble::NodoDoble()
{
    siguiente = nullptr;
    anterior = nullptr;
}

/**
 * Devuelve el objeto de la clase Empleado.
 *
 * @return El objeto de la clase Empleado.
 */
int NodoDoble::getValor(){
	return valor ;
}

/**
 * Void NodoDoble::setObjEmpleado(Empleado *newObjEmpleado)
 *
 * @param newObjEmpleado es un puntero a un objeto de tipo Empleado
 */

void NodoDoble::setValor(int newValor)
{
	valor = newValor;
}

/**
 * NodoDoble *NodoDoble::getSiguiente()
 *
 * @return El siguiente nodo.
 */
NodoDoble *NodoDoble::getSiguiente()
{
   return siguiente;
}

/**
 * *|CURSOR_MARCADOR|*
 *
 * @param newSiguiente El nuevo nodo que será el siguiente nodo en la lista.
 */
void NodoDoble::setSiguiente(NodoDoble *newSiguiente)
{
   siguiente = newSiguiente;
}

/**
 * NodoDoble *NodoDoble::getAnterior()
 * {
 *    volver anterior;
 * }
 *
 * @return El valor de la variable anterior.
 */
NodoDoble *NodoDoble::getAnterior()
{
   return anterior;
}

/**
 * *|CURSOR_MARCADOR|*
 *
 * @param newAnterior El nuevo nodo que se establecerá como el nodo anterior.
 */
void NodoDoble::setAnterior(NodoDoble *newAnterior)
{
   anterior = newAnterior;
}

/**
 * NodoDoble::~NodoDoble(){
 *
 * }
 */
NodoDoble::~NodoDoble(){
    siguiente = nullptr;
    anterior = nullptr;
}
