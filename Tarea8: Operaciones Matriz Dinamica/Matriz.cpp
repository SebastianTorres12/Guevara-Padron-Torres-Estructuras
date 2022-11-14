/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 11/11/2022
FECHA DE MODIFICACIÓN: 13/11/2022
Tarea8: Operaciones Matriz Dinamica
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include "Matriz.h"

template<typename T>
Matriz<T>::Matriz(int f,int c){
	//RESERVACIÓN DE MEMORIA
	this->f=f;
	this->c=c;
		matriz= new T*[f];
		for(int i=0;i<f;i++){
			matriz[i]=new T[c];
		}

	//ENCERAMOS LA MATRIZ
	for(int i=0;i<f;i++){
			for(int j=0;j<c;j++){
				*(*(matriz+(i))+(j))=0;
				
			}
		}
}

template<typename T>
Matriz<T>::~Matriz(){
}

template<typename T>
T Matriz<T>::getValor(int f,int c){
	return *(*(matriz+f)+c);
}

template<typename T>
void Matriz<T>::setValor(int f,int c, int valor){
	*(*(matriz+f)+c) = valor;
}

template<typename T>
void Matriz<T>::ingresarDatos(){
	ValidacionDatos objValidar;
	char datoIC[10];
	int datoI;
	cout<<"INGRESO DATOS MATRIZ"<<endl;
	for(int i=0;i<f;i++){
		for(int j=0;j<c;j++){
			cout<<"\n["<<i<<"]["<<j<<"] ";
			datoI=objValidar.casteoEnteros(datoIC,"Ingrese el valor->");
			*(*(matriz+i)+j)=datoI;
		}
	}	
}

template<typename T>
void Matriz<T>::imprimirMatriz(){
	cout<<"\n";
	for(int i=0;i<f;i++){
	 	for(int j=0;j<c;j++){
			cout<<" |"<<*(*(matriz+i)+j)<<"|";					
		}cout<<endl;
	}
}

template<typename T>
int Matriz<T>::sumaRecursiva(Matriz matriz1, Matriz matriz2, int f, int c){
    
	if((f==0) && (c==0)){  //Caso base	
		
		this->setValor(f,c,matriz1.getValor(f,c)+matriz2.getValor(f,c)); 
		return (matriz1.getValor(f,c)+matriz2.getValor(f,c));

	}else{ //Caso general

		if(f > -1){
			c--;

			if(c >= -1){

				this->setValor(f,c+1,matriz1.getValor(f,c+1)+matriz2.getValor(f,c+1)); 
				return matriz1.getValor(f,c+1)+matriz2.getValor(f,c+1)+sumaRecursiva(matriz1, matriz2,f, c);		
			}else{

				return sumaRecursiva(matriz1, matriz2, f-1, 1);
			}
		}
		
	}
	return 0;
}

template<typename T>
int Matriz<T>::multiplicacionRecursiva(Matriz matriz1, Matriz matriz2, int f, int c){

 	if((f==0) && (c==0)){  //Caso base	
		this->setValor(f,c,((matriz1.getValor(f,c+1) * matriz2.getValor(f+1,c))+(matriz1.getValor(f,c) * matriz2.getValor(f,c)))); 
		/*cout<<"\n 1->"<<matriz1.getValor(f,c+1)<<endl; 
		cout<<"\n 2->"<<matriz2.getValor(f+1,c)<<endl;
		cout<<"\n 3->"<<matriz1.getValor(f,c)<<endl;
		cout<<"\n 4->"<<matriz2.getValor(f,c)<<endl;*/
		return((matriz1.getValor(f,c) * matriz2.getValor(f,c))+(matriz1.getValor(f,c) * matriz2.getValor(f+1,c)));
	}else{ //Caso general

		if(f > -1){
			c--;

			if(c >= -1){
			if(f==1){
				if(c==0){
					this->setValor(f,c+1,((matriz1.getValor(f,c) * matriz2.getValor(f-1,c+1))+(matriz1.getValor(f,c+1) * matriz2.getValor(f,c+1))));
				/*cout<<"\n 5->"<<matriz1.getValor(f,c)<<endl; 
				cout<<"\n 6->"<<matriz2.getValor(f-1,c+1)<<endl;
				cout<<"\n 7->"<<matriz1.getValor(f,c+1)<<endl;
				cout<<"\n 8->"<<matriz2.getValor(f,c+1)<<endl;*/
				}else if(c==-1){
					this->setValor(f,c+1,((matriz1.getValor(f,c+1) * matriz2.getValor(f-1,c+1))+(matriz1.getValor(f,c+2) * matriz2.getValor(f,c+1))));
				/*cout<<"\n 5->"<<matriz1.getValor(f,c+1)<<endl; 
				cout<<"\n 6->"<<matriz2.getValor(f-1,c+1)<<endl;
				cout<<"\n 7->"<<matriz1.getValor(f,c+2)<<endl;
				cout<<"\n 8->"<<matriz2.getValor(f,c+1)<<endl;*/
				}
			}else if(f==0){
					if(c==0){
					this->setValor(f,c+1,((matriz1.getValor(f,c+1) * matriz2.getValor(f+1,c+1))+(matriz1.getValor(f,c) * matriz2.getValor(f,c+1))));
				/*cout<<"\n 5->"<<matriz1.getValor(f,c+1)<<endl; 
				cout<<"\n 6->"<<matriz2.getValor(f+1,c+1)<<endl;
				cout<<"\n 7->"<<matriz1.getValor(f,c)<<endl;
				cout<<"\n 8->"<<matriz2.getValor(f,c+1)<<endl;*/
				}
			}	

				return  multiplicacionRecursiva(matriz1, matriz2, f, c);
				
			}else{

				return multiplicacionRecursiva(matriz1, matriz2, f-1, 1);
			}
		}
		
	}
	return 0;
}




