/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 19/11/2022
FECHA DE MODIFICACIÓN: 19/11/2022
Proyecto Unidad 1-Rol de pagos
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/

#if !defined(__Class_Diagram_1_NominaDoble_h)
#define __Class_Diagram_1_NominaDoble_h

#include <NodoSimple.h>

class NominaDoble
{
public:
   NominaDoble();
   ~NominaDoble();
   int insertarPorCabeza(void);
   int eliminarPorCabeza(void);
   int eliminarPorCola(void);
   int mostrarNominaD(void);
   double calcularIess(void);
   double calcularHorasSup(void);
   double calcularHorasExtra(void);
   double calcularImpRenta(void);
   double calcularIngresos(void);
   double calcularEgresos(void);
   void generarRolPagos(void);
   NodoSimple getPrimero(void);
   void setPrimero(NodoSimple newPrimero);
   NodoSimple getActual(void);
   void setActual(NodoSimple newActual);
   bool getListaVacia(void);

protected:
private:
   NodoSimple primero;
   NodoSimple actual;


};

#endif