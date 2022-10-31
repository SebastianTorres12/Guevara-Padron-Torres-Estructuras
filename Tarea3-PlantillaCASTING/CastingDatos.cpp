/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 30/10/2022
FECHA DE MODIFICACIÓN: 30/10/2022
Tarea3-PLantillaCASTING
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include"CastingDatos.h"
#include <typeinfo>
#include <string.h>
template<typename T>
void CastingDatos<T>::transformarDatos(T valor) {
	//Dato ingresado tipo char
	if(std::string(typeid(valor).name())=="c"){
		cout<<"Es char\n";
		int opc=0;
		//Pregunto a que tipo de dato quiere cambiar
		cout<<"\nA cual tipo de dato desea cambiar?\n1.Entero \n2.Real"<<endl;
		cin>>opc;
		switch(opc){
			//Char-Entero
			case 1:{
				CastingDatos<int> cambiarEntero;
			 	cambiarEntero.setValor(valor);
				printf("\n Cambio de Char a Entero %d",cambiarEntero.getValor());
				int suma = 10 + cambiarEntero.getValor();
				printf("\n Resultado -> %d\n",suma);
				break;
			}
			//Char-Double 	
			case 2:{
				CastingDatos<double> cambiarReal;
			 	cambiarReal.setValor(valor);
				printf("\n Cambio de Char a Real %f",cambiarReal.getValor());
				double sumaR = 3  + cambiarReal.getValor();
				printf("\n Resultado -> %f\n",sumaR);
				break;
			}
				
		}
						
	}if(std::string(typeid(valor).name())=="i"){
		cout <<"Es entero\n";
		int opc=0;
		//Pregunto a que tipo de dato quiere cambiar
		cout<<"\nA cual tipo de dato desea cambiar?\n1.Char \n2.Real"<<endl;
		cin>>opc;
		switch(opc){
			//Entero-Char
			case 1:{
				CastingDatos<char> cambiarChar;
			 	cambiarChar.setValor(valor);
				printf("\n Cambio de Entero a Char '%d'\n",cambiarChar.getValor());
				break;
			}
			//Entero-Double 			
			case 2:{
				CastingDatos<double> cambiarReal;
			 	cambiarReal.setValor(valor);
				printf("\n Cambio de Char a Real %f",cambiarReal.getValor());
				double sumaR = 30  + cambiarReal.getValor();
				printf("\n Resultado -> %f\n",sumaR);
				break;
			}
				
		}
	}if(std::string(typeid(valor).name())=="d"){
		cout <<"Es real\n";
		int opc=0;
		//Pregunto a que tipo de dato quiere cambiar
		cout<<"\nA cual tipo de dato desea cambiar?\n1.Char \n2.Entero"<<endl;
		cin>>opc;
		switch(opc){
			//Double-Char
			case 1:{
				CastingDatos<char> cambiarChar;
			 	cambiarChar.setValor(valor);
				printf("\n Cambio de Real a Char '%d'\n",cambiarChar.getValor());
				break;
			}
			//Double-Entero 			
			case 2:{
				CastingDatos<int> cambiarEntero;
			 	cambiarEntero.setValor(valor);
				printf("\n Cambio de Real a Entero %d",cambiarEntero.getValor());
				int sumaR = 3  + cambiarEntero.getValor();
				printf("\n Resultado -> %d\n",sumaR);
				break;
			}
				
		}
	}
}
template<typename T>
void CastingDatos<T>::setValor(T v){
	this->valor=v;
}
template<typename T>
T CastingDatos<T>::getValor() const{
	return this->valor;
}