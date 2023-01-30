/***********************************************************************
UFA - ESPE
AUTORES: Ariel Guevara,Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 28/01/2023
FECHA DE MODIFICACIÓN: 29/01/2023
Tarea2: Solucion Alfiles 
GITHUB: Guevara-Padron-Torres-Estructuras
 ***********************************************************************/
 #include "Alfil.cpp"
int main(int argc, char** argv) {
	/*int n;
	cout<<"\tIngrese el numero de Reinas"<<endl;
	cin>>n;*/
	Alfil *obj = new Alfil();
	//Reina *obj=new Reina(n);
/*	obj->solucionReinasFilas();
	cout<<"Se creo el archivo txt"<<endl;
	cout<<"Contador: "<<obj->getContador();
	system("pause");*/
	obj->solucionAlfil();
	cout<<"Se creo el archivo txt"<<endl;
	cout<<"Contador: "<<obj->getContador();
	return 0;
}