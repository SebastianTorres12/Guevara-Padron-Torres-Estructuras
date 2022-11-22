/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 22/11/2022
FECHA DE MODIFICACIÓN: 22/11/2022
Tarea11: Lista Doble Circular
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
 
#include "ListaDobleCircular.h"

ListaDobleCircular::ListaDobleCircular(){
	this->cabeza=NULL;
	this->actual=NULL;
	numNodos=0;
}

ListaDobleCircular::~ListaDobleCircular(){

}

Nodo* ListaDobleCircular::getActual(){
	return this->actual;
} 

int ListaDobleCircular::getNumNodos() {
	return this->numNodos;
}

void ListaDobleCircular::setCabeza(Nodo* cabeza){
	this->cabeza =cabeza;
} 

void ListaDobleCircular::setActual(Nodo* actual){
	this->actual =actual;
} 

void ListaDobleCircular::setNumNodos(int numNodos){
	this->numNodos=numNodos;
}

bool ListaDobleCircular::ListaVacia(){
	return (this->cabeza==NULL);	
}

void ListaDobleCircular::agregarCabeza(int valor){
	Nodo *nuevoNodo= new Nodo(valor);
	Nodo *temp=this->cabeza;
	
	if(ListaVacia()){
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
} 

void ListaDobleCircular::agregarCola(int valor){
	Nodo *nuevoNodo= new Nodo(valor);
	Nodo *temp=this->cabeza;
	
	if(ListaVacia()){
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
} 

void ListaDobleCircular::agregarEnPosicion(int pos, int _valor) {
	Nodo *nuevoNodo= new Nodo(_valor);
	Nodo *tempant=cabeza;
	Nodo *tempsig=cabeza;

	if(ListaVacia()){
		cout<<"La lista esta vacia, Se agregaá el valor en la cabeza "<<endl;
		this->cabeza=nuevoNodo;
		cabeza->setSiguiente(cabeza);
		cabeza->setAnterior(cabeza);
	}
	else{

		if (pos==1){
			this->agregarCabeza(_valor);
		}
		else if (pos>numNodos+1)
		{
			cout<<"La posicion excede el numero de nodos "<<endl;
		}
		else if (pos==numNodos+1)
		{
			this->agregarCola(_valor);
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
		}
	}
	numNodos++;
}

void ListaDobleCircular::imprimirCabeza() {

	if(ListaVacia()){
		cout<<"\tLa lista esta vacia "<<endl;
	}
	else{
		Nodo *temp=this->cabeza;

		while(temp->getSiguiente() !=this->cabeza){
			temp->imprimirNodoCabeza();
			temp=temp->getSiguiente() ;	
		}
		temp->imprimirNodoCabeza();
		cout<<"-------";
		temp->getSiguiente()->imprimirNodoCabeza();
	}
	cout<<endl<<endl;
}

void ListaDobleCircular::imprimirCola(){
	if(ListaVacia()){
		cout<<"\tLa lista esta vacia "<<endl;
	}
	else{
		Nodo *temp=this->cabeza;

		while(temp->getSiguiente() !=this->cabeza){
			temp=temp->getSiguiente() ;	
		}	
		while (temp->getAnterior() !=this->cabeza){
			temp->imprimirNodoCola();
			temp=temp->getAnterior();
		}
		temp->imprimirNodoCola();
		cabeza->imprimirNodoCola();
	}
	cout<<endl<<endl;
}

void ListaDobleCircular::borrarCola(){
	if(ListaVacia()){
		cout<<"\tLa lista esta vacia "<<endl;
	}
	else{
		Nodo *temp=this->cabeza;
		Nodo *ultimo= new Nodo();

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
	cout<<"\nSe elimino correctamente el ultimo nodo\n";
	}
}

void ListaDobleCircular::borrarCabeza() {
	if(ListaVacia()){
		cout<<"\nNo hay elementos en la lista"<<endl;
	}else{
		Nodo *temp = cabeza->getSiguiente();		
		
		temp->setAnterior(cabeza->getAnterior());
		cabeza->getAnterior()->setSiguiente(temp);

		delete cabeza;
		setCabeza(temp); 
		
		cout<<"\nSe elimino correctamente el primer nodo\n";
		numNodos--;
	}
}

void ListaDobleCircular::borrarEnPosicion(int pos){
	Nodo *tempant=cabeza;
	Nodo *tempsig=cabeza;
	Nodo *tempNodo=cabeza;	
	
	if(ListaVacia()){
		cout<<"La lista esta vacia"<<endl;
	}
	else{	

		if (pos==1){
			this->borrarCabeza();
		}
		else if (pos>numNodos+1)
		{
			cout<<"La posicion excede el numero de nodos "<<endl;
		}
		else if (pos==numNodos)
		{
			this->borrarCola();
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
			delete tempNodo;
			cout<<"Nodo: "<<pos<<" eliminado correctamente.\n";	 			
		}		
	} 	
}

void ListaDobleCircular::buscar(int valor){
 	Nodo *temp = cabeza;
 	int aux=1;
 	int aux2=0;
	
 	while(temp){
		if(temp->getValor()==valor){
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