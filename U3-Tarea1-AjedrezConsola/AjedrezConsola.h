/*************************
UFA - ESPE
AUTORES: Ariel Guevara,Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 25/01/2023
FECHA DE MODIFICACIÓN: 26/01/2023
Tarea1- Tablero ajedrez, lectura de txt.
GITHUB: Guevara-Padron-Torres-Estructuras
 *************************/
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <fstream>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <vector>
#include <sstream>
#include "Matriz.cpp"

class AjedrezConsola{
	
	public:
		void dibujarCuadradoNegro(int tam);
		void dibujarCuadradoBlanco(int tam);
		void dibujarTableroMatriz(int tam, Matriz<int> matriz);
		void leerArchivoMatriz(Matriz<int> matriz);
};