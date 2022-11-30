/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 19/11/2022
FECHA DE MODIFICACIÓN: 29/11/2022
Proyecto Unidad 1-Rol de pagos
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include "ListaDoble.h"
#pragma once

template <typename T> 
ListaDoble<T>::ListaDoble()
{
	this->primero=NULL;
	this->actual=NULL;
	this->numNodos=0;
}
 
/**
 * Devuelve verdadero si la lista está vacía, falso en caso contrario.
 * 
 * @return un valor booleano.
 */
template <typename T>
bool ListaDoble<T>::getListaVacia()
{
	return (this->primero==NULL);
}
 
/**
 * *|CURSOR_MARCADOR|*
 * 
 * @param first El primer nodo de la lista.
 */
template <typename T>
void ListaDoble<T>::setPrimero(NodoDoble *first)
{
	primero = first;
}
 
/**
 * *|CURSOR_MARCADOR|*
 * 
 * @param now El nodo que se establecerá como el nodo real.
 */
template <typename T>
void ListaDoble<T>::setActual(NodoDoble *now)
{
	actual = now;
}
  
/**
 * *|CURSOR_MARCADOR|*
 * 
 * @return El primer nodo de la lista.
 */
template <typename T>
NodoDoble *ListaDoble<T>::getPrimero()
{
	return primero;
}

/**
 * *|CURSOR_MARCADOR|*
 * 
 * @return El nodo real.
 */
template <typename T>
NodoDoble *ListaDoble<T>::getActual()
{
	return actual;
}

/**
 * Devuelve el número de nodos de la lista.
 * 
 * @return El número de nodos en la lista.
 */
template <typename T>
int ListaDoble<T>::getNumNodos() {
	return this->numNodos;
}
//metodos de orden de la ListaDoble
  
/**
 * Inserta un nuevo nodo al principio de la lista.
 * 
 * @param empleado es un objeto de la clase Empleado
 */
template <typename T>
void ListaDoble<T>::insertarPorCabeza(Empleado *empleado)
{
	NodoDoble *aux=primero;
	bool comprobar=true;
	while(aux){
  	if(aux->getObjEmpleado()->getCedula()==empleado->getCedula()){
	comprobar=false;
	break;
	}
	aux = aux->getSiguiente();
  	}
  	if(comprobar){
	NodoDoble *nuevoNody=new NodoDoble(empleado);
	if(getListaVacia()){	
	nuevoNody->setSiguiente(this->primero);
	setPrimero(nuevoNody);
	setActual(nuevoNody);
	this->numNodos++;
	}else{	
	nuevoNody->setSiguiente(this->primero);
	primero->setAnterior(nuevoNody);
	setPrimero(nuevoNody);
	this->numNodos++;
	}
	}else{
		cout<<"\nError: el empleado ya existe en el registro, vuelva a intentar."<<endl;
		system("pause");
	}
}
  
/**
 * Inserta un empleado al final de la lista.
 * 
 * @param empleado es un objeto de la clase Empleado
 */
template <typename T>
void ListaDoble<T>::insertarPorCola(Empleado *empleado)
{
	NodoDoble *aux=primero;
	bool comprobar=true;
  	while(aux){
  		if(aux->getObjEmpleado()->getCedula()==empleado->getCedula()){
		comprobar=false;
		break;
		}
		aux = aux->getSiguiente();
  	}
  	if(comprobar){
	 
	NodoDoble *nuevoNody=new NodoDoble(empleado);
	if(getListaVacia())
	{
		setPrimero(nuevoNody);
		setActual(nuevoNody);
		this->numNodos++;
	}
	else
	{	
		this->actual->setSiguiente(nuevoNody);	
		nuevoNody->setAnterior(getActual());
		setActual(nuevoNody);
		this->numNodos++;
	}
	}else{
		cout<<"\nError: el empleado ya existe en el registro, vuelva a intentar."<<endl;
		system("pause");
	}
}

 
/**
 * Inserta un nodo entre dos nodos.
 * 
 * @param empleado es un objeto de la clase Empleado
 */
