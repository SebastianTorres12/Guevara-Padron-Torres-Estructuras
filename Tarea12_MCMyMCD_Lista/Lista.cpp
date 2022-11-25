/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 24/11/2022
FECHA DE MODIFICACIÓN: 24/11/2022
Tarea12_MCMyMCD_Lista
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include "Lista.h"
#include <functional>
Lista::Lista()
{
	this->primero=NULL;
	this->actual=NULL;
} 
bool Lista::getListaVacia()
{
	return (this->primero==NULL);
}

void Lista::setPrimero(Nodo *first)
{
	primero = first;
}
void Lista::setActual(Nodo *now)
{
	actual = now;
}
Nodo *Lista::getPrimero()
{
	return primero;
}
Nodo *Lista::getActual()
{
	return actual;
}

//metodos de orden de la lista
void Lista::insertarPorCabeza(int valor)
{
	Nodo *nuevoNody=new Nodo(valor,NULL,NULL);
	if(getListaVacia()){	
	nuevoNody->setSiguiente(this->primero);
	setPrimero(nuevoNody);
	setActual(nuevoNody);
	}else{	
	nuevoNody->setSiguiente(this->primero);
	primero->setAnterior(nuevoNody);
	setPrimero(nuevoNody);
	}
	
}
void Lista::insertarPorCola(int valor)
{
	Nodo *nuevoNody=new Nodo(valor,NULL,NULL);
	if(getListaVacia())
	{
		setPrimero(nuevoNody);
		setActual(nuevoNody);
	}
	else
	{	
		this->actual->setSiguiente(nuevoNody);	
		nuevoNody->setAnterior(getActual());
		setActual(nuevoNody);
	}
}
void Lista::insertarEntre(int valor){
	Nodo *nuevoNody=new Nodo(valor,NULL,NULL);
	ValidacionDatos objValidar;
	char posC[10];
	int pos;
	if(getListaVacia())
	{
		printf("Se ingresara el nodo en la primera posicion");
		setPrimero(nuevoNody);
		setActual(nuevoNody);
	}
	else
	{
	    pos=objValidar.casteoEnteros(posC,"\nIngrese N del nodo debajo del cual desea ingresar el valor: ");
		int i=1;
		Nodo *aux=this->primero;
		while(aux!=NULL)
		{
			
			if(pos==i)
			{
				nuevoNody->setSiguiente(aux->getSiguiente()); 
				aux->getSiguiente()->setAnterior(nuevoNody);
				nuevoNody->setAnterior(aux); 
				aux->setSiguiente(nuevoNody);
				//printf("Siguiente: %d \nAnterior: %d\n",nuevoNody->getSiguiente()->getValor(),nuevoNody->getAnterior()->getValor());
				break;
			}
			aux=aux->getSiguiente();
		  
			i++;	
		}
	}
}

void Lista::eliminarPorCabeza(){
		if(getListaVacia())
	{
		cout<<"\nNo se puede eliminar elementos de una lista sin objetos."<<endl;
	}
	else
	{
		Nodo *nodoAuxiliar = primero->getSiguiente();
		
		delete primero;
		setPrimero(nodoAuxiliar);
	}
}
void Lista::eliminarPorCola(){
	
		if(getListaVacia())
	{
		cout<<"\nNo se puede eliminar elementos de una lista sin objetos."<<endl;
	}
	else
	{
		Nodo *nodoAuxiliar = primero;
		Nodo *nodoAnterior = NULL; 
		while(nodoAuxiliar->getSiguiente()!=NULL)
        {
				nodoAnterior=nodoAuxiliar;
                nodoAuxiliar = nodoAuxiliar->getSiguiente();
        }
		delete actual;
		nodoAnterior->setSiguiente(NULL);
		setActual(nodoAnterior);
	}
	
}
void Lista::eliminarEntre(){
	ValidacionDatos objValidar;
	char posC[10];
	int pos;
	if(getListaVacia())
	{
		printf("\nNo se puede eliminar debido a que la lista esta vacia");		
	}
	else
	{
		pos=objValidar.casteoEnteros(posC,"\nIngrese N del nodo que desea eliminar: ");
		int i=1;
		Nodo *aux=this->primero;
		while(aux)
		{
			
			if(pos==i)
			{
				aux->getAnterior()->setSiguiente(aux->getSiguiente());
				aux->getSiguiente()->setAnterior(aux->getAnterior());
				delete aux;
				break;
			}
			aux=aux->getSiguiente();
			i++;	
		}
	}
}

void Lista::mostrar()
{
	int i=1;
	Nodo *aux=this->primero;
	while(aux!=NULL)
	{
		printf("\tNodo %d: %d\n",i,aux->getValor());
		//cout<<"-->";
		aux=aux->getSiguiente();
		i++;	
	}
	//cout<<"NULL\n";
	
}
void Lista::buscarPrimeraInstancia(int valor){
	
	if(getListaVacia())
	{
		printf("\nNo se puede buscar debido a que la lista esta vacia");		
	}
	else
	{
	
		int i=1;
		bool encontrado = false;
		Nodo *aux=this->primero;		
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

void Lista::eliminarPrimeraInstancia(int valor){
		if(getListaVacia())
	{
		printf("\nNo se puede buscar debido a que la lista esta vacia");		
	}
	else
	{
	
		int i=1;
		bool encontrado = false;
		Nodo *aux=this->primero;		
		while(aux)		
		{
			
			if(aux->getValor()==valor)
			{
				printf("\nLa posicion en la que se encontro es-> %d",i);	
				encontrado=true;
				aux->getAnterior()->setSiguiente(aux->getSiguiente());
				aux->getSiguiente()->setAnterior(aux->getAnterior());
				delete aux;
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

int Lista::obtenerMCMdeLista(){
	Calculos objC;
	Nodo *aux=this->primero;
	Nodo *anterior=NULL;
	int resultado;
	anterior=aux;
	aux = aux->getSiguiente();
	resultado=objC.calcularMCM(anterior->getValor(),aux->getValor());
	while(aux->getSiguiente()!=NULL)
        {
           aux = aux->getSiguiente();
           resultado=objC.calcularMCM(resultado,aux->getValor());
        }
	
	return resultado;
}


int Lista::obtenerMCDdeLista(){
	Calculos objC;
	Nodo *aux=this->primero;
	Nodo *anterior=NULL;
	int resultado;
	anterior=aux;
	aux = aux->getSiguiente();
	
	resultado=objC.calcularMCD(anterior->getValor(),aux->getValor());
	while(aux->getSiguiente()!=NULL)
        {
           aux = aux->getSiguiente();
           resultado=objC.calcularMCD(resultado,aux->getValor());
        }
	
	return resultado;
}

/*void Lista::colocarMCMenLista(Lista objL){
		Calculos objC;
	Nodo *aux=this->primero;
	Nodo *anterior=NULL;
	int resultado;
	anterior=aux;
	aux = aux->getSiguiente();
	
	resultado=objC.calcularMCM(anterior->getValor(),aux->getValor());
	objL.insertarPorCola(resultado);
	while(aux->getSiguiente()!=NULL)
        {
           aux = aux->getSiguiente();
           resultado=objC.calcularMCM(resultado,aux->getValor());
           objL.insertarPorCola(resultado);
        }
	cout<<"NUEVA LISTA"<<endl;
	objL.mostrar();
}*/



	
	

