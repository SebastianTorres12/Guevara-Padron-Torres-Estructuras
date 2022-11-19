/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 19/11/2022
FECHA DE MODIFICACIÓN: 19/11/2022
Proyecto Unidad 1-Rol de pagos
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/

#include "NodoSimple.h"

////////////////////////////////////////////////////////////////////////
// Name:       NodoSimple::NodoSimple()
// Purpose:    Implementation of NodoSimple::NodoSimple()
// Return:     
////////////////////////////////////////////////////////////////////////

NodoSimple::NodoSimple()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoSimple::~NodoSimple()
// Purpose:    Implementation of NodoSimple::~NodoSimple()
// Return:     
////////////////////////////////////////////////////////////////////////

NodoSimple::~NodoSimple()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoSimple::getSiguiente()
// Purpose:    Implementation of NodoSimple::getSiguiente()
// Return:     NodoSimple
////////////////////////////////////////////////////////////////////////

NodoSimple NodoSimple::getSiguiente(void)
{
   return siguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoSimple::setSiguiente(NodoSimple newSiguiente)
// Purpose:    Implementation of NodoSimple::setSiguiente()
// Parameters:
// - newSiguiente
// Return:     void
////////////////////////////////////////////////////////////////////////

void NodoSimple::setSiguiente(NodoSimple newSiguiente)
{
   siguiente = newSiguiente;
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoSimple::getObjEmpleado()
// Purpose:    Implementation of NodoSimple::getObjEmpleado()
// Return:     Empleado
////////////////////////////////////////////////////////////////////////

Empleado NodoSimple::getObjEmpleado(void)
{
   return objEmpleado;
}

////////////////////////////////////////////////////////////////////////
// Name:       NodoSimple::setObjEmpleado(Empleado newObjEmpleado)
// Purpose:    Implementation of NodoSimple::setObjEmpleado()
// Parameters:
// - newObjEmpleado
// Return:     void
////////////////////////////////////////////////////////////////////////

void NodoSimple::setObjEmpleado(Empleado newObjEmpleado)
{
   objEmpleado = newObjEmpleado;
}