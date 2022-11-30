/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 19/11/2022
FECHA DE MODIFICACIÓN: 29/11/2022
Proyecto Unidad 1-Rol de pagos
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include "Archivo.h"
#define Nombre_Archivo "empleados.txt"

/**
 * Lee un archivo csv y crea una lista de empleados
 * 
 * @param lista es una lista de empleados
 */
void Archivo::lecturaArchivo(ListaSimple<Empleado> &lista){
	ifstream archivo(Nombre_Archivo);
	string linea;
	string texto;
	char delimitador = ',';
	getline(archivo,linea); //leemos la primera linea para descartarla porque es el encabezado
	while(getline(archivo,linea)){
		stringstream stream(linea);
		string nombre,apellido,cedula,cargo,sueldo,NumHorasExtra;
		getline(stream,nombre,delimitador); 
		getline(stream,apellido,delimitador);
		getline(stream,cedula,delimitador);
		getline(stream,cargo,delimitador);
		getline(stream,sueldo,delimitador);
		getline(stream,NumHorasExtra,delimitador);
		int cedulaI=atoi(cedula.c_str());
		double sueldoD=atof(sueldo.c_str());
		int numHorasI=atoi(NumHorasExtra.c_str());
		Empleado *empleado=new Empleado(nombre,apellido,cedulaI,cargo,sueldoD,numHorasI);
		lista.insertarPorCola(empleado);
	}
	archivo.close();
}

/**
 * Lee un archivo csv y crea una lista de empleados
 * 
 * @param lista es una lista de tipo Empleado
 */
void Archivo::lecturaArchivo(ListaDoble<Empleado> &lista){
	ifstream archivo(Nombre_Archivo);
	string linea;
	string texto;
	char delimitador = ',';
	getline(archivo,linea); //leemos la primera linea para descartarla porque es el encabezado
	while(getline(archivo,linea)){
		stringstream stream(linea);
		string nombre,apellido,cedula,cargo,sueldo,NumHorasExtra;
		getline(stream,nombre,delimitador); 
		getline(stream,apellido,delimitador);
		getline(stream,cedula,delimitador);
		getline(stream,cargo,delimitador);
		getline(stream,sueldo,delimitador);
		getline(stream,NumHorasExtra,delimitador);
		int cedulaI=atoi(cedula.c_str());
		double sueldoD=atof(sueldo.c_str());
		int numHorasI=atoi(NumHorasExtra.c_str());
		Empleado *empleado=new Empleado(nombre,apellido,cedulaI,cargo,sueldoD,numHorasI);
		lista.insertarPorCola(empleado);
	}
	archivo.close();
} 

/**
 * Lee un archivo csv y crea una lista de empleados
 * 
 * @param lista es una lista de tipo DoubleCircleList<Employee>
 */
void Archivo::lecturaArchivo(ListaDobleCircular<Empleado> &lista){
	ifstream archivo(Nombre_Archivo);
	string linea;
	string texto;
	char delimitador = ',';
	getline(archivo,linea); //leemos la primera linea para descartarla porque es el encabezado
	while(getline(archivo,linea)){
		stringstream stream(linea);
		string nombre,apellido,cedula,cargo,sueldo,NumHorasExtra;
		getline(stream,nombre,delimitador); 
		getline(stream,apellido,delimitador);
		getline(stream,cedula,delimitador);
		getline(stream,cargo,delimitador);
		getline(stream,sueldo,delimitador);
		getline(stream,NumHorasExtra,delimitador);
		int cedulaI=atoi(cedula.c_str());
		double sueldoD=atof(sueldo.c_str());
		int numHorasI=atoi(NumHorasExtra.c_str());
		Empleado *empleado=new Empleado(nombre,apellido,cedulaI,cargo,sueldoD,numHorasI);
		lista.insertarPorCola(empleado);
	}
	archivo.close();
} 

/**
 * Lee el archivo, agrega los nuevos datos al final del archivo y luego escribe el archivo
 * 
 * @param empleado es un puntero a un objeto de la clase Empleado
 */
