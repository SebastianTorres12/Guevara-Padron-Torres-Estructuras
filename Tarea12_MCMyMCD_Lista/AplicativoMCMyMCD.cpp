/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 24/11/2022
FECHA DE MODIFICACIÓN: 24/11/2022
Tarea12_MCMyMCD_Lista
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
 #include "Lista.cpp"
 #include "ValidacionDatos.cpp"
 using namespace std;

int main(int argc, char** argv){
 //
 Lista objLista;
 Lista objListaNueva;
ValidacionDatos objValidar;
char valorV[10],opV[10];
int valor,opI;
do{
system("cls");
cout<<"Aplicativo MCD y MCM de una Lista"<<endl;
cout<<"1. Insertar por Cabeza"<<endl;
cout<<"2. Insertar por Cola"<<endl;
cout<<"3. Eliminar por Cabeza"<<endl;
cout<<"4. Eliminar por Cola"<<endl;
cout<<"5. Mostrar Lista"<<endl;
cout<<"6. Calcular el MCD"<<endl;
cout<<"7. Calcular el MCM"<<endl;
cout<<"8. Lista Nueva"<<endl;
cout<<"9.Salir"<<endl;
opI=objValidar.casteoEnteros(opV,"\nSeleccione la opcion-> ");	
switch(opI){
	case 1:{
	valor=objValidar.casteoEnteros(valorV,"\nIngrese el valor-> ");
	objLista.insertarPorCabeza(valor);
		break;
	}
	case 2:{
	valor=objValidar.casteoEnteros(valorV,"\nIngrese el valor-> ");
	objLista.insertarPorCola(valor);
		break;
	}

	case 3:{
		system("cls");
	
		objLista.eliminarPorCabeza();
		printf("\nSe elimino correctamnte");
		printf("\n");
		objLista.mostrar();
		break;
	}
	case 4:{
		system("cls");
		
		objLista.eliminarPorCola();
		printf("\nSe elimino correctamnte");
		printf("\n");
		objLista.mostrar();
		break;
	}

	case 5:{
		system("cls");
		objLista.mostrar();
		system("pause");
		break;
	}
	case 6:{
		system("cls");
		cout<<"CALCULO DEL MCD DE LA LISTA"<<endl;
		objLista.mostrar();
		
		cout<<"El mcd de la lista es ->  "<<objLista.obtenerMCDdeLista();
		cout<<"\n";
		system("pause");
		break;
	}
	case 7:{
		system("cls");
		cout<<"CALCULO DEL MCM DE LA LISTA"<<endl;
		objLista.mostrar();
		cout<<"El mcm de la lista es -> "<<objLista.obtenerMCMdeLista();	
		cout<<"\n";
		system("pause");
		break;
	}
	/*case 8:{
		system("cls");
		objLista.colocarMCMenLista(objListaNueva);
		system("pause");
		break;
	}*/

}
}while(opI!=8);
    //cout<<"MCM: "<<objLista.obtenerMCMdeLista();
    //cout<<"MCM: "<<objLista.obtenerMCMdeLista();
    //cout<<"MCD: "<<objLista.obtenerMCDdeLista();
/*
	const std::function<int(int)>mcd=[&mcd](int n1){
        return n1>1?n1*mcd(n1-1):1;
		};
		cout<<mcd(5);*/

	/*const std::function<int(int)> mcm=[](int num1 ,int num2) {
        return (num1*num2)/mcd(num1,num2);
		};*/

	
	
	
	
	
	
	return 0;
}