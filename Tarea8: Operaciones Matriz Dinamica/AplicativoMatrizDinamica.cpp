/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 11/11/2022
FECHA DE MODIFICACIÓN: 13/11/2022
Tarea8: Operaciones Matriz Dinamica
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
***********************************************************************/

#include "Matriz.cpp"

int main(int argc, char** argv) {

    Matriz<int> matriz1(2,2);
    Matriz<int> matriz2(2,2);
    Matriz<int> matriz3(2,2);
    Matriz<int> matriz4(2,2);
    ValidacionDatos objValidar;
    int op;
    char opV[10];
    cout<<"BIENVENIDO AL APLICATIVO OPERACIONES CON MATRIZ DINAMICA"<<endl;
    cout<<"Ingreso de datos matriz 1 y matriz 2"<<endl;
    matriz1.ingresarDatos();
    matriz1.imprimirMatriz();
    system("pause");
    matriz2.ingresarDatos(); 
    matriz2.imprimirMatriz();
    system("pause");
    do{
    system("cls");
    cout<<"BIENVENIDO AL APLICATIVO OPERACIONES CON MATRIZ DINAMICA"<<endl;
    cout<<"Operaciones:"<<endl;
    cout<<"1.SUMA DE MATRICES"<<endl;
    cout<<"2.MULTIPLIACION DE MATRICES"<<endl;
    cout<<"3.Salir"<<endl;
    do{
    	op=objValidar.casteoEnteros(opV,"\nSeleccione la opcion-> ");
	}while(op<1||op>3);
    switch(op){
    	case 1:{
    		 	cout<<"\n Matriz 1 "<<endl;
    			matriz1.imprimirMatriz();
  				cout<<"\n Matriz 2 "<<endl;
    			matriz2.imprimirMatriz();
    		 	matriz3.sumaRecursiva(matriz1, matriz2, 1,1);
    			cout<<"\n Matriz Resultante SUMA"<<endl;
				matriz3.imprimirMatriz();
				system("pause");
			break;
		}
		case 2:{
			    cout<<"\n Matriz 1 "<<endl;
    			matriz1.imprimirMatriz();
  				cout<<"\n Matriz 2 "<<endl;
    			matriz2.imprimirMatriz();		
				matriz4.multiplicacionRecursiva(matriz1, matriz2, 1, 1); 
				cout<<"\n Matriz Resultante MULTIPLICACION"<<endl;
    			matriz4.imprimirMatriz();
    			system("pause");
			break;
		}
	}
	}while(op!=3);
   
	
	
	return 0;

}