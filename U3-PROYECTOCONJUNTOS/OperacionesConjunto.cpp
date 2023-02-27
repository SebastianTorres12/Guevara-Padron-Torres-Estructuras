

/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Ariel Guevara
FECHA DE CREACIÓN: 19/02/2023
FECHA DE MODIFICACIÓN: 26/02/2023
Proyecto Unidad 3
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include "OperacionesConjunto.h"
#include "Grafico.cpp"

OperacionesConjunto::OperacionesConjunto(Conjunto<int> A, Conjunto<int> B){
	this->A=A;
	this->B=B;
}

void OperacionesConjunto::unionConjuntos(){
	cleardevice();
	Grafico grafico;

	settextstyle(1,HORIZ_DIR,3);
	outtextxy(250, 50,"UNION DE CONJUNTOS");
	settextstyle(1,HORIZ_DIR,1);
	outtextxy(25, 120,"A=");
	outtextxy(505, 120,"B=");
	outtextxy(110, 300,"C=");
	settextstyle(1,HORIZ_DIR,5);
	outtextxy(420, 120,"U");
	grafico.dibujarConjunto(this->A,1);
	grafico.dibujarConjunto(this->B,2);

	Conjunto<int> copiaA;
	Conjunto<int> copiaB;

	//Creacion conjunto C
	Conjunto<int> C;  // -> intersecciones
	//Creacion conjunto U
	Conjunto<int> U;  // -> Union de la todos los conjuntos

    // Auxiliares de nodos de los conjuntos
	NodoDoble *aux1 = A.getPrimero();
    NodoDoble *aux2 = B.getPrimero();
    NodoDoble *auxC = C.getPrimero();


	//Llenar copia A
	copiaA = A;
	//Llenar copia B
	copiaB = B;

	//Interseccion
	aux1=A.getPrimero();
	bool comprobar=false;
	while(aux1){ //O(n)

		aux2=copiaB.getPrimero();
		int pos;
		while(aux2){ //O(n^2)

				if(aux1->getValor()==aux2->getValor()){
				//Comprobar que no hayan elementos en C
				auxC=C.getPrimero();
				while(auxC){
					if(aux1->getValor()==auxC->getValor()){
						comprobar=true;
					}
					auxC=auxC->getSiguiente();
				}
				//fin comprobacion
				if(!comprobar){
					C.insertarPorCola(aux1->getValor());
					pos=copiaB.getPos(aux1->getValor());
					copiaB.eliminarEntre(pos);

				}else{
					pos=copiaB.getPos(aux1->getValor());
					copiaB.eliminarEntre(pos);
				}

			}
			aux2=aux2->getSiguiente();

		}
		aux1=aux1->getSiguiente();
		comprobar=false;
	}

	//Borrar elementos A
	auxC=C.getPrimero();

	int pos;
	while(auxC){
		aux1 =copiaA.getPrimero();
		while(aux1){
			if(aux1->getValor()==auxC->getValor()){
				pos=copiaA.getPos(auxC->getValor());
				copiaA.eliminarEntre(pos);
			}

			aux1=aux1->getSiguiente();
		}
	auxC=auxC->getSiguiente();
	}
	//UNION
    U.adicionarAlConjunto(copiaA);
    U.adicionarAlConjunto(C);
    U.adicionarAlConjunto(copiaB);

	system("cls");
	cout<<"\nUNION DE LOS CONJUNTOS A Y B"<<endl;
	U.mostrarPorCabeza();
	grafico.dibujarConjunto(U,3);


}

