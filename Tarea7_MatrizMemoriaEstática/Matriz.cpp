/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 10/11/2022
FECHA DE MODIFICACIÓN: 10/11/2022
Tarea7: Operaciones Matriz con memoria estática
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/

#include "Matriz.h"



Matriz::Matriz(){
	
}

////////////////////////////////////////////////////////////////////////
// Name:       Matriz::~Matriz()
// Purpose:    Implementation of Matriz::~Matriz()
// Return:     
////////////////////////////////////////////////////////////////////////

Matriz::~Matriz()
{
   // TODO : implement
}


void Matriz::suma(){
	ValidacionDatos objVal;
	cout<<"SUMA MATRICES"<<endl;
	int f1,c1,f2,c2,opCI;
	char f1Char[10],c1Char[10],f2Char[10],c2Char[10],opChar[10];
	system("cls");
	cout<<"Para la matriz uno:"<<endl;
	f1=objVal.casteoEnteros(f1Char,"\nIngrese el numero de filas->");
	c1=objVal.casteoEnteros(c1Char,"\nIngrese el numero de columnas->");
	int matriz1[f1][c1];
	system("cls");
	cout<<"\nOpciones para ingresar datos en la matriz 1"<<endl;
	cout<<"\n1.MANUAL"<<endl;
	cout<<"2.AUTOMATICO"<<endl;
	do{
		opCI=objVal.casteoEnteros(opChar,"\nSeleccione la opcion->");
	}while(opCI<1||opCI>2);
	if(opCI==1){
	int valor;
	char valorC[10];
	for(int i=1;i<=f1;i++){
		for(int j=1;j<=c1;j++)
			{
			valor=objVal.casteoEnteros(valorC,"\nIngrese el valor->");	
		    matriz1[i][j]=valor;
			}
			}
	}else if(opCI==2){
	cout<<endl;
	for(int i=1;i<=f1;i++){
		for(int j=1;j<=c1;j++)
			{
				
		    matriz1[i][j]=rand() %9;
		    cout<<" |"<<matriz1[i][j]<<"|";
			}
			cout<<endl;
			}
			system("pause");
	}
	//
	system("cls");
	cout<<"Para la matriz dos:"<<endl;
	f2=objVal.casteoEnteros(f2Char,"\nIngrese el numero de filas->");
	c2=objVal.casteoEnteros(c2Char,"\nIngrese el numero de columnas->");
	int matriz2[f2][c2];
		system("cls");
	cout<<"\nOpciones para ingresar datos en la matriz 2"<<endl;
	cout<<"\n1.MANUAL"<<endl;
	cout<<"2.AUTOMATICO"<<endl;
	do{
		opCI=objVal.casteoEnteros(opChar,"\nSeleccione la opcion->");
	}while(opCI<1||opCI>2);
	if(opCI==1){
	int valor;
	char valorC[10];
	for(int i=1;i<=f2;i++){
		for(int j=1;j<=c2;j++)
			{
			valor=objVal.casteoEnteros(valorC,"\nIngrese el valor->");	
		    matriz2[i][j]=valor;
			}
			}
	}else if(opCI==2){
	cout<<endl;
	for(int i=1;i<=f2;i++){	
		for(int j=1;j<=c2;j++)
			{
				
		    matriz2[i][j]=rand() %9;
		    cout<<" |"<<matriz2[i][j]<<"|";
			}
			cout<<endl;
			}
			system("pause");
	}
	if((f1==f2)&&(c1==c2)){
	int matriz3[f1][c2];
	cout<<"\nSUMA DE LAS MATRICES 1 Y 2"<<endl;
	//Mostrar matriz1
	cout<<"\nMATRIZ 1"<<endl;
		for(int i=1;i<=f1;i++)
		{
			for(int j=1;j<=c2;j++)
			{
		    
		    cout<<" |"<<matriz1[i][j]<<"|";
			}
			cout<<endl;
		}
		//Mostrar matriz2
	cout<<"\nMATRIZ 2"<<endl;
		for(int i=1;i<=f1;i++)
		{
			for(int j=1;j<=c2;j++)
			{
		    
		    cout<<" |"<<matriz2[i][j]<<"|";
			}
			cout<<endl;
		}
	cout<<"\nRESULTADO"<<endl;
		for(int i=1;i<=f1;i++)
		{
			for(int j=1;j<=c2;j++)
			{
		    matriz3[i][j]=matriz1[i][j]+matriz2[i][j];
		    cout<<" |"<<matriz3[i][j]<<"|";
			}
			cout<<endl;
		}
		system("pause");
	}else{
		cout<<"\nDimension del numero de filas y columnas de las matrices ingresadas no es igual para realizar la suma";
		system("pause");
	}			
}


