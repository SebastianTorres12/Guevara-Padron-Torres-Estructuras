

/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Ariel Guevara
FECHA DE CREACIÓN: 19/02/2023
FECHA DE MODIFICACIÓN: 26/02/2023
Proyecto Unidad 3
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/

#include "Menu.h"
#include "OperacionesConjunto.cpp"
#include "ValidacionDatos.cpp"
#define Tecla_Arriba 72
#define Tecla_Abajo 80
#define Enter 13
using namespace std;

void Menu::menuPrincipal(){
	int opcMP=0, opcMR=0,valor=0,banderaNumValores,numDatos;

	bool repetir=true,repetir2=true;
    ValidacionDatos objValidar;
    Grafico objG;
    char valorV[10];


	const char *titulo="BIENVENIDO AL APLICATIVO OPERACIONES DE CONJUNTO";
    const char *opciones[]={"Insertar Conjuntos.","Cerrar aplicativo."};
    const char *titulo2="OPERACIONES PARA LOS CONJUNTOS";
    const char *opciones2[]={"Union.","Interseccion.","Complemento.","Diferencia","Diferencia Simetrica","Retornar al menu principal."};

	do{
    	opcMP = menu(titulo,opciones,2);
    	switch(opcMP){
    		case 1:{
    				system("cls");
    				Conjunto<int> objA;
					Conjunto<int> objB;
					do{
					banderaNumValores=objValidar.casteoEnteros(valorV,"\nDatos a trabajar en el 1er conjunto(max 10 datos)-> ");
					}while(banderaNumValores>10||banderaNumValores<=0);

					do{
						do{
							valor=objValidar.casteoEnteros(valorV,"\nIngrese un valor entre (1 - 99) -> ");

						}while(valor>99||valor<=0);

						objA.insertarPorCola(valor);

						banderaNumValores--;
					}while(banderaNumValores!=0);
					//
					do{
					banderaNumValores=objValidar.casteoEnteros(valorV,"\nDatos a trabajar en el 2do conjunto(max 10 datos)-> ");
					}while(banderaNumValores>10||banderaNumValores<=0);
					do{
							do{
							valor=objValidar.casteoEnteros(valorV,"\nIngrese el valor entre (1 - 99) -> ");
						}while(valor>99||valor<=0);
						objB.insertarPorCola(valor);

						banderaNumValores--;
					}while(banderaNumValores!=0);
					//
					OperacionesConjunto *objUnion = new OperacionesConjunto(objA,objB);
					numDatos=objA.getNumNodos()+objB.getNumNodos();

    				//
					do{
					opcMR=menu(titulo2,opciones2,6);
					switch(opcMR){
						case 1:{
							system("cls");
							//



							objUnion->unionConjuntos();

							objG.dibujarNotacion(numDatos);

							break;
						}
						case 2:{
							system("cls");
							objUnion->interseccion();

							objG.dibujarNotacion(numDatos);
							break;
						}
						case 3:{
							system("cls");
							objUnion->complemento();

							//objG.dibujarNotacion(numDatos);
							break;
						}
						case 4:{
							system("cls");
							objUnion->diferencia();

							//objG.dibujarNotacion(numDatos);
							break;
						}
						case 5:{
							system("cls");
							objUnion->diferenciaSimetrica();

							objG.dibujarNotacion(numDatos);
							break;
						}
						case 6:{
							repetir2=false;
							break;
						}
					}
					}while(repetir2);
					repetir2=true;

				break;
			}


    		case 2:{
    			system("cls");
    			cout<<"\n\t  HASTA PRONTO";
                repetir=false;
                break;
			}
		}
	}while(repetir);
}

/**
 * Muestra un menú con un título y una lista de opciones, y devuelve el número de la opción
 * seleccionada por el usuario
 *
 * @param titulo El título del menú.
 * @param opciones es una matriz de cadenas que contiene las opciones que se mostrarán en el menú.
 * @param n número de opciones
 *
 * @return La opción seleccionada por el usuario.
 */
int Menu::menu(const char *titulo,const char *opciones[],int n){
    int opcSeleccionada=1;
    int tecla;
    bool repetir=true;
    do{
        system("cls");
        gotoxy(5,3+opcSeleccionada); cout<<"-->";
        gotoxy(15,2); cout<<titulo;
        for(int i=0;i<n;i++){
            gotoxy(10,4+i); cout<<i+1<<"."<<opciones[i];
        }

        do{
            tecla=getch();
        }while(tecla!=Tecla_Arriba && tecla!=Tecla_Abajo && tecla!=Enter);

        switch (tecla)
        {
        case Tecla_Arriba:
            opcSeleccionada--;
            if(opcSeleccionada<1){
               opcSeleccionada=n;
            }
            break;
        case Tecla_Abajo:
            opcSeleccionada++;
            if(opcSeleccionada>n){
               opcSeleccionada=1;
            }
            break;
        case Enter:
            repetir=false;
            break;
        }
    }while(repetir);


    return opcSeleccionada;

}

/**
 * Mueve el cursor a la posición especificada
 *
 * @param x La coordenada x del cursor.
 * @param y La coordenada y del cursor.
 */
void Menu::gotoxy(int x,int y){
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
}