void OperacionesConjunto::interseccion(){
	cleardevice();
	Grafico grafico;

	settextstyle(1,HORIZ_DIR,3);
	outtextxy(220, 50,"INTERSECCION DE CONJUNTOS");
	settextstyle(1,HORIZ_DIR,1);
	outtextxy(25, 120,"A=");
	outtextxy(505, 120,"B=");
	outtextxy(110, 300,"C=");
	settextstyle(1,HORIZ_DIR,5);
	outtextxy(420, 120,"^");
	grafico.dibujarConjunto(this->A,1);
	grafico.dibujarConjunto(this->B,2);

	Conjunto<int> copiaA;
	Conjunto<int> copiaB;

	//Creacion conjunto C
	Conjunto<int> C;  //-> Intersecciones

	// Auxiliares de nodos de los conjuntos
	NodoDoble *aux1 = A.getPrimero();
    NodoDoble *aux2 = B.getPrimero();
    NodoDoble *auxC = C.getPrimero();

	//Llenar copia A
	copiaA = A;
	//Llenar copia B
	copiaB = B;

	//Interseccion
	aux1=A.getPrimero();
	bool comprobar=false;
	while(aux1){

		aux2=copiaB.getPrimero();
		int pos;
		while(aux2){

				if(aux1->getValor()==aux2->getValor()){
				//Comprobar que no hayan elementos en C
				auxC=C.getPrimero();
				while(auxC){
					if(aux1->getValor()==auxC->getValor()){
						comprobar=true;
					}
					auxC=auxC->getSiguiente();
				}
				//fin comprobacion
				if(!comprobar){
					C.insertarPorCola(aux1->getValor());
					pos=copiaB.getPos(aux1->getValor());
					copiaB.eliminarEntre(pos);

				}else{
					pos=copiaB.getPos(aux1->getValor());
					copiaB.eliminarEntre(pos);
				}

			}
			aux2=aux2->getSiguiente();

		}
		aux1=aux1->getSiguiente();
		comprobar=false;
	}

	//Borrar elementos A
	auxC =C.getPrimero();

	int pos;
	while(auxC){
		NodoDoble *auxEA=copiaA.getPrimero();
		while(auxEA){
			if(auxEA->getValor()==auxC->getValor()){
				pos=copiaA.getPos(auxC->getValor());
				copiaA.eliminarEntre(pos);
			}

			auxEA=auxEA->getSiguiente();
		}
	auxC=auxC->getSiguiente();
	}
	//
	system("cls");
	cout<<"\nCONJUNTO INTERSECCION"<<endl;
	C.mostrarPorCabeza();
	grafico.dibujarConjunto(C,3);

}

void OperacionesConjunto::complemento(){
	cleardevice();
	Grafico grafico;

	settextstyle(1,HORIZ_DIR,3);
	outtextxy(250, 50,"COMPLEMENTO");
	settextstyle(1,HORIZ_DIR,1);
	outtextxy(25, 120,"A=");
	outtextxy(505, 120,"B=");

	grafico.dibujarConjunto(this->A,1);
	grafico.dibujarConjunto(this->B,2);

	ValidacionDatos objValidar;

	Conjunto<int> copiaA;
	Conjunto<int> copiaB;

	int numDatos = A.getNumNodos() + B.getNumNodos();

	//Creacion conjunto C
	Conjunto<int> C;

	// Auxiliares de nodos de los conjuntos
	NodoDoble *aux1 = A.getPrimero();
    NodoDoble *aux2 = B.getPrimero();
    NodoDoble *auxC = C.getPrimero();

	//Llenar copia A
	copiaA = A;
	//Llenar copia B
	copiaB = B;

	//Interseccion
	aux1=A.getPrimero();
	bool comprobar=false;
	while(aux1){

		aux2=copiaB.getPrimero();
		int pos;
		while(aux2){

				if(aux1->getValor()==aux2->getValor()){
				//Comprobar que no hayan elementos en C
				auxC=C.getPrimero();
				while(auxC){
					if(aux1->getValor()==auxC->getValor()){
						comprobar=true;
					}
					auxC=auxC->getSiguiente();
				}
				//fin comprobacion
				if(!comprobar){
					C.insertarPorCola(aux1->getValor());
					pos=copiaB.getPos(aux1->getValor());
					copiaB.eliminarEntre(pos);

				}else{
					pos=copiaB.getPos(aux1->getValor());
					copiaB.eliminarEntre(pos);
				}

			}
			aux2=aux2->getSiguiente();

		}
		aux1=aux1->getSiguiente();
		comprobar=false;
	}

	//Borrar elementos A
	auxC = C.getPrimero();

	int pos;
	while(auxC){
		NodoDoble *auxEA=copiaA.getPrimero();
		while(auxEA){
			if(auxEA->getValor()==auxC->getValor()){
				pos=copiaA.getPos(auxC->getValor());
				copiaA.eliminarEntre(pos);
			}

			auxEA=auxEA->getSiguiente();
		}
	auxC=auxC->getSiguiente();
	}
	//Complemento
	int op=0;
	do{
		system("cls");
		cout<<"\nDe cual conjunto desea el complemento?"<<endl;
		cout<<"1. Complemento A."<<endl;
		cout<<"2. Complemento B."<<endl;
		cout<<"3. Retornar al menu principal."<<endl;
		char valorC[10];
		op=objValidar.casteoEnteros(valorC,"\nIngrese la opcion-> ");
		switch(op){
			case 1:{
					system("cls");
					cout<<"\nComplemento A"<<endl;
					settextstyle(1,HORIZ_DIR,3);
					outtextxy(250, 50,"COMPLEMENTO DE A");
					settextstyle(1,HORIZ_DIR,1);
					outtextxy(110, 300,"A'=");
					grafico.dibujarConjunto(copiaB,3);
					copiaB.mostrarPorCabeza();
					grafico.dibujarNotacion(numDatos);

				break;
			}
			case 2:{
					system("cls");
					cout<<"\nComplemento B"<<endl;
					settextstyle(1,HORIZ_DIR,3);
					outtextxy(250, 50,"COMPLEMENTO DE B");
					settextstyle(1,HORIZ_DIR,1);
					outtextxy(110, 300,"B'=");
					grafico.dibujarConjunto(copiaA,3);
					copiaA.mostrarPorCabeza();
                    grafico.dibujarNotacion(numDatos);
				break;
			}
			case 3:{
				cout<<"Retornando al menu principal..."<<endl;
				break;
			}
		}
	}while(op!=3);
}

