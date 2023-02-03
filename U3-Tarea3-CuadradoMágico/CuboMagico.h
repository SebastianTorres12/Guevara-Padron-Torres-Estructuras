/*************************
UFA - ESPE
AUTORES: Ariel Guevara,Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 1/02/2023
FECHA DE MODIFICACIÓN: 2/02/2023
Tarea3-Grupo7_CuadradoMágico
GITHUB: Guevara-Padron-Torres-Estructuras
 *************************/
#include "Matriz.cpp"
#if !defined(__Matriz_h)
#define __Matriz_h
#include "Vector.cpp"
class CuboMagico{
    private:
        //Matriz<int> cubo;
    public:
        CuboMagico();
        void llenarCubo(Matriz<int>);
        void llenarCuboManual(Matriz<int>, Vector vec);
        void llenarCuboCuaxCua(Matriz<int> cubo, int dim);
        void sumaMagica(Matriz<int> cubo);
        void mostrar(Matriz<int>);
};

#endif
