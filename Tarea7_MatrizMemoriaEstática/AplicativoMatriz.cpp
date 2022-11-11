/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 10/11/2022
FECHA DE MODIFICACIÓN: 10/11/2022
Tarea7: Operaciones Matriz con memoria estática
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include "Matriz.cpp"
int main(int argc, char** argv){
	Matriz objMatriz1;
   	int opc;
   	ValidacionDatos objVal;
   	char OPC[10];
	   
	do{
		system("cls");
   		cout<<"\nOPERACIONES CON MATRICES"<<endl;
   		cout<<"\n1. Suma"<<endl;
   		cout<<"2. Multiplicacion"<<endl;
   		cout<<"3. Salir"<<endl;
   		opc=objVal.casteoEnteros(OPC,"\nIngrese la opcion que desee->");
   		cout<<"\n\n";
   		if(opc==1){
   			system("cls");
   			objMatriz1.suma();
		}else if(opc==2){
			system("cls");
			objMatriz1.multiplicacion();
		}
   		
	}while(opc!=3);
   		
  	cout<<"\n\nHasta pronto\n"; 
	return 0;
}