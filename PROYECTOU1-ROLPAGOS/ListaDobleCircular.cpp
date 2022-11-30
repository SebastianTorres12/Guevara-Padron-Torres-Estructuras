/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 19/11/2022
FECHA DE MODIFICACIÓN: 29/11/2022
Proyecto Unidad 1-Rol de pagos
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
 
#include "ListaDobleCircular.h"
//#include "Archivo.cpp"
#pragma once

/**
 * ListaDobleCircular<T>::ListaDobleCircular(){
 * 	this->cabeza=NULL;
 * 	this->actual=NULL;
 * 	numNodos=0;
 * }
 */
template <typename T>
ListaDobleCircular<T>::ListaDobleCircular(){
	this->cabeza=NULL;
	this->actual=NULL;
	numNodos=0;
}

template <typename T>
ListaDobleCircular<T>::~ListaDobleCircular(){
}

/**
 * NodoDoble* ListaDobleCircular<T>::getActual(){
 * devuelve esto->real;
 * }
 * 
 * @return El nodo real.
 */
template <typename T>
NodoDoble* ListaDobleCircular<T>::getActual(){
	return this->actual;
}

/**
 * NodoDoble* ListaDobleCircular<T>::getCabeza(){
 * 	return this->cabeza;
 * }
 * 
 * @return El cabeza de lista.
 */
template <typename T>
NodoDoble* ListaDobleCircular<T>::getCabeza(){
	return this->cabeza;
} 

/**
 * Devuelve el número de nodos de la lista.
 * 
 * @return El número de nodos en la lista.
 */
template <typename T>
int ListaDobleCircular<T>::getNumNodos() {
	return this->numNodos;
}

/**
 * *|CURSOR_MARCADOR|*
 * 
 * @param cabeza NodoDoble*
 */
template <typename T>
void ListaDobleCircular<T>::setCabeza(NodoDoble* cabeza){
	this->cabeza =cabeza;
}


/**
 * Void ListaDobleCircular<T>::setActual(NodoDoble* actual){
 * esto->real =actual;
 * }
 * 
 * @param actual es un puntero a un nodo
 */
template <typename T>
void ListaDobleCircular<T>::setActual(NodoDoble* actual){
	this->actual =actual;
} 

/**
 * void ListaDobleCircular<T>::setNumNodes(int numNodes){
 * this->numNodes = numNodes;
 * }
 * 
 * @param numNodos número de nodos en la lista
 */
template <typename T>
void ListaDobleCircular<T>::setNumNodos(int numNodos){
	this->numNodos=numNodos;
}

/**
 * Devuelve verdadero si la lista está vacía, falso en caso contrario.
 * 
 * @return un valor booleano.
 */
template <typename T>
bool ListaDobleCircular<T>::getListaVacia(){
	return (this->cabeza==NULL);	
}

/**
 * Inserta un nuevo nodo al principio de la lista.
 * 
 * @param empleado es un puntero a un objeto de la clase Empleado
 */
template <typename T>
void ListaDobleCircular<T>::insertarPorCabeza(Empleado *empleado){
	
	NodoDoble *aux=this->cabeza;
	bool comprobar=true;
	for(int i=1;i<=numNodos;i++){
		if(aux->getObjEmpleado()->getCedula()==empleado->getCedula()){
			comprobar=false;
			break;
 		}
 		aux=aux->getSiguiente();
 	}
	//
	if(comprobar){
	
	NodoDoble *nuevoNodo= new NodoDoble(empleado);
	NodoDoble *temp=this->cabeza;
	
	if(numNodos==0){
		this->cabeza=nuevoNodo;
		cabeza->setSiguiente(cabeza);
		cabeza->setAnterior(cabeza);
	}
	else{
		while(temp->getSiguiente() !=this->cabeza){
		temp=temp->getSiguiente() ;
		}
		nuevoNodo->setSiguiente(temp->getSiguiente());
		nuevoNodo->setAnterior(temp);
		temp->setSiguiente(nuevoNodo);
		cabeza->setAnterior(nuevoNodo);
		cabeza=nuevoNodo;		
		
	}
	numNodos++;
	}else{
		cout<<"\nError: el empleado ya existe en el registro, vuelva a intentar."<<endl;
		system("pause");
	}
}

