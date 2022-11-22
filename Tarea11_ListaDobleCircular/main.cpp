/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 22/11/2022
FECHA DE MODIFICACIÓN: 22/11/2022
Tarea11: Lista Doble Circular
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/

#include "ListaDobleCircular.cpp"
#include "ValidacionDatos.cpp"

int main(){
ListaDobleCircular lista;
ValidacionDatos objValidar;
char valorV[10],opV[10],posV[10];
int valor,opI,pos;

do{
system("cls");
cout<<"FUNCIONES LISTA DOBLES CIRCULAR"<<endl;
cout<<"1. Insertar por Cabeza"<<endl;
cout<<"2. Insertar por Cola"<<endl;
cout<<"3. Insertar en posicion"<<endl;
cout<<"4. Eliminar por Cabeza"<<endl;
cout<<"5. Eliminar por Cola"<<endl;
cout<<"6. Eliminar en posicion"<<endl;
cout<<"7. Mostrar por cabeza"<<endl;
cout<<"8. Mostrar por cola"<<endl;
cout<<"9.Salir"<<endl;
opI=objValidar.casteoEnteros(opV,"\nSeleccione la opcion-> ");	
switch(opI){
	case 1:{
	system("cls");
	valor=objValidar.casteoEnteros(valorV,"\nIngrese el valor-> ");
	lista.agregarCabeza(valor); 
	cout<<"\nELemento Insertado correctamente"<<endl;
	lista.imprimirCabeza();
	system("pause");
	break;
	}
	case 2:{
	system("cls");
	valor=objValidar.casteoEnteros(valorV,"\nIngrese el valor-> ");
	lista.agregarCola (valor); 
	cout<<"\nELemento Insertado correctamente"<<endl;
	lista.imprimirCabeza();
	system("pause");
	break;
	}
	case 3:{
		system("cls");
		pos=objValidar.casteoEnteros(posV,"\nIngrese la posicion en que la que desea insertar-> ");
		valor=objValidar.casteoEnteros(valorV,"\nIngrese el valor-> ");
		lista.agregarEnPosicion(pos,valor); 
		cout<<"\nELemento Insertado correctamente"<<endl;
		lista.imprimirCabeza();
		system("pause");
		break;
	}
	case 4:{
		system("cls");
		lista.borrarCabeza();
		lista.imprimirCabeza();
		system("pause");
		break;
	}
	case 5:{
		system("cls");
		lista.borrarCola();
		lista.imprimirCabeza();
		system("pause");
		break;
	}
	case 6:{
		system("cls");
		pos=objValidar.casteoEnteros(posV,"\nIngrese la posicion que desea borrar-> ");
		lista.borrarEnPosicion(pos);
		lista.imprimirCabeza(); 
		system("pause");
		break;
	}
	case 7:{
		system("cls");
		lista.imprimirCabeza();
		system("pause");
		break;
	}
	case 8:{
		system("cls");
		lista.imprimirCola();
		system("pause");
		break;
	}
	
}
}while(opI!=9);

	cout<<"\nHasta luego"<<endl;
	
	
	return 0;
}