#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
class LecturaDatos{
	public:
	virtual char* lecturaEnteros(char const *msj)=0;
	virtual char* lecturaReales(char const *msj)=0;
	virtual char* lecturaTexto(char const *msj)=0;	
};