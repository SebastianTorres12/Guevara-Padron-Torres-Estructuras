/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 19/11/2022
FECHA DE MODIFICACIÓN: 29/11/2022
Proyecto Unidad 1-Rol de pagos
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include "Conjunto.h"
#pragma once

template <typename T>
Conjunto<T>::Conjunto()
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
bool Conjunto<T>::getListaVacia()
{
	return (this->primero==NULL);
}

/**
 * *|CURSOR_MARCADOR|*
 *
 * @param first El primer nodo de la lista.
 */
template <typename T>
void Conjunto<T>::setPrimero(NodoDoble *first)
{
	primero = first;
}

/**
 * *|CURSOR_MARCADOR|*
 *
 * @param now El nodo que se establecerá como el nodo real.
 */
template <typename T>
void Conjunto<T>::setActual(NodoDoble *now)
{
	actual = now;
}

/**
 * *|CURSOR_MARCADOR|*
 *
 * @return El primer nodo de la lista.
 */
template <typename T>
NodoDoble *Conjunto<T>::getPrimero()
{
	return primero;
}

/**
 * *|CURSOR_MARCADOR|*
 *
 * @return El nodo real.
 */
template <typename T>
NodoDoble *Conjunto<T>::getActual()
{
	return actual;
}

/**
 * Devuelve el número de nodos de la lista.
 *
 * @return El número de nodos en la lista.
 */
template <typename T>
int Conjunto<T>::getNumNodos() {
	return this->numNodos;
}
//metodos de orden de la Conjunto


template <typename T>
void Conjunto<T>::insertarPorCola(int valor)
{

	NodoDoble *nuevoNody=new NodoDoble(valor);
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

}




/**
 * Elimina el primer nodo de la lista.
 */
template <typename T>
void Conjunto<T>::eliminarPorCabeza(){
		if(getListaVacia())
	{
		cout<<"\nNo se puede eliminar elementos de un conjunto vacio."<<endl;
	}
	else
	{
		NodoDoble *nodoAuxiliar = primero->getSiguiente();

		primero=NULL;
		this->numNodos--;
		setPrimero(nodoAuxiliar);
	}

}

/**
 * Elimina el último nodo de la lista.
 */
template <typename T>
void Conjunto<T>::eliminarPorCola(){

		if(getListaVacia())
	{
		cout<<"\nNo se puede eliminar elementos de un conjunto vacio."<<endl;
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
		actual=NULL;
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
void Conjunto<T>::eliminarEntre(int pos){

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
		     eliminarPorCabeza();
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
				aux=NULL;
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
void Conjunto<T>::mostrarPorCabeza()
{

 	NodoDoble *aux=primero;
  	while(aux){
  	cout<<aux->getValor();
  	cout<<"  ";
  	aux=aux->getSiguiente();

  	}

  	//cout<<"\nNUM VALORES: \n"<<getNumNodos();

}

/**
 * Busca un nodo en la lista.
 *
 * @param cedula es el id del empleado
 */
template <typename T>
void Conjunto<T>::buscar(int valor){

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

			if(aux->getValor()==valor)
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

template <typename T>
void Conjunto<T>::adicionarAlConjunto(Conjunto<T> &conjT){
    NodoDoble *aux;
    aux = conjT.getPrimero();

    while (aux){
        this->insertarPorCola(aux->getValor());
        aux = aux->getSiguiente();
    }

}
template <typename T>
int Conjunto<T>::getPos(int valor){
	int i=1,pos;
	NodoDoble *aux=this->primero;
		while(aux)
		{

			if(valor==aux->getValor())
			{
			pos=i;
			break;
			}
			aux=aux->getSiguiente();
		    i++;

		}
		return pos;
}

template <typename T>
Conjunto<T>& Conjunto<T>::operator=(const Conjunto<T> &conjunto){
    if (this == &conjunto)
        return *this;

    NodoDoble *aux;
    aux = conjunto.primero;
    while (aux){
        insertarPorCola(aux->getValor());
        aux = aux->getSiguiente();
    }

    return *this;
}




