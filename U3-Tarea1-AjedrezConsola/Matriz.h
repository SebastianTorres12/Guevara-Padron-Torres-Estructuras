/*************************
UFA - ESPE
AUTORES: Ariel Guevara,Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 25/01/2023
FECHA DE MODIFICACIÓN: 26/01/2023
Tarea1- Tablero ajedrez, lectura de txt.
GITHUB: Guevara-Padron-Torres-Estructuras
 *************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;
template <typename T> 

class Matriz{
	
	private:
	T** matriz;
	int f;
	int c;
	
	public:
	Matriz();
	~Matriz();
	T getF();
    T getC();
	Matriz(int f,int c);
	void ingresarDatos();
	void imprimirMatriz();
	void llenarMatriz();
	T getValor(int f,int c);
	void setValor(int f,int c, int valor);

   
	//Prueba
	//T suma(Matriz matriz1, Matriz matriz2, int fActual, int cActual);
	
};