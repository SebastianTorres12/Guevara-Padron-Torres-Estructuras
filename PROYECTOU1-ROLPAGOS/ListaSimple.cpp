
/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 19/11/2022
FECHA DE MODIFICACIÓN: 29/11/2022
Proyecto Unidad 1-Rol de pagos
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
# define PorcentajeIEES 0.0945
#include "ListaSimple.h"
#pragma once
////////////////////////////////////////////////////////////////////////
// Name:       ListaSimple::ListaSimple()
// Purpose:    Implementation of ListaSimple::ListaSimple()
// Return:     
////////////////////////////////////////////////////////////////////////
template <typename T> 
ListaSimple<T>::ListaSimple()
{
	this->primero=NULL;
	this->actual=NULL;
	this->numNodos=0;

}

////////////////////////////////////////////////////////////////////////
// Name:       ListaSimple::~ListaSimple()
// Purpose:    Implementation of ListaSimple::~ListaSimple()
// Return:     
////////////////////////////////////////////////////////////////////////
template <typename T> 
ListaSimple<T>::~ListaSimple()
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       ListaSimple::insertarPorCabeza()
// Purpose:    Implementation of ListaSimple::insertarPorCabeza()
// Return:     int
////////////////////////////////////////////////////////////////////////
template <typename T> 
void ListaSimple<T>::insertarPorCabeza(Empleado *empleado)
{
	NodoSimple *aux=primero;
	bool comprobar=true;
	while(aux){
		if(aux->getObjEmpleado()->getCedula()==empleado->getCedula()){
			
			comprobar=false;
			
			break;
		}
		aux = aux->getSiguiente();
	}
	if(comprobar){
	NodoSimple *nuevo = new NodoSimple(empleado);
   if(getListaVacia()){
   	nuevo->setSiguiente(this->primero);
   	setPrimero(nuevo);
   	setActual(nuevo);
   }else{
   	nuevo->setSiguiente(this->primero);
   	setPrimero(nuevo);
   }
   this->numNodos++;
	
	}else{
		cout<<"\nError: el empleado ya existe en el registro, vuelva a intentar."<<endl;
		system("pause");
	}
  

}
////////////////////////////////////////////////////////////////////////
// Name:       ListaSimple::insertarPorCola()
// Purpose:    Implementation of ListaSimple::insertarPorCola()
// Return:     int
////////////////////////////////////////////////////////////////////////
template <typename T> 
void ListaSimple<T>::insertarPorCola(Empleado *empleado){
	NodoSimple *aux=primero;
	bool comprobar=true;
	while(aux){
		if(aux->getObjEmpleado()->getCedula()==empleado->getCedula()){
			
			comprobar=false;
			
			break;
		}
		aux = aux->getSiguiente();
	}
	if(comprobar){
	
	NodoSimple *nuevo=new NodoSimple(empleado);
	if(getListaVacia())
	{
		setPrimero(nuevo);
	}
	else
	{
		this->actual->setSiguiente(nuevo);
	}
	setActual(nuevo);
	this->numNodos++;
	}else{
		cout<<"\nError: el empleado ya existe en el registro, vuelva a intentar."<<endl;
		system("pause");
	}
}
////////////////////////////////////////////////////////////////////////
// Name:       ListaSimple::eliminarPorCabeza()
// Purpose:    Implementation of ListaSimple::eliminarPorCabeza()
// Return:     int
////////////////////////////////////////////////////////////////////////
 template <typename T> 
