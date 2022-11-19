/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 19/11/2022
FECHA DE MODIFICACIÓN: 19/11/2022
Proyecto Unidad 1-Rol de pagos
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/

#if !defined(__Class_Diagram_1_NodoDoble_h)
#define __Class_Diagram_1_NodoDoble_h

#include <Empleado.h>

class NodoDoble
{
public:
   NodoDoble();
   ~NodoDoble();
   NodoDoble getSiguiente(void);
   void setSiguiente(NodoDoble newSiguiente);
   NodoDoble getAnterior(void);
   void setAnterior(NodoDoble newAnterior);
   Empleado getObjEmpleado(void);
   void setObjEmpleado(Empleado newObjEmpleado);

protected:
private:
   NodoDoble siguiente;
   NodoDoble anterior;
   Empleado objEmpleado;


};

#endif