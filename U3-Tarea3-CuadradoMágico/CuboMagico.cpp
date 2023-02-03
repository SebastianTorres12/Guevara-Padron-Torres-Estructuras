/*************************
UFA - ESPE
AUTORES: Ariel Guevara,Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 1/02/2023
FECHA DE MODIFICACIÓN: 2/02/2023
Tarea3-Grupo7_CuadradoMágico
GITHUB: Guevara-Padron-Torres-Estructuras
 *************************/
#include "CuboMagico.h"

CuboMagico::CuboMagico(){
    //this->cubo = matriz;
}

void CuboMagico::mostrar(Matriz<int> cubo){
    cubo.imprimirMatriz();
}
void CuboMagico::sumaMagica(Matriz<int> cubo){
    int suma=0;
    for (int i=0; i<cubo.getC(); ++i){
        suma += cubo.getValor(1,i);
    }
    std::cout<<"Suma de filas, columnas y verticales es: "<<suma<<std::endl;
}
void CuboMagico::llenarCubo(Matriz<int> cubo){
    int fila{0};
    int columna{(cubo.getC()-1)/2}; //3
    int dimension{cubo.getC()*cubo.getC()}; // 25
    int limite = cubo.getC()-1; //4
    //recorre todas las posiciones del cubo
    cubo.setValor(fila, columna, 1);
    for (int i=2; i <= dimension; ++i){
        fila--;
        columna++;
        // resetea a la fila con el limite
        if (fila < 0) fila = limite;
        // resetea a la columna con 0
        if (columna > limite) columna = 0;
        // verifica las colisiones
        if (cubo.getValor(fila, columna) != NULL){
            for (int h=1; h<=2; ++h){
                fila++;
                if (fila > limite) fila = 0;
            }
            columna --;
            if (columna < 0) columna = limite;
        }
        //asignamos los valores
        cubo.setValor(fila, columna, i);
    }
    this->sumaMagica(cubo);
}

void CuboMagico::llenarCuboManual(Matriz<int> cubo, Vector vec){

	int fila{0};
    int columna{(cubo.getC()-1)/2}; //3
    int dimension{cubo.getC()*cubo.getC()}; // 25
    int limite = cubo.getC()-1; //4
    //recorre todas las posiciones del cubo
    cubo.setValor(fila, columna,vec.getDato(1) );
    for (int i=2; i <= dimension; ++i){
        fila--;
        columna++;
        // resetea a la fila con el limite
        if (fila < 0) fila = limite;
        // resetea a la columna con 0
        if (columna > limite) columna = 0;
        // verifica las colisiones
        if (cubo.getValor(fila, columna) != NULL){
            for (int h=1; h<=2; ++h){
                fila++;
                if (fila > limite) fila = 0;
            }
            columna --;
            if (columna < 0) columna = limite;
        }
        //asignamos los valores

        cubo.setValor(fila, columna, vec.getDato(i));
    }
    this->sumaMagica(cubo);
}

void CuboMagico::llenarCuboCuaxCua(Matriz<int> cubo, int dim){
	int valor=1;

	for(int i=0;i<dim;i++){
		for(int j=0;j<dim;j++){
			cubo.setValor(i,j,valor);
			valor++;
		}
	}

	int val2=0;
	int val3=0;

	for(int k=0;k<dim;k++){
		if(k==0){
			val2=cubo.getValor(k,k);
			val3=cubo.getValor(k+3,k+3);
			cubo.setValor(k,k,val3);
			cubo.setValor(k+3,k+3,val2);
		}
		if(k==1){
			val2=cubo.getValor(k,k);
			val3=cubo.getValor(k+1,k+1);
			cubo.setValor(k,k,val3);
			cubo.setValor(k+1,k+1,val2);
		}
	}

	int z=0;
	for(int h=3;h>=0;h--){

		if(h==3){
			val2=cubo.getValor(z,h);
			val3=cubo.getValor(h,z);
			cubo.setValor(z,h,val3);
			cubo.setValor(h,z,val2);
		}
		if(h==2){

			val2=cubo.getValor(z,h);
			val3=cubo.getValor(h,z);
			cubo.setValor(z,h,val3);
			cubo.setValor(h,z,val2);
		}
		z++;
	}
    this->sumaMagica(cubo);
}
