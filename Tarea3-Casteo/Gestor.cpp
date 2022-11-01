
/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 30/10/2022
FECHA DE MODIFICACIÓN: 31/10/2022
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
	/*strcpy(dato,objF.lecturaEnteros("\nIngresar el valor entero: "));
	valor=atoi(dato);*/
	valor = objF.casteoEnteros(dato);
    cout<<"\nEl valor entero es: "<<valor;
    cout<<"Resultado del valor +10: "<<valor+10<<endl;
	//REAL
	double valorD;
	char datoD[10];
	/*strcpy(datoF,objF.lecturaReales("\nIngresar el valor real: "));
	valorF=atof(datoF);*/
	valorD=objF.casteoReales(datoD);
    cout<<"\nEl valor flotante es: "<<valorD;
    //Char-String
	char nombre[50];
	strcpy(nombre,objF.lecturaTexto("\nIngrese la cadena o caracter:"));
	cout<<"\nLa cadena es: "<<nombre;
	return 0;
}