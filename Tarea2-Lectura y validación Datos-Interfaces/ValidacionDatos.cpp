/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 30/10/2022
FECHA DE MODIFICACIÓN: 30/10/2022
Tarea2-Lectura y validación Datos-Interfaces
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include"ValidacionDatos.h"
#define LONGITUD 10
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
		}
	}
	dato[i]='\0';
	return dato;
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
		}
	}
	dato[i]='\0';
	return dato;
}