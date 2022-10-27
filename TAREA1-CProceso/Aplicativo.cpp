/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 26/10/2022
FECHA DE MODIFICACIÓN: 26/10/2022
Tarea1-TDA
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include <iostream>
#include "Cproceso.cpp"
int main(int argc, char** argv){
	int a=18,b=3;
	Cproceso *obj1=new Cproceso(a,b);
	Cproceso *obj2=new Cproceso(15,5);
	Cproceso *obj3=new Cproceso(0,0);	
	obj3->relacional(*obj1,*obj2);
	obj3->obtencionDatos();
	/*obj1->imprimirObj(*obj1);
	obj1->imprimirObj(*obj2);*/
	obj1->imprimirObj(*obj3);
	return 0;
}