/***********************************************************************
UFA - ESPE
AUTORES: Ariel Guevara,Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 31/01/2023
FECHA DE MODIFICACIÓN: 31/01/2023
Tarea2: Correcion Prueba 
GITHUB: Guevara-Padron-Torres-Estructuras
 ***********************************************************************/

#include "Menu.h"
#include "Grafico.cpp"
#include "ValidacionDatos.cpp"
#define Tecla_Arriba 72
#define Tecla_Abajo 80
#define Enter 13
using namespace std;

int validarIngreso(char* mensaje){
    int valor = 0;
    ValidacionDatos objValidar;
    char numfC[10],numcC[10];

    valor=objValidar.casteoEnteros(numfC,mensaje);
    while (valor > 8 || valor < 1){
        valor=objValidar.casteoEnteros(numfC,mensaje);
    }
    return valor;
}

void Menu::menuPrincipal(){
	int cedula,horas,opcMP=0, opcMR=0,f=0,c=0;
	bool repetir=true,repetir2=true;
    ValidacionDatos objValidar;
    char numfC[10],numcC[10];


	const char *titulo="TABLERO AJEDREZ";
    const char *opciones[]={"Tablero Ajedrez.","Cerrar aplicativo."};
    const char *titulo2="OPCIONES";
    const char *opciones2[]={"Colocar Alfil.","Retornar al menu principal"};
    Grafico gf;
   	Alfil al;
	do{
    	opcMP = menu(titulo,opciones,2);
    	switch(opcMP){
    		case 1:{
    			system("cls");

					do{
					opcMR=menu(titulo2,opciones2,2);

					switch(opcMR){
						case 1:{
							system("cls");
                            gf.leerArchivoMatriz(al);
    						gf.graficarTablero(al);
    						f = validarIngreso("\nIngrese la fila->");
    						c = validarIngreso("\nIngrese la columna->");



   					 		gf.movimientosAlfil(al,f,c);
							//cout<<"grafico"<<endl;
					
							break;

						}
						case 2:{
							setfillstyle(SOLID_FILL,WHITE);
							gf.leerArchivoMatriz(al);
    						gf.graficarTablero(al);
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

/**
 * Valida el número de DNI de una persona.
 *
 * @param cedulaC es una matriz de caracteres que contiene la entrada del usuario.
 *
 * @return el valor de la variable cédula.
 */
/*int Menu::validarCedula(char *cedulaC){
	ValidacionDatos objValidaciones;
	int cedula=0;
	int cifras=0;
	string cedulaS;

	do{
		try{
		cedula=objValidaciones.casteoEnteros(cedulaC,"\nIngrese una cedula correcta");
		cedulaS=cedulaC;
		cifras=cedulaS.size();
		if(cifras!=10){
			throw "Cedula incorrecta, ingrese una cedula de 10 digitos";
		}
		if(cifras==10){
			//cout<<"\nCedula correcta"<<endl;
			break;
		}
		}catch(const char* s){
			cout<<"\nCatch:"<<s<<endl;
		}
	}while(cifras!=10);

	return cedula;
}*/

bool Menu::verificarCedula(const string &cedula){
	    int sumaAntigua{};

    for (int i{}; i < 9; i += 2) {
        int valorDetectar = (cedula[i] - '0') * 2;

        if (valorDetectar > 9)
            valorDetectar -= 9;

        sumaAntigua += valorDetectar;
    }

    int sumaNueva{};

    for (int i{1}; i < 8; i += 2) {
        sumaNueva += (cedula[i] - '0');
    }

    int digitoVerificar = ((sumaAntigua + sumaNueva) % 10 != 0) ? 10 - (sumaAntigua + sumaNueva) % 10 : 0;

    return digitoVerificar == (cedula[9] - '0');

}

