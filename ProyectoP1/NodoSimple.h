/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 19/11/2022
FECHA DE MODIFICACIÓN: 19/11/2022
Proyecto Unidad 1-Rol de pagos
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/

#if !defined(__Class_Diagram_1_NodoSimple_h)
#define __Class_Diagram_1_NodoSimple_h

#include <Empleado.h>

class NodoSimple
{
public:
   NodoSimple();
   ~NodoSimple();
   NodoSimple getSiguiente(void);
   void setSiguiente(NodoSimple newSiguiente);
   Empleado getObjEmpleado(void);
   void setObjEmpleado(Empleado newObjEmpleado);

protected:
private:
   NodoSimple siguiente;
   Empleado objEmpleado;


};

#endif