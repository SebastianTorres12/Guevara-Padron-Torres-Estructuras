
/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 17/11/2022
FECHA DE MODIFICACIÓN: 17/11/2022
Tarea9: Lista Simple 
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include "Lista.cpp"
#include "ValidacionDatos.cpp"
 
using namespace std;
int main(int argc, char** argv){
Lista objLista;
ValidacionDatos objValidar;
char valorV[10],opV[10];
int valor,opI;
do{
system("cls");
cout<<"FUNCIONES LISTA SIMPLE"<<endl;
cout<<"1. Insertar por Cabeza"<<endl;
cout<<"2. Insertar por Cola"<<endl;
cout<<"3. Eliminar por Cabeza"<<endl;
cout<<"4. Eliminar por Cola"<<endl;
cout<<"5. Eliminar primera instancia"<<endl;
cout<<"6. Mostrar por cola"<<endl;
cout<<"7. Mostrar por cabeza"<<endl;
cout<<"8.Salir"<<endl;
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
		system("cls");
	
		objLista.eliminarPorCabeza();
		break;
	}
	case 4:{
		system("cls");
		
		objLista.eliminarPorCola();
		break;
	}
	case 5:{
		system("cls");
		objLista.mostrarPorCabeza();
		valor=objValidar.casteoEnteros(valorV,"\nIngrese el valor que desea eliminar-> ");
		objLista.eliminarPrimeraOcurrencia(valor);
		system("pause");
		break;
	}
	case 6:{
		system("cls");
		objLista.mostrarPorCola();
		system("pause");
		break;
	}
	case 7:{
		system("cls");
		objLista.mostrarPorCabeza();
		system("pause");
		break;
	}
	
}
}while(opI!=8);









}