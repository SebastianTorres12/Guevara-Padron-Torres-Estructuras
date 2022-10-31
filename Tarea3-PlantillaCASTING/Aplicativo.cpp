/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 30/10/2022
FECHA DE MODIFICACIÓN: 30/10/2022
Tarea3-PLantillaCASTING
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/

#include"CastingDatos.cpp"
using namespace std;

int main(){
	CastingDatos<double> real;
	CastingDatos<int> entero;
	CastingDatos<char> letra;
	int opMP=0;
	do{
		system("cls");
		cout<<"\nCon que tipo de dato deseas trabajar?"<<endl;
		cout<<"1.Entero"<<endl;
		cout<<"2.Real"<<endl;
		cout<<"3.Char"<<endl;
		cout<<"4.Salir"<<endl;
		cout<<"Seleccione la opcion->"<<endl;
		cin>>opMP;
		system("pause");
		switch(opMP){
			case 1:{
				system("cls");
				int valorInt,validarInt;
				cout<<"Ingrese el valor entero->"<<endl;
				cin>>valorInt;							
				cout<<"Desea realizar un cambio del tipo de dato?"<<endl;
				cout<<"1.SI/2.NO"<<endl;
				cin>>validarInt;
				if(validarInt==1){
				entero.transformarDatos(valorInt);	
				system("pause");
				}
				
				break;
			}
			case 2:{
				system("cls");
				int validarInt;
				double valorReal;
				cout<<"Ingrese el valor Real->"<<endl;
				cin>>valorReal;							
				cout<<"Desea realizar un cambio del tipo de dato?"<<endl;
				cout<<"1.SI/2.NO"<<endl;
				cin>>validarInt;
				if(validarInt==1){
				real.transformarDatos(valorReal);	
				system("pause");
				}				
				break;
			}
			case 3:{
				system("cls");
				int validarInt;
				char valorChar;
				cout<<"Ingrese el valor Char->"<<endl;
				cin>>valorChar;							
				cout<<"Desea realizar un cambio del tipo de dato?"<<endl;
				cout<<"1.SI/2.NO"<<endl;
				cin>>validarInt;
				if(validarInt==1){
				letra.transformarDatos(valorChar);	
				system("pause");
				}	
				break;
			}
						
		}
		
	}while(opMP!=4);
	system("cls");
	cout<<"	\nGRACIAS POR USAR EL PROGRAMA"<<endl;
	system("pause");
	
 	
 
	return 0;
}