void Matriz::multiplicacion(){
	ValidacionDatos objVal;
	cout<<"MULTIPLICACION MATRICES"<<endl;
	int f1,c1,f2,c2,opCI;
	char f1Char[10],c1Char[10],f2Char[10],c2Char[10],opChar[10];
	system("cls");
	cout<<"Para la matriz uno:"<<endl;
	f1=objVal.casteoEnteros(f1Char,"\nIngrese el numero de filas->");
	c1=objVal.casteoEnteros(c1Char,"\nIngrese el numero de columnas->");
	int matriz1[f1][c1];
	system("cls");
	cout<<"\nOpciones para ingresar datos en la matriz 1"<<endl;
	cout<<"\n1.MANUAL"<<endl;
	cout<<"2.AUTOMATICO"<<endl;
	do{
		opCI=objVal.casteoEnteros(opChar,"\nSeleccione la opcion->");
	}while(opCI<1||opCI>2);
	if(opCI==1){
	int valor;
	char valorC[10];
	for(int i=1;i<=f1;i++){
		for(int j=1;j<=c1;j++)
			{
			valor=objVal.casteoEnteros(valorC,"\nIngrese el valor->");	
		    matriz1[i][j]=valor;
			}
			}
	}else if(opCI==2){
	cout<<endl;
	for(int i=1;i<=f1;i++){
		for(int j=1;j<=c1;j++)
			{
				
		    matriz1[i][j]=rand() %9;
		    cout<<" |"<<matriz1[i][j]<<"|";
			}
			cout<<endl;
			}
			system("pause");
	}
	//
	system("cls");
	cout<<"Para la matriz dos:"<<endl;
	f2=objVal.casteoEnteros(f2Char,"\nIngrese el numero de filas->");
	c2=objVal.casteoEnteros(c2Char,"\nIngrese el numero de columnas->");
	int matriz2[f2][c2];
		system("cls");
	cout<<"\nOpciones para ingresar datos en la matriz 2"<<endl;
	cout<<"\n1.MANUAL"<<endl;
	cout<<"2.AUTOMATICO"<<endl;
	do{
		opCI=objVal.casteoEnteros(opChar,"\nSeleccione la opcion->");
	}while(opCI<1||opCI>2);
	if(opCI==1){
	int valor;
	char valorC[10];
	for(int i=1;i<=f2;i++){
		for(int j=1;j<=c2;j++)
			{
			valor=objVal.casteoEnteros(valorC,"\nIngrese el valor->");	
		    matriz2[i][j]=valor;
			}
			}
	}else if(opCI==2){
	cout<<endl;
	for(int i=1;i<=f2;i++){	
		for(int j=1;j<=c2;j++)
			{
				
		    matriz2[i][j]=rand() %9;
		    cout<<" |"<<matriz2[i][j]<<"|";
			}
			cout<<endl;
			}
			system("pause");
	}
	if(c1==f2){
	int matriz3[f1][c2];
	cout<<"\nMULTIPLICACION DE LAS MATRICES 1 Y 2"<<endl;
	//Mostrar matriz1
	cout<<"\nMATRIZ 1"<<endl;
		for(int i=1;i<=f1;i++)
		{
			for(int j=1;j<=c1;j++)
			{
		    
		    cout<<" |"<<matriz1[i][j]<<"|";
			}
			cout<<endl;
		}
		//Mostrar matriz2
	cout<<"\nMATRIZ 2"<<endl;
		for(int i=1;i<=f2;i++)
		{
			for(int j=1;j<=c2;j++)
			{
		    
		    cout<<" |"<<matriz2[i][j]<<"|";
			}
			cout<<endl;
		}
	cout<<"\nRESULTADO"<<endl;
		for(int i=1;i<=f1;i++)
		{
			for(int j=1;j<=c2;j++)
			{
				matriz3[i][j]=0;
		      for(int k=1;k<=c1;k++){		
		    		matriz3[i][j]+=matriz1[i][k]*matriz2[k][j];
				}
			}
		}
		cout<<endl;
		for(int i=1;i<=f1;i++)
		{
			for(int j=1;j<=c2;j++)
			{
		    cout<<" |"<<matriz3[i][j]<<"|";
			}
			cout<<endl;
		}
		
		system("pause");
	}else{
		cout<<"\nDimension del numero de filas y columnas de las matrices ingresadas no es igual para realizar la suma";
		system("pause");
	}	
}