/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 17/11/2022
FECHA DE MODIFICACIÓN: 17/11/2022
Tarea9: Lista Simple 
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include"ValidacionDatos.h"
#define LONGITUD 10
#pragma once
char* ValidacionDatos::lecturaEnteros(char const *msj){
	char *dato=new char[10];
	char c;
	int i=0;
	printf("%s\n",msj);
	while((c=getch())!=13)//ingreso de datos sin ecco(NO SE PUEDE VER)
	{
		if(c>='0'&&c<='9'){
			printf("%c",c);
			dato[i++]=c;
		}	else if (c == 8){ //backspace
			if (i>0){
				i--;
				printf("\b \b");
			}	
		}
	}
	dato[i]='\0';
	return dato;
}
//CASTEO
int ValidacionDatos::casteoEnteros(char* dato,char const *msj){	
	int valor;
	//"\nIngresar el valor a convertir a entero : "
	strcpy(dato,lecturaEnteros(msj));
	return valor=atoi(dato);
}
char* ValidacionDatos::lecturaReales(char const *msj){
char *dato=new char[LONGITUD+1];
    char c;
    printf("%s",msj);
    int i=0;
	int punto=0;
    while(c = getch()){
		if (c==13){
			dato[i]='\0';
			break;
		}
		else if (c == 8){ //backspace
			if (i>0){
				i--;
				printf("\b \b");
				if (dato[i]==46){
					punto=0;
				}
				
			}	
		}
		else if(c==46){
			
			if (punto<1){
				printf("%c",c);
				dato[i]=c;
				i++;
			}
			punto++;
		}
		else{	
			if (i<LONGITUD && c>='0'&& c<='9') //limite de longitud
			{
				printf("%c",c);
				dato[i]=c;
				i++;
			}
			
		}
	
	}
	return dato;
}
//CASTEO
double ValidacionDatos::casteoReales(char* dato,char const *msj){	
	double valor;
	strcpy(dato,lecturaReales(msj));
	return valor=atof(dato);
}

char* ValidacionDatos::lecturaTexto(char const *msj){
	////
	char *dato=new char[10];
	char c;
	int i=0;
	printf("%s\n",msj);
	while((c=getch())!=13)//ingreso de datos sin ecco(NO SE PUEDE VER)
	{
		if((c>=65 && c<=90 ||c>=97 && c<=122||c==32)){
			printf("%c",c);
			dato[i++]=c;
		}	else if (c == 8){ //backspace
			if (i>0){
				i--;
				printf("\b \b");		
			}	
		}
	}
	dato[i]='\0';
	return dato;
}