
/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 30/10/2022
FECHA DE MODIFICACIÓN: 30/10/2022
Tarea2-Lectura y validación Datos-Interfaces
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include "ValidacionDatos.cpp"

using namespace std;
int main(int argc, char** argv){
	
	ValidacionDatos objF;
	
	int validar;
	//ENTERO
	int valor;
	char dato[10];
	strcpy(dato,objF.lecturaEnteros("\nIngresar el valor entero: "));
	valor=atoi(dato);
    cout<<"\nEl valor entero es: "<<valor;
	//REAL
	float valorF;
	char datoF[10];
	strcpy(datoF,objF.lecturaReales("\nIngresar el valor real: "));
	valorF=atof(datoF);
    cout<<"\nEl valor flotante es: "<<valorF;
    //Char-String
	char nombre[50];
	strcpy(nombre,objF.lecturaTexto("\nIngrese la cadena o caracter:"));
	cout<<"\nLa cadena es: "<<nombre;
	return 0;
}