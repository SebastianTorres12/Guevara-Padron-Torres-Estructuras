/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 26/10/2022
FECHA DE MODIFICACIÓN: 26/10/2022
Tarea1-TDA
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/

#include "Cproceso.h"
using namespace std;
int Cproceso::getNum(void)
{
   return num;
}
void Cproceso::setNum(int newNum)
{
   num = newNum;
}
int Cproceso::getDen(void)
{
   return den;
}
void Cproceso::setDen(int newDen)
{
   den = newDen;
}
int Cproceso::getNacimiento(){
	return nacimiento;
}
void Cproceso::setNacimiento(int newNaci){
	nacimiento=newNaci;
}
string Cproceso::getNombre(void){
	return nombre;
}
void Cproceso::setNombre(string newNombre){
	nombre = newNombre;
}
string Cproceso::getApellido(void){
	return apellido;
}
void Cproceso::setApellido(string newApellido){
	apellido = newApellido;
}

Cproceso::Cproceso(int nume, int deno)
{
   this->num=nume;
   this->den=deno;
}
Cproceso::~Cproceso()
{
   // TODO : implement
}

Cproceso Cproceso::relacional(Cproceso obj1, Cproceso obj2)
{
   int a,b,c,d;
   a=obj1.getNum();
   b=obj1.getDen();
   c=obj2.getNum();
   d=obj2.getDen();   
   this->setNum((a*d)+(b*c));
   this->setNum((a*d)+(b*c));
   this->setDen(b*d);
   return *this;
}
void Cproceso::imprimirObj(Cproceso obj)
{
	int edad;
	edad=2022-obj.getNacimiento();
	system("cls");
	cout<<"Nombre del Usuario: "<<obj.getNombre()<<endl;
	cout<<"Apellido del Usuario: "<<obj.getApellido()<<endl;
	printf("De acuerdo al a%co de nacimiento ingresado posee una edad de: %d",164,edad);
   //cout<<obj.getNum()<<"/"<<obj.getDen()<<endl;
   
}
Cproceso Cproceso::obtencionDatos(){
	string nombre,apellido;
	int nacimiento;
	cout<<"Tarea 1 TDA-Matias Padron, Sebastian Torres"<<endl;
	cout<<"Ingrese su Nombre -> ";
	cin>>nombre;
	this->setNombre(nombre);
	cout<<"\nIngrese su Apellido -> ";
	cin>>apellido;
	this->setApellido(apellido);
	printf("\nIngrese su a%co de nacimiento -> ",164);
	cin>>nacimiento;
	this->setNacimiento(nacimiento);	
	return *this;
}