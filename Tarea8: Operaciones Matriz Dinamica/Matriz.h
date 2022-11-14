/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 11/11/2022
FECHA DE MODIFICACIÓN: 13/11/2022
Tarea8: Operaciones Matriz Dinamica
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "ValidacionDatos.cpp"
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
	Matriz(int f,int c);
	void ingresarDatos();
	void imprimirMatriz();
	T getValor(int f,int c);
	void setValor(int f,int c, int valor);
	int sumaRecursiva(Matriz matriz1, Matriz matriz2, int f, int c);
	int multiplicacionRecursiva(Matriz matriz1, Matriz matriz2, int f, int c);
};