/***********************************************************************
UFA - ESPE
AUTORES: Ariel Guevara,Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 28/01/2023
FECHA DE MODIFICACIÓN: 29/01/2023
Tarea2: Solucion Alfiles 
GITHUB: Guevara-Padron-Torres-Estructuras
 ***********************************************************************/
#include"Alfil.h"

Alfil::Alfil(){
		this->n=4;
		validar=new bool *[8];
		tablero=new char *[8];
		encerarTablero();
		crearArchivo();
}

Alfil::~Alfil(){
	
}

void Alfil::encerarTablero(){
		for(int i=0;i<8;i++){
		validar[i]=new bool[8];
		tablero[i]=new char[8];
		for(int j=0;j<8;j++){
				*(*(validar+i)+j)=false;
				*(*(tablero+i)+j)='*';
				}
			}
}

void Alfil::crearArchivo(){
		archivo.open("exhaustivo.txt",fstream::out);
		archivo<<"Solucion Alfil 8*8"<<endl<<endl;
		contador=0;
}

void Alfil::bloquear(int x,int y){
		int aux1,aux2;
		/*aux2=y;
		aux1=0;
		while(aux1<n){//vertical
			*(*(validar+aux1)+aux2)=true;
			aux1++;
		}
		aux2=0;
		aux1=x;
		while(aux2<n){//horizontal
			*(*(validar+aux1)+aux2)=true;
			aux2++;
		}*/
		aux2=y;//diagonal
		aux1=x;
		while(aux1>0&&aux2>0){
			aux1--;
			aux2--;
		}
		aux2=y;
		aux1=x;
		while(aux1<8 && aux2>0){
			aux1++;
			aux2--;
		}
		aux1--;
		aux2++;
		while(aux1>=0 && aux2<8){
			*(*(validar+aux1)+aux2)=true;
			aux1--;
			aux2++;
		}
}

void Alfil::mostrar(){
		contador++;
		archivo<<"Solucion N "<<contador <<endl;
		cout<<"Solucion N "<<contador <<endl;
		cout<<endl;
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				archivo<<*(*(tablero+i)+j)<<" ";
				cout<<*(*(tablero+i)+j)<<" ";
			}
			archivo<<endl;
			cout<<endl;
		}
		archivo<<endl;
		cout<<endl;
}

void Alfil::quitarRelleno(int x,int y){
	
		*(*(tablero +x)+y)='*';
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				*(*(validar +i)+j)=false;
			}
		}
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				if(*(*(tablero +i)+j)=='A')
				bloquear(i,j);
			}	
		}
	
}

void Alfil::solucion(int x,int y,int n1){
		*(*(tablero +x)+y)='A';
		bloquear(x,y);
		if(n1==4){
			mostrar();
		}else{
			for(int i=0;i<8;i++){
				if(*(*(validar +i )+ y+1)==false){
					solucion(i,y+1,n1+1);
				}
			}
		}
		quitarRelleno(x,y);
}

void Alfil::solucionAlfilFilas(){
		for(int i=0;i<8;i++){
			solucion(i,0,1);
		}
		for(int j=0;j<8;j++){
			solucion(0,j,1);
		}
		archivo.close();
}

void Alfil::solucionAlfil(){
		for(int j=0;j<8;j++){
			solucion(0,j,1);
		}
		archivo.close();
}

int Alfil::getContador(){
	return contador;
}

