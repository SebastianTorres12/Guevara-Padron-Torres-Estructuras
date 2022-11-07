/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 1/11/2022
FECHA DE MODIFICACIÓN: 1/11/2022
Tarea4-Sobre Carga Operadores
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
 #include"Cliente.h"
 
 Cliente::Cliente(){
 
 }
 string Cliente::getNombre(){
 	return nombre;
 }
 void Cliente::setNombre(string nNombre){
 	this->nombre=nNombre;
 }
 
  string Cliente::getApellido(){
 	return apellido;
 }
 void Cliente::setApellido(string nApellido){
 	this->apellido=nApellido;
 }
 
 Cliente Cliente::tomarDatos(){
 	ValidacionDatos objValidar;
 	char nombre[50], apellido[50];
	strcpy(nombre,objValidar.lecturaTexto("Ingrese el nombre del Cliente-> "));
	strcpy(apellido,objValidar.lecturaTexto("\nIngrese el apellido del Cliente-> "));
	this->setNombre(nombre);
	this->setApellido(apellido);
	return *this;
 }
 void Cliente::verDatos(){
 	cout<<"Cliente: "<<nombre<<" "<<apellido<<endl;
 }
 