void OperacionesConjunto::diferencia(){
	cleardevice();
	Grafico grafico;

	settextstyle(1,HORIZ_DIR,3);
	outtextxy(250, 50,"DIFERENCIA DE CONJUNTOS");
	settextstyle(1,HORIZ_DIR,1);
	outtextxy(25, 120,"A=");
	outtextxy(505, 120,"B=");
	grafico.dibujarConjunto(this->A,1);
	grafico.dibujarConjunto(this->B,2);

	ValidacionDatos objValidar;

	Conjunto<int> copiaA;
	Conjunto<int> copiaB;

	int numDatos = A.getNumNodos() + B.getNumNodos();

	//Creacion conjunto C
	Conjunto<int> C;

	// Auxiliares de nodos de los conjuntos
	NodoDoble *aux1 = A.getPrimero();
    NodoDoble *aux2 = B.getPrimero();
    NodoDoble *auxC = C.getPrimero();

	//Llenar copia A
	copiaA = A;
	//Llenar copia B
	copiaB = B;

	//Interseccion
	aux1=A.getPrimero();
	bool comprobar=false;
	while(aux1){

		aux2=copiaB.getPrimero();
		int pos;
		while(aux2){

				if(aux1->getValor()==aux2->getValor()){
				//Comprobar que no hayan elementos en C
				auxC=C.getPrimero();
				while(auxC){
					if(aux1->getValor()==auxC->getValor()){
						comprobar=true;
					}
					auxC=auxC->getSiguiente();
				}
				//fin comprobacion
				if(!comprobar){
					C.insertarPorCola(aux1->getValor());
					pos=copiaB.getPos(aux1->getValor());
					copiaB.eliminarEntre(pos);

				}else{
					pos=copiaB.getPos(aux1->getValor());
					copiaB.eliminarEntre(pos);
				}

			}
			aux2=aux2->getSiguiente();
		}
		aux1=aux1->getSiguiente();
		comprobar=false;
	}

	//Borrar elementos A
	auxC = C.getPrimero();

	int pos;
	while(auxC){
		NodoDoble *auxEA=copiaA.getPrimero();
		while(auxEA){
			if(auxEA->getValor()==auxC->getValor()){
				pos=copiaA.getPos(auxC->getValor());
				copiaA.eliminarEntre(pos);
			}

			auxEA=auxEA->getSiguiente();
		}
	auxC=auxC->getSiguiente();
	}
	//Diferencia
	int op=0;
	do{
		system("cls");
		cout<<"\nDiferencia existente entre los conjuntos"<<endl;
		cout<<"1.  A - B."<<endl;
		cout<<"2.  B - A."<<endl;
		cout<<"3. Retornar al menu principal."<<endl;
		char valorC[10];
		op=objValidar.casteoEnteros(valorC,"\nIngrese la opcion-> ");
		switch(op){
			case 1:{
					system("cls");
					cout<<"\n A - B"<<endl;
					settextstyle(1,HORIZ_DIR,3);
					outtextxy(200, 50,"                   A - B                                       ");
					settextstyle(1,HORIZ_DIR,1);
					outtextxy(80, 300,"A-B=");
					grafico.dibujarConjunto(copiaA,3);
					copiaA.mostrarPorCabeza();
					grafico.dibujarNotacion(numDatos);

				break;
			}
			case 2:{
					system("cls");
					cout<<"\n B - A"<<endl;
					settextstyle(1,HORIZ_DIR,3);
					outtextxy(200, 50,"                   B - A                                       ");
					settextstyle(1,HORIZ_DIR,1);
					outtextxy(80, 300,"B-A=");
					grafico.dibujarConjunto(copiaB,3);
					copiaB.mostrarPorCabeza();
					grafico.dibujarNotacion(numDatos);

				break;
			}
			case 3:{
				cout<<"Retornando al menu principal..."<<endl;

				break;
			}
		}
	}while(op!=3);
}