void Archivo::escribirArchivoTxt(Empleado *empleado){
	string linea;
	string texto;
	ifstream archivo2(Nombre_Archivo);
	while(getline(archivo2,linea)){
		texto=texto+linea+"\n";
	}
	
	ofstream archivo;
	archivo.open(Nombre_Archivo,ios::out); //abriendo el archivo
	if(archivo.fail()){
		cout<<"\Error al abrir el archivo"<<endl;	
	}
	archivo<<texto;
	archivo<<empleado->getNombre()<<",";
	archivo<<empleado->getApellido()<<",";
	archivo<<empleado->getCedula()<<",";
	archivo<<empleado->getCargo()<<",";
	archivo<<empleado->getSueldo()<<",";
	archivo<<empleado->getHorasExtra()<<endl;
	archivo.close();
	cout<<"Empleados guardados en el txt correctamente"<<endl;
} 

/**
 * Abre un archivo, lee todas las líneas en un vector, cierra el archivo, luego abre el archivo
 * nuevamente y escribe todas las líneas excepto la que desea eliminar
 * 
 * @param numLinea El número de línea a eliminar
 */
void Archivo::eliminarLineaTXT(int numLinea){
	fstream archivo;
	archivo.open(Nombre_Archivo); 
	
	if(archivo.fail()){
		cout<<"\Error al abrir el archivo"<<endl;	
	}
	
	vector<string> lineas;
	string linea;
	
	while(getline(archivo,linea))
		lineas.push_back(linea); 
		
	archivo.close();
	
	if(numLinea>lineas.size()){
		cout<<"\nLinea no existente en el archivo"<<endl;
	}
	
	ofstream escribirArchivo;
	escribirArchivo.open(Nombre_Archivo);
	if(escribirArchivo.fail()){
		cout<<"\Error al abrir el archivo"<<endl;	
	}
	numLinea--;
	for(int i=0;i<lineas.size();i++){
		if(i!= numLinea)
			escribirArchivo<<lineas[i]<<endl;	
	}
	escribirArchivo.close();
}

/**
 * Lee un archivo línea por línea, y si la línea contiene el valor de la variable cedulaB, imprime la
 * línea.
 * 
 * @param cedulaB El DNI del empleado a buscar
 * 
 * @return un valor booleano.
 */
bool Archivo::buscarEmpleadoTxt(int cedulaB){
	ifstream archivo(Nombre_Archivo);
	string linea;
	char delimitador = ',';
	getline(archivo,linea); //leemos la primera linea para descartarla porque es el encabezado
	while(getline(archivo,linea)){
		stringstream stream(linea);
		string nombre,apellido,cedula,cargo,sueldo,NumHorasExtra;
		getline(stream,nombre,delimitador); 
		getline(stream,apellido,delimitador);
		getline(stream,cedula,delimitador);
		getline(stream,cargo,delimitador);
		getline(stream,sueldo,delimitador);
		getline(stream,NumHorasExtra,delimitador);
		int cedulaI=atoi(cedula.c_str());
		if(cedulaB==cedulaI){
			cout<<"Empleado encontrado, mostrando datos\n"<<endl;
			cout<<"Nombre: "<<nombre<<endl;
			cout<<"Apellido: "<<apellido<<endl;
			cout<<"Cedula: "<<cedula<<endl;
			cout<<"Cargo: "<<cargo<<endl;
			cout<<"Sueldo: "<<sueldo<<endl;
			cout<<"Numero de Horas Extra: "<<NumHorasExtra<<endl;
			return true;	
			break;
		}	
	}
	cout<<"\nEmpleado no encontrado en el txt"<<endl;
	archivo.close();	
	return false;
}

/**
 * Cuenta el número de líneas en un archivo de texto
 * 
 * @return El número de líneas en el archivo.
 */
int Archivo::contarLineasTxt(){
	int numLineas=0;
	ifstream archivo(Nombre_Archivo);
	string linea;
	while(getline(archivo,linea)){
		numLineas++;
	}
	return numLineas;
}