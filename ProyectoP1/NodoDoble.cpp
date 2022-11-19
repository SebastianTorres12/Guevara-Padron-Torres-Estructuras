/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 19/11/2022
FECHA DE MODIFICACIÓN: 19/11/2022
Proyecto Unidad 1-Rol de pagos
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/

#include "NodoDoble.h"

////////////////////////////////////////////////////////////////////////
// Name:       NodoDoble::NodoDoble()
// Purpose:    Implementation of NodoDoble::NodoDoble()
// Return:     
////////////////////////////////////////////////////////////////////////

NodoDoble::NodoDoble()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoDoble::~NodoDoble()
// Purpose:    Implementation of NodoDoble::~NodoDoble()
// Return:     
////////////////////////////////////////////////////////////////////////

NodoDoble::~NodoDoble()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoDoble::getSiguiente()
// Purpose:    Implementation of NodoDoble::getSiguiente()
// Return:     NodoDoble
////////////////////////////////////////////////////////////////////////

NodoDoble NodoDoble::getSiguiente(void)
{
   return siguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoDoble::setSiguiente(NodoDoble newSiguiente)
// Purpose:    Implementation of NodoDoble::setSiguiente()
// Parameters:
// - newSiguiente
// Return:     void
////////////////////////////////////////////////////////////////////////

void NodoDoble::setSiguiente(NodoDoble newSiguiente)
{
   siguiente = newSiguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoDoble::getAnterior()
// Purpose:    Implementation of NodoDoble::getAnterior()
// Return:     NodoDoble
////////////////////////////////////////////////////////////////////////

NodoDoble NodoDoble::getAnterior(void)
{
   return anterior;
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoDoble::setAnterior(NodoDoble newAnterior)
// Purpose:    Implementation of NodoDoble::setAnterior()
// Parameters:
// - newAnterior
// Return:     void
////////////////////////////////////////////////////////////////////////

void NodoDoble::setAnterior(NodoDoble newAnterior)
{
   anterior = newAnterior;
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoDoble::getObjEmpleado()
// Purpose:    Implementation of NodoDoble::getObjEmpleado()
// Return:     Empleado
////////////////////////////////////////////////////////////////////////

Empleado NodoDoble::getObjEmpleado(void)
{
   return objEmpleado;
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoDoble::setObjEmpleado(Empleado newObjEmpleado)
// Purpose:    Implementation of NodoDoble::setObjEmpleado()
// Parameters:
// - newObjEmpleado
// Return:     void
////////////////////////////////////////////////////////////////////////

void NodoDoble::setObjEmpleado(Empleado newObjEmpleado)
{
   objEmpleado = newObjEmpleado;
}