template <typename T>
void ListaDoble<T>::insertarEntre(Empleado *empleado){
	
	NodoDoble *aux=primero;
	bool comprobar=true;
  	while(aux){
  		if(aux->getObjEmpleado()->getCedula()==empleado->getCedula()){
		comprobar=false;
		break;
		}
		aux = aux->getSiguiente();
  	}
  	if(comprobar){
	  
	NodoDoble *nuevoNody=new NodoDoble(empleado);
	ValidacionDatos objValidar;
	char posC[10];
	int pos;
	if(getListaVacia())
	{
		printf("\nSe ingresara el nodo en la primera posicion");
		setPrimero(nuevoNody);
		setActual(nuevoNody);
		this->numNodos++;
	}
	else
	{
	    pos=objValidar.casteoEnteros(posC,"\nIngrese N del Empleado debajo del cual desea ingresar el empleado: ");
		int i=1;
		NodoDoble *aux=this->primero;
		while(aux!=NULL)
		{
			if(pos==0){
			cout<<"\nLa posicion no corresponde al numero de empleados "<<endl;
			
			break;
			
			}else if(pos==numNodos){
				insertarPorCola(empleado);
				
				break;
			}
			else if (pos>numNodos)
			{
			cout<<"\nLa posicion excede el numero de empleados "<<endl;
			break;
			}			
			else if(pos==i)
			{
				this->numNodos++;
				nuevoNody->setSiguiente(aux->getSiguiente()); 
				aux->getSiguiente()->setAnterior(nuevoNody);
				nuevoNody->setAnterior(aux); 
				aux->setSiguiente(nuevoNody);
				break;
			}
			aux=aux->getSiguiente();
			
			i++;	
		}
	}
	}else{
		cout<<"\nError: el empleado ya existe en el registro, vuelva a intentar."<<endl;
		system("pause");
	}
}
  
/**
 * Elimina el primer nodo de la lista.
 */
template <typename T>
void ListaDoble<T>::eliminarPorCabeza(){
		if(getListaVacia())
	{
		cout<<"\nNo se puede eliminar elementos de una lista sin objetos."<<endl;
	}
	else
	{
		NodoDoble *nodoAuxiliar = primero->getSiguiente();
		
		delete primero;
		numNodos--;
		setPrimero(nodoAuxiliar);
	}
	
}

/**
 * Elimina el último nodo de la lista.
 */
template <typename T>
void ListaDoble<T>::eliminarPorCola(){
	
		if(getListaVacia())
	{
		cout<<"\nNo se puede eliminar elementos de una lista sin objetos."<<endl;
	}
	else if(numNodos==1){
		eliminarPorCabeza();
		}else{
		NodoDoble *nodoAuxiliar = primero;
		NodoDoble *nodoAnterior = NULL; 
		while(nodoAuxiliar->getSiguiente()!=NULL)
        {
				nodoAnterior=nodoAuxiliar;
                nodoAuxiliar = nodoAuxiliar->getSiguiente();
        }
		delete actual;
		this->numNodos--;
		nodoAnterior->setSiguiente(NULL);
		setActual(nodoAnterior);
	}
	
}
 
/**
 * Elimina un nodo de la lista, pero no funciona
 * 
 * @param pos posición del nodo a eliminar
 */
template <typename T>
void ListaDoble<T>::eliminarEntre(int pos){

	if(getListaVacia())
	{
		printf("\nNo se puede eliminar debido a que la lista esta vacia");		
	}
	else
	{

		int i=1;
		NodoDoble *aux=this->primero;
		while(aux)
		{
			
			if(pos==1){
			this->numNodos--;
			delete primero;
			aux=this->primero->getSiguiente();
			setPrimero(aux);
			break;	
			}else if(pos==numNodos){
				this->eliminarPorCola();
				break;
			}else if(pos==0){
			cout<<"\nLa posicion no corresponde al numero de empleados "<<endl;
			break;
			}
			else if (pos>numNodos)
			{
			cout<<"\nLa posicion excede el numero de empleados "<<endl;
			break;
			}
			else if(pos==i)
			{
				aux->getAnterior()->setSiguiente(aux->getSiguiente());
				aux->getSiguiente()->setAnterior(aux->getAnterior());
				delete aux;
				numNodos--;
				break;
			}
			aux=aux->getSiguiente();
			
			i++;	
		}
	}
}
  
/**
 * Es una función que imprime la información de los empleados en la lista
 */
template <typename T>
void ListaDoble<T>::mostrarPorCabeza()
{
	int i=1;
 	NodoDoble *aux=primero;
  	while(aux){
  	cout<<"\n|||||||||||||||||||||||||"<<endl;
  	cout<<"\n\tEmpleado "<<i<<endl;
  	aux->getObjEmpleado()->informacion();
  	aux=aux->getSiguiente();
  	i++;
  	}
	
}

/**
 * Busca un nodo en la lista.
 * 
 * @param cedula es el id del empleado
 */
template <typename T>
void ListaDoble<T>::buscar(int cedula){
	
	if(getListaVacia())
	{
		printf("\nNo se puede buscar debido a que la lista esta vacia");		
	}
	else
	{
	
		int i=1;
		bool encontrado = false;
		NodoDoble *aux=this->primero;		
		while(aux)		
		{
			
			if(aux->getObjEmpleado()->getCedula()==cedula)
			{
				printf("\nLa posicion en la que se encontro es-> %d",i);	
				encontrado=true;
				break;
			}
			aux=aux->getSiguiente();
		    i++;
			
		}
		if(encontrado==false){
			printf("\nNo se ha encontrado el valor ingresado\n");
		}
	}

}

