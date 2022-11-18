/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 17/11/2022
FECHA DE MODIFICACIÓN: 17/11/2022
Tarea9: Lista Simple 
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include "Lista.h"

//métodos de los atributos
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

//métodos de orden de la lista
void Lista::insertarPorCabeza(int valor)
{
	Nodo *nuevo=new Nodo(valor);
	if(getListaVacia()){
	nuevo->setSiguiente(this->primero);
	setPrimero(nuevo);
	setActual(nuevo);
	}else{
	nuevo->setSiguiente(this->primero);
	setPrimero(nuevo);
	}
	
}
void Lista::insertarPorCola(int valor)
{
	Nodo *nuevo=new Nodo(valor);
	if(getListaVacia())
	{
		setPrimero(nuevo);
	}
	else
	{
		this->actual->setSiguiente(nuevo);
	}
	setActual(nuevo);
}
void Lista::eliminarPorCabeza()
{
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
void Lista::eliminarPorCola()
{
	if(getListaVacia())
	{
		cout<<"\nNo se puede eliminar elementos de una lista sin objetos."<<endl;
	}
	else
	{
		Nodo *nodoAuxiliar = primero;
		Nodo *nodoAnterior =NULL; 
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
void Lista::mostrarPorCabeza()
{
	Nodo *aux=this->primero;
	while(aux!=NULL)
	{
		cout<<aux->getValor()<<"-->";
		aux=aux->getSiguiente();
	}
	cout<<"NULL\n";
}
void Lista::mostrarPorCola()
{
	int x=0,i=contar();
	Nodo *nodoAuxiliar = primero;
	Nodo *nodoAuxiliar1 = primero;
	Nodo *nodoAnterior1 =NULL;	
	cout<<"NULL"<<"-->";
	while(nodoAuxiliar->getSiguiente()!=NULL)
    {
        nodoAuxiliar = nodoAuxiliar->getSiguiente();
    }
	setActual(nodoAuxiliar);
	while(x!=(i+1))
	{
		while(nodoAuxiliar1->getSiguiente()!=actual->getSiguiente())	
    	{
			nodoAnterior1 = nodoAuxiliar1;
        	nodoAuxiliar1 = nodoAuxiliar1->getSiguiente();
    	}
		cout<<nodoAuxiliar1->getValor();
		if(x!=(i))
		{
			cout<<"-->";
		}
		nodoAuxiliar1 = primero;
		setActual(nodoAnterior1);
		x++;
	}
	setActual(nodoAuxiliar);
}
void Lista::buscar(int n)
{
	Nodo *nodoAuxiliar = primero;
	bool encontrado=false;
	for(int x=0;x<=contar();x++)
    {
		if(nodoAuxiliar->getValor()==n)
		{
			encontrado=true;
			break;
		}
        nodoAuxiliar = nodoAuxiliar->getSiguiente();
    }
	if(encontrado)
	{
		cout<<"\nEl valor es: "<<nodoAuxiliar->getValor()<<endl;
		printf("\nLa direccion encontrada es: %p\n",nodoAuxiliar);
	} else
	{
		cout<<"\nNo se ha encontrado el valor ingresado."<<endl;
	}
}
int Lista::contar()
{
	int i=0;
	Nodo *nodoAuxiliar = primero;
	while(nodoAuxiliar->getSiguiente()!=NULL)
    {
        nodoAuxiliar = nodoAuxiliar->getSiguiente();
		i++;
    }
	setActual(nodoAuxiliar);
	return i;
}
		/*delete actual;
		nodoAnterior->setSiguiente(NULL);
		setActual(nodoAnterior);*/


void Lista::eliminarPrimeraOcurrencia(int n){
	Nodo *nodoAuxiliar = primero;
	Nodo *nodoAnterior =NULL; 
	bool encontrado=false;
	for(int x=0;x<=contar();x++)
    {
		if(nodoAuxiliar->getValor()==n)
		{
			encontrado=true;
			break;
		}
        nodoAnterior=nodoAuxiliar;
        nodoAuxiliar = nodoAuxiliar->getSiguiente();
    }
	if(encontrado)
	{
		if(nodoAuxiliar->getSiguiente()==NULL){
			eliminarPorCola();
		}else if(nodoAuxiliar==primero){
			eliminarPorCabeza();
			
		}else {
			
		actual=nodoAuxiliar;
		actual=NULL;	
		nodoAnterior->setSiguiente(nodoAuxiliar->getSiguiente());
		
		
		
		}

		
		
	} else
	{
		cout<<"\nNo se ha encontrado el valor ingresado."<<endl;
	}
	
}