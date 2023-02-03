/*************************
UFA - ESPE
AUTORES: Ariel Guevara,Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 1/02/2023
FECHA DE MODIFICACIÓN: 2/02/2023
Tarea3-Grupo7_CuadradoMágico
GITHUB: Guevara-Padron-Torres-Estructuras
 *************************/
#include "Matriz.h"
#pragma once
template<typename T>
Matriz<T>::Matriz(int f,int c){
	//RESERVACIÓN DE MEMORIA
	this->f=f;
	this->c=c;
		matriz= new T*[f];
		for(int i=0;i<f;i++){
			matriz[i]=new T[c];
		}

	//ENCERAMOS LA MATRIZ
	for(int i=0;i<f;i++){
			for(int j=0;j<c;j++){
				*(*(matriz+(i))+(j)) = NULL;
			}
		}
}

template<typename T>
Matriz<T>::~Matriz(){
}

template<typename T>
 T Matriz<T>::getF(){
 	return f;
 }
 template<typename T>
  T Matriz<T>::getC(){
 	return c;
 }

template<typename T>
T Matriz<T>::getValor(int f,int c){
	return *(*(matriz+f)+c);
}

template<typename T>
void Matriz<T>::setValor(int f,int c, int valor){
	*(*(matriz+f)+c) = valor;
}

template<typename T>
void Matriz<T>::ingresarDatos(){

	char datoIC[10];
	int datoI;
	cout<<"INGRESO DATOS MATRIZ"<<endl;
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<"\n["<<i<<"]["<<j<<"] ";
			//datoI=objValidar.casteoEnteros(datoIC,"Ingrese el valor->");
			*(*(matriz+i)+j)=datoI;
		}
	}
}

template<typename T>
void Matriz<T>::llenarMatriz(){
int valorI=0;
string valorS="15";

	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
	 		valorI=stoi(valorS);
			setValor(i,j,valorI);
		}cout<<endl;
	}
}

template<typename T>
void Matriz<T>::imprimirMatriz(){
	cout<<"\n";
	for(int i=0;i<f;i++){
	 	for(int j=0;j<c;j++){
					cout<<"|"<<*(*(matriz+i)+j)<<"|";
		}	cout<<endl;
	}
}


