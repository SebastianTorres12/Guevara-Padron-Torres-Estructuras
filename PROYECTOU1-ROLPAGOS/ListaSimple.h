/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 19/11/2022
FECHA DE MODIFICACIÓN: 29/11/2022
Proyecto Unidad 1-Rol de pagos
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/

#if !defined(__Class_Diagram_1_NominaSimple_h)
#define __Class_Diagram_1_NominaSimple_h

#include "NodoSimple.cpp"
#include "FuncionesLista.h"

template <typename T> 
class ListaSimple : public FuncionesLista {
public:
   ListaSimple();
   ~ListaSimple();
    void insertarPorCabeza(Empleado *);
    void insertarPorCola(Empleado *);
    void eliminarPorCabeza();
    void eliminarPorCola();
	void mostrarPorCabeza();
	void buscar(int);
	bool getListaVacia();
    NodoSimple *getPrimero(void);
    void setPrimero(NodoSimple *newPrimero);
    NodoSimple *getActual(void);
    void setActual(NodoSimple *newActual);
    int getNumNodos();


protected:
private:
   NodoSimple *primero;
   NodoSimple *actual;
   int numNodos;

};

#endif