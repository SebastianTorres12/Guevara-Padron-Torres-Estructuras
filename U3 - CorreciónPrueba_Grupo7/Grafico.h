/***********************************************************************
UFA - ESPE
AUTORES: Ariel Guevara,Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 31/01/2023
FECHA DE MODIFICACIÓN: 31/01/2023
Tarea2: Correcion Prueba 
GITHUB: Guevara-Padron-Torres-Estructuras
 ***********************************************************************/
#include "Alfil.cpp"
#include <string>
#include <string.h>
#include <sstream>
#include <fstream>
#include <stdlib.h>
#include <graphics.h>

#if !defined(_Grafico)
#define _Grafico

class Grafico{

    public:
    void graficarTablero(Alfil ficha);
    void leerArchivoMatriz(Alfil ficha);
    void movimientosAlfil(Alfil ficha,int x, int y);
};

#endif