void OperacionesConjunto::diferenciaSimetrica(){
	cleardevice();
	Grafico grafico;
	
	settextstyle(1,HORIZ_DIR,3);
	outtextxy(25, 50,"DIFERENCIA SIMETRICA DE CONJUNTOS");
	settextstyle(1,HORIZ_DIR,1);
	outtextxy(25, 120,"A=");
	outtextxy(505, 120,"B=");
	outtextxy(110, 300,"R=");
	readimagefile("triangulo.jpg", 420, 120, 460, 150);

	grafico.dibujarConjunto(this->A,1);
	grafico.dibujarConjunto(this->B,2);

	ValidacionDatos objValidar;

	Conjunto<int> copiaA;
	Conjunto<int> copiaB;

	//Creacion conjunto C y D
	Conjunto<int> C;
	Conjunto<int> D;

	// Auxiliares de nodos de los conjuntos
	NodoDoble *aux1 = A.getPrimero();
    NodoDoble *aux2 = B.getPrimero();
    NodoDoble *auxC = C.getPrimero();

	//Llenar copia A
    copiaA=A;
	//Llenar copia B
	copiaB=B;

	//Interseccion
	bool comprobar=false;
	while(aux1){
		aux2=copiaB.getPrimero();
		int pos;
		while(aux2){

				if(aux1->getValor()==aux2->getValor()){
				//Comprobar que no hayan elementos en C
				NodoDoble *auxC=C.getPrimero();
				while(auxC){
					if(aux1->getValor()==auxC->getValor()){
						comprobar=true;
					}
					auxC=auxC->getSiguiente();
				}
				//fin comprobacion
				if(!comprobar){
					C.insertarPorCola(aux1->getValor());
					pos=copiaB.getPos(aux1->getValor());
					copiaB.eliminarEntre(pos);

				}else{
					pos=copiaB.getPos(aux1->getValor());
					copiaB.eliminarEntre(pos);
				}

			}
			aux2=aux2->getSiguiente();

		}
		aux1=aux1->getSiguiente();
		comprobar=false;
	}
	//Borrar elementos A
	auxC = C.getPrimero();
	int pos;
	while(auxC){
		aux1 =copiaA.getPrimero();
		while(aux1){
			if(aux1->getValor()==auxC->getValor()){
				pos=copiaA.getPos(auxC->getValor());
				copiaA.eliminarEntre(pos);
			}

			aux1=aux1->getSiguiente();
		}
	auxC=auxC->getSiguiente();
	}
	//Diferencia simetrica

		//Metodo union conjuntos

	//Unir copiaA
	D.adicionarAlConjunto(copiaA);
	//Unir copiaB
	D.adicionarAlConjunto(copiaB);

	cout<<"\nDiferencia Simetrica"<<endl;
	D.mostrarPorCabeza();
	grafico.dibujarConjunto(D,3);
}
