/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 19/11/2022
FECHA DE MODIFICACIÓN: 29/11/2022
Proyecto Unidad 1-Rol de pagos
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/

#include "NodoSimple.h"

/**
 * NodoSimple::NodoSimple(Empleado *objE, NodoSimple *sig=NULL)
 * 
 * @param objE es un objeto de la clase Empleado
 * @param sig es el puntero al siguiente nodo
 */
NodoSimple::NodoSimple(Empleado *objE, NodoSimple *sig=NULL)
{
	this->empleado=objE;
	this->siguiente=sig;
	
}


/**
 * NodoSimple::~NodoSimple()
 */
NodoSimple::~NodoSimple()
{
   // TODO : implement
}


/**
 * *|CURSOR_MARCADOR|*
 * 
 * @return El puntero al siguiente nodo.
 */
NodoSimple *NodoSimple::getSiguiente(void)
{
   return siguiente;
}


/**
 * *|CURSOR_MARCADOR|*
 * 
 * @param newSiguiente El nuevo nodo que será el siguiente nodo en la lista.
 */
void NodoSimple::setSiguiente(NodoSimple *newSiguiente)
{
   siguiente = newSiguiente;
}


/**
 * *|CURSOR_MARCADOR|*
 * 
 * @return Se está devolviendo el objeto empleado.
 */
Empleado *NodoSimple::getObjEmpleado(void)
{
	
   return empleado;
}


/**
 * Establece el valor de la variable empleado al valor de la variable newObjEmpleado.
 * 
 * @param newObjEmpleado es un puntero a un objeto de tipo Empleado
 */
void NodoSimple::setObjEmpleado(Empleado *newObjEmpleado)
{
   empleado = newObjEmpleado;
}