/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 22/11/2022
FECHA DE MODIFICACIÓN: 22/11/2022
Tarea10_ListaDoble
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/

#include <iostream>
#include "Lista.cpp"
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "ValidacionDatos.cpp"
using namespace std;

int main(int argc, char** argv){
	
Lista objLista;
ValidacionDatos objValidar;
char valorV[10],opV[10];
int valor,opI;
do{
system("cls");
cout<<"FUNCIONES LISTA DOBLE"<<endl;
cout<<"1. Insertar por Cabeza"<<endl;
cout<<"2. Insertar por Cola"<<endl;
cout<<"3. Insertar Entre"<<endl;
cout<<"4. Eliminar por Cabeza"<<endl;
cout<<"5. Eliminar por Cola"<<endl;
cout<<"6. Eliminar entre"<<endl;
cout<<"7. Mostrar Lista"<<endl;
cout<<"8. Elminar Primera Instancia"<<endl;
cout<<"9.Salir"<<endl;
opI=objValidar.casteoEnteros(opV,"\nSeleccione la opcion-> ");	
switch(opI){
	case 1:{
	valor=objValidar.casteoEnteros(valorV,"\nIngrese el valor-> ");
	objLista.insertarPorCabeza(valor);
		break;
	}
	case 2:{
	valor=objValidar.casteoEnteros(valorV,"\nIngrese el valor-> ");
	objLista.insertarPorCola(valor);
		break;
	}
	case 3:{
	valor=objValidar.casteoEnteros(valorV,"\nIngrese el valor-> ");
	objLista.mostrar();
	objLista.insertarEntre(valor);
		break;
	}
	case 4:{
		system("cls");
	
		objLista.eliminarPorCabeza();
		printf("\nSe elimino correctamnte");
		printf("\n");
		objLista.mostrar();
		break;
	}
	case 5:{
		system("cls");
		
		objLista.eliminarPorCola();
		printf("\nSe elimino correctamnte");
		printf("\n");
		objLista.mostrar();
		break;
	}
	case 6:{
		system("cls");
		objLista.mostrar();
	    objLista.eliminarEntre();
		printf("\nSe elimino correctamnte");
		printf("\n");
		objLista.mostrar();	
		system("pause");
		break;
	}
	case 7:{
		system("cls");
		objLista.mostrar();
		system("pause");
		break;
	}
	case 8:{
		system("cls");
		objLista.mostrar();
		valor=objValidar.casteoEnteros(valorV,"\nIngrese el valor que requiere elimiar su primera instancia-> ");
		objLista.eliminarPrimeraInstancia(valor);
		printf("\nSe elimino correctamnte");
		printf("\n");
		objLista.mostrar();
		system("pause");
		break;
	}

}
}while(opI!=9);


	
	
	
	
	
	
	
	
	return 0;
}

	