/**
 * Inserta un nuevo nodo al final de la lista.
 * 
 * @param empleado es un objeto de la clase Empleado
 */
template <typename T>
void ListaDobleCircular<T>::insertarPorCola(Empleado *empleado){
	NodoDoble *aux=this->cabeza;
	bool comprobar=true;
	for(int i=1;i<=numNodos;i++){
		if(aux->getObjEmpleado()->getCedula()==empleado->getCedula()){
			comprobar=false;
			break;
 		}
 		aux=aux->getSiguiente();
 	}
	//
	if(comprobar){
	
	NodoDoble *nuevoNodo= new NodoDoble(empleado);
	NodoDoble *temp=this->cabeza;
	
	if(numNodos==0){
		this->cabeza=nuevoNodo;
		cabeza->setSiguiente(cabeza);
		cabeza->setAnterior(cabeza);
	}
	else{
		while(temp->getSiguiente() !=this->cabeza){
			temp=temp->getSiguiente() ;
		}
		nuevoNodo->setSiguiente(temp->getSiguiente());
		nuevoNodo->setAnterior(temp);
		temp->setSiguiente(nuevoNodo);
		cabeza->setAnterior(nuevoNodo);
	}
	numNodos++;
	}else{
		cout<<"\nError: el empleado ya existe en el registro, vuelva a intentar."<<endl;
		system("pause");
	}
}

/**
 * Agrega un nodo a la lista.
 * 
 * @param empleado es un objeto de la clase Empleado
 */
template <typename T>
void ListaDobleCircular<T>::agregarEnPosicion(Empleado *empleado) {
	NodoDoble *aux=this->cabeza;
	bool comprobar=true;
	for(int i=1;i<=numNodos;i++){
		if(aux->getObjEmpleado()->getCedula()==empleado->getCedula()){
			comprobar=false;
			break;
 		}
 		aux=aux->getSiguiente();
 	}	//
	if(comprobar){
	
	NodoDoble *nuevoNodo= new NodoDoble(empleado);
	NodoDoble *tempant=cabeza;
	NodoDoble *tempsig=cabeza;
	ValidacionDatos objValidar;
	char posC[10];
	int pos;
	if(numNodos==0){
		
		this->cabeza=nuevoNodo;
		cabeza->setSiguiente(cabeza);
		cabeza->setAnterior(cabeza);
	}
	else{
		pos=objValidar.casteoEnteros(posC,"\nIngrese el N de la posicion en la cual desea ingresar el empleado: ");
		int i=1;
		if (pos==1){
			this->insertarPorCabeza(empleado);
			
		}else if(pos==0){
		cout<<"\nLa posicion no corresponde al numero de empleados "<<endl;
		}
		else if (pos>numNodos+1)
		{
			cout<<"\nLa posicion excede el numero de empleados "<<endl;
		}
		else if (pos==numNodos)
		{
			this->insertarPorCola(empleado);
		}

		else{
			for (int i = 1; i < pos; i++)
			{
				tempsig=tempsig->getSiguiente(); //se almacena la posición siguiente en temp
			}
			tempant=tempsig->getAnterior();

			nuevoNodo->setSiguiente(tempsig);
			tempant->setSiguiente(nuevoNodo);
			nuevoNodo->setAnterior(tempant);
			tempsig->setAnterior(nuevoNodo);
			numNodos++;
		}
	}
	}else{
			cout<<"\nError: el empleado ya existe en el registro, vuelva a intentar."<<endl;
		system("pause");
	}
}

/**
 * Es una función que imprime la información de los empleados en la lista
 */