void ListaSimple<T>::eliminarPorCabeza()
{
   	if(getListaVacia())
	{
		cout<<"\nNo se puede eliminar elementos de una lista sin objetos."<<endl;
	}
	else
	{
		NodoSimple *nodoAuxiliar = primero->getSiguiente();
		delete primero;
		this->numNodos--;
		setPrimero(nodoAuxiliar);
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       ListaSimple::eliminarPorCola()
// Purpose:    Implementation of ListaSimple::eliminarPorCola()
// Return:     int
////////////////////////////////////////////////////////////////////////
template <typename T> 
void ListaSimple<T>::eliminarPorCola()
{
  	if(getListaVacia())
	{
		cout<<"\nNo se puede eliminar elementos de una lista sin objetos."<<endl;
	}
	else
	{
		if(numNodos==1){
			eliminarPorCabeza();
		}else{
		
		NodoSimple *nodoAuxiliar = primero;
		NodoSimple *nodoAnterior =NULL; 
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
}
template <typename T> 
void ListaSimple<T>::mostrarPorCabeza(){
	int i=1;
 	NodoSimple *aux=primero;
  	while(aux){
  	cout<<"\n|||||||||||||||||||||||||"<<endl;
  	cout<<"\n\tEmpleado "<<i<<endl;
  	aux->getObjEmpleado()->informacion();
  	aux=aux->getSiguiente();
  	i++;
  	}
}
template <typename T> 
void ListaSimple<T>::buscar(int cedula){
	NodoSimple *nodoAuxiliar = primero;
	bool encontrado=false;
	for(int x=0;x<=numNodos;x++)
    {
		if(nodoAuxiliar->getObjEmpleado()->getCedula()==cedula)
		{
			encontrado=true;
			break;
		}
        nodoAuxiliar = nodoAuxiliar->getSiguiente();
    }
	if(encontrado)
	{
		cout<<"\nEl empleado es: "<<nodoAuxiliar->getObjEmpleado()->getNombre()<<" "<<nodoAuxiliar->getObjEmpleado()->getApellido()<<endl;
	} else
	{
		cout<<"\nNo se ha encontrado el valor ingresado."<<endl;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       ListaSimple::getPrimero()
// Purpose:    Implementation of ListaSimple::getPrimero()
// Return:     NodoSimple
////////////////////////////////////////////////////////////////////////
template <typename T>
NodoSimple *ListaSimple<T>::getPrimero(void)
{
   return primero;
}

////////////////////////////////////////////////////////////////////////
// Name:       ListaSimple::setPrimero(NodoSimple newPrimero)
// Purpose:    Implementation of ListaSimple::setPrimero()
// Parameters:
// - newPrimero
// Return:     void
////////////////////////////////////////////////////////////////////////
template <typename T>
void ListaSimple<T>::setPrimero(NodoSimple *newPrimero)
{
   primero = newPrimero;
}

////////////////////////////////////////////////////////////////////////
// Name:       ListaSimple::getActual()
// Purpose:    Implementation of ListaSimple::getActual()
// Return:     NodoSimple
////////////////////////////////////////////////////////////////////////
template <typename T>
NodoSimple *ListaSimple<T>::getActual(void)
{
   return actual;
}

////////////////////////////////////////////////////////////////////////
// Name:       ListaSimple::setActual(NodoSimple newActual)
// Purpose:    Implementation of ListaSimple::setActual()
// Parameters:
// - newActual
// Return:     void
////////////////////////////////////////////////////////////////////////
template <typename T>
void ListaSimple<T>::setActual(NodoSimple *newActual)
{
   actual = newActual;
}

////////////////////////////////////////////////////////////////////////
// Name:       ListaSimple::getListaVacia()
// Purpose:    Implementation of ListaSimple::getListaVacia()
// Return:     bool
////////////////////////////////////////////////////////////////////////
template <typename T>
bool ListaSimple<T>::getListaVacia(void)
{
  return (this->primero==NULL);
}
template <typename T>
int ListaSimple<T>::getNumNodos(){
	return numNodos;
}

////////////////////////////////////////////////////////////////////////
// Name:       ListaSimple::espaciar(int tamanio, int valor)
// Purpose:    ListaSimple::espaciar(int tamanio, int valor)
// Return:     string
////////////////////////////////////////////////////////////////////////

