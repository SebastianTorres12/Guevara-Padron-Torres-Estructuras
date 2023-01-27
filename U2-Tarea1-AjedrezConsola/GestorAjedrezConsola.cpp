/*************************
UFA - ESPE
AUTORES: Ariel Guevara,Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 25/01/2023
FECHA DE MODIFICACIÓN: 26/01/2023
Tarea1- Tablero ajedrez, lectura de txt.
GITHUB: Guevara-Padron-Torres-Estructuras
 *************************/
#include "AjedrezConsola.cpp"
int main(){
	AjedrezConsola objA;
    Matriz <int> mat(8,8);
    objA.leerArchivoMatriz(mat);
    objA.dibujarTableroMatriz(4,mat);
    getch();
    return 0;
}