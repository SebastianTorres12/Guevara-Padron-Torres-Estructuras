/*************************
UFA - ESPE
AUTORES: Ariel Guevara,Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 1/02/2023
FECHA DE MODIFICACIÓN: 2/02/2023
Tarea3-Grupo7_CuadradoMágico
GITHUB: Guevara-Padron-Torres-Estructuras
 *************************/
#include <iostream>
#include "Vector.h"

////////////////////////////////////////////////////////////////////////
// Name:       vect::encerar(int vect, int tamanio)
// Purpose:    Implementation of vect::encerar()
// Parameters:
// - vect
// - tamanio
// Return:     void
////////////////////////////////////////////////////////////////////////
Vector::Vector(int tam):tamanio{tam}{
    this->vect = new int[tam];
    this->encerar();
}
void Vector::encerar()
{
   	int i;
	for(i=0;i<tamanio ;i++){
		*(*(&vect)+i) = 0;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       vect::ingresar(int vect, int tamanio)
// Purpose:    Implementation of vect::ingresar()
// Parameters:
// - vect
// - tamanio
// Return:     void
////////////////////////////////////////////////////////////////////////
int Vector::getDato(int indice){
	int i=indice-1;
	return *(&(*vect)+i);
}

void Vector::ingresar()
{
    char numC[10];
    ValidacionDatos objValidar;
   	int i;
   	int num=0;
	for(i=0;i<tamanio ;i++){
        std::cout<<"\n#"<<i+1;
		num=objValidar.casteoEnteros(numC," Ingrese el numero-> ");
			*(*(&vect)+i)=num;
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       vect::procesar(int vect, int tamanio)
// Purpose:    Implementation of vect::procesar()
// Parameters:
// - vect
// - tamanio
// Return:     void
////////////////////////////////////////////////////////////////////////

void Vector::procesar()
{
   	int i,e=5;
	for(i=0;i<tamanio ;i++){
		*vect =(*(&(*vect ))) * e;
		*(vect ++);
	}
}

////////////////////////////////////////////////////////////////////////
// Name:       vect::imprimir(int vect, int tamanio)
// Purpose:    Implementation of vect::imprimir()
// Parameters:
// - vect
// - tamanio
// Return:     void
////////////////////////////////////////////////////////////////////////

void Vector::imprimir()
{
   int i;
	for(i=0;i<tamanio ;i++){
		printf("%d ",*(&(*vect )));
		*(vect ++);
	}
}
void Vector::ordenarVector(){
    int aux=0;
    for(int i = 0; i < tamanio; i++){
        for(int x = 0; x < tamanio; x++){
            if(*(*(&vect)+i) < *(*(&vect)+x)){
                aux = *(*(&vect)+x);
                *(*(&vect)+x) = *(*(&vect)+i);
                *(*(&vect)+i) = aux;
            }
        }
    }
}
bool Vector::validarvector(){
    int patron{};
    bool bandera = true;
    //ordena
    this->ordenarVector();
    patron = *(*(&vect)+1) - *(*(&vect));
    /*std::cout<<*(*(&vect))<<std::endl;
    std::cout<<*(*(&vect)+1)<<std::endl;
    std::cout<<"patron: "<<patron<<std::endl;*/
    for (int i=0; i<tamanio-1; ++i){
        if (( *(*(&vect)+i+1) - *(*(&vect)+i)) != patron) bandera = false;

    }
    return bandera;
}
