/*************************
UFA - ESPE
AUTORES: Ariel Guevara,Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 1/02/2023
FECHA DE MODIFICACIÓN: 2/02/2023
Tarea3-Grupo7_CuadradoMágico
GITHUB: Guevara-Padron-Torres-Estructuras
 *************************/

#if !defined(__Class_Diagram_1_Vector_h)
#define __Class_Diagram_1_Vector_h

#include "ValidacionDatos.h"
class Vector
{
private:
    int* vect;
    int tamanio;
public:
   Vector(int);
   int getDato(int);
   void encerar();
   void ingresar();
   void procesar();
   void imprimir();
   void ordenarVector();
   bool validarvector();
};

#endif