template <typename T>
void ListaDobleCircular<T>::mostrarPorCabeza() {
    int i=1;
	if(numNodos==0){
		cout<<"\tLa lista esta vacia "<<endl;
		
	}
	else{
			

  
		NodoDoble *temp=this->cabeza;

		while(temp->getSiguiente() !=this->cabeza){
			cout<<"\n|||||||||||||||||||||||||"<<endl;
  			cout<<"\n\tEmpleado "<<i<<endl;
			temp->getObjEmpleado()->informacion();
			temp=temp->getSiguiente();	
			i++;
		}
		cout<<"\n|||||||||||||||||||||||||"<<endl;
  		cout<<"\n\tEmpleado "<<i<<endl;
		temp->getObjEmpleado()->informacion();
		i++;
	}
	cout<<endl<<endl;
}


/**
 * Elimina el último nodo de la lista.
 */
template <typename T>
void ListaDobleCircular<T>::eliminarPorCola(){
	if(numNodos==0){
		cout<<"\tLa lista no posee empleados a ser eliminados "<<endl;
		system("pause");
		
	}
	else{
		NodoDoble *temp=this->cabeza;
		NodoDoble *ultimo= new NodoDoble();

		while(temp->getSiguiente() !=this->cabeza){
			temp=temp->getSiguiente() ;	
		}		
			ultimo=temp;	
			temp=this->cabeza;
			
			while(temp->getSiguiente() !=ultimo){
			temp=temp->getSiguiente() ;	
			}
			temp->setSiguiente(ultimo->getSiguiente());
			ultimo->getSiguiente()->setAnterior(ultimo->getAnterior());

			delete ultimo;	
	numNodos--;
	}
}


/**
 * Elimina el primer nodo de la lista.
 */
template <typename T>
void ListaDobleCircular<T>::eliminarPorCabeza() {
	if(numNodos==0){
		cout<<"\nLa lista no posee empleados a ser eliminados"<<endl;
		system("pause");
		
	}else{
		NodoDoble *temp = cabeza->getSiguiente();		
		
		temp->setAnterior(cabeza->getAnterior());
		cabeza->getAnterior()->setSiguiente(temp);

		delete cabeza;
		setCabeza(temp); 
		
		numNodos--;
	}
}


/**
 * Elimina un nodo en una posición dada
 * 
 * @param pos posición del nodo a eliminar
 */
template <typename T>
void ListaDobleCircular<T>::borrarEnPosicion(int pos){
	NodoDoble *tempant=cabeza;
	NodoDoble *tempsig=cabeza;
	NodoDoble *tempNodo=cabeza;	
	
	
	
	if(numNodos==0){
		cout<<"\nLa lista no posee empleados a ser eliminados"<<endl;
		system("pause");
	}
	else{	
		
		int i=1;
		if (pos==1){
			this->eliminarPorCabeza();
		}else if(pos==0){
			cout<<"\nLa posicion no corresponde al numero de empleados "<<endl;
		}
		else if (pos>numNodos)
		{
			cout<<"\nLa posicion excede el numero de empleados "<<endl;
		}
		else if (pos==numNodos)
		{
			this->eliminarPorCola();
		}

		else{
			for (int i = 1; i < pos; i++)
			{
				tempsig=tempsig->getSiguiente(); //se almacena la posición siguiente en temp
			}
			tempNodo=tempsig;
			tempant=tempsig->getAnterior();
			tempsig=tempsig->getSiguiente();
			
			tempant->setSiguiente(tempsig);
			tempsig->setAnterior(tempant);
			this->numNodos--;
			delete tempNodo;
			
			cout<<"Empleado: "<<pos<<" eliminado correctamente.\n";	 			
		}		
	} 	
}

/**
 * Busca un nodo en la lista.
 * 
 * @param cedula es el DNI del empleado
 */
template <typename T>
void ListaDobleCircular<T>::buscar(int cedula){
 	NodoDoble *temp = cabeza;
 	int aux=1;
 	int aux2=0;
	
 	while(temp){
		if(temp->getObjEmpleado()->getCedula()==cedula){
			cout<<"El valor buscado se encuentra en la posicion: "<<aux<<endl;
 			aux2++;
			break;
 		}
 		temp=temp->getSiguiente();
 		aux++;
 	}
 	if(aux2==0){
 		cout<<"\tEl dato no existe en la lista :() "<<endl;
 	}
 	cout<<endl<<endl;
}
