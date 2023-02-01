/***********************************************************************
UFA - ESPE
AUTORES: Ariel Guevara,Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 31/01/2023
FECHA DE MODIFICACIÓN: 31/01/2023
Tarea2: Correcion Prueba 
GITHUB: Guevara-Padron-Torres-Estructuras
 ***********************************************************************/
#include "Grafico.h"
//#include "Alfil.h"
using namespace std;

using std::stringstream;
void Grafico::leerArchivoMatriz(Alfil ficha){
    std::string lineas{}; // lineas = ""
    std::string nums{};

    std::ifstream archivo;
    int i{}; // i=0;
    int j{};
    archivo.open("cuadros.txt",std::ios::in);
    if (archivo.fail()){
        cout<<"Ocurrio un error\nNo se pudo abrir el archivo"<<std::endl;
    }else{
        while (!archivo.eof()){
            //capturamos cada linea del txt
            getline(archivo,lineas);
            //enviamos cada linea a una variable que nos ayudara a separar cada valor obtenido en las lineas del txt
            stringstream text_stream(lineas);
            //almacenamos en nums cada numero que esta separado por ' '
            while (getline(text_stream, nums, ' ')) {
            	if (nums != "0" && nums != "1"){
                    nums = 3;
                }else{
                    //matriz.setValor(i,j,stoi(nums));
                    *(*(ficha.tableroAlfil+i)+j) = stoi(nums);
                    j++;
                }
            }
            i++;
            j=0;
        }
        archivo.close();
    }
}

void Grafico::graficarTablero(Alfil ficha){
    int x1=100;
    int x2=159;
    int y1 = 100;
	int y2 = 160;
    char vecS[10];

    cleardevice();
    setfillstyle(SOLID_FILL,WHITE);
    //tabla de ajedrez
    for (int i=1; i<=8; ++i){
        //verticales
        sprintf(vecS, "%d", i);
		outtextxy(85, y1+18, vecS);
        for (int j=0; j<8; ++j){
                //horizontales
            sprintf(vecS, "%d", j+1);
            outtextxy(x1+30, 100 + (60*8), vecS);
            if (*(*(ficha.tableroAlfil+i-1)+j) == 1){
            //if (ficha.TableroAlfil[i-1][j] == 1){
                bar(x1,y1,x2+1,y2);
                x1 += 60;
                x2 += 60;
            }else if (*(*(ficha.tableroAlfil+i-1)+j) == 0){
                rectangle(x1,y1,x2,y2);
                x1 += 60;
                x2 += 60;
            }else{
                std::cout<<"";
            }
        }
        x1 = 100;
        x2 = 159;
        y1 = y2;
        y2 += 60;
    }
}

void Grafico::movimientosAlfil(Alfil ficha,int x, int y){
    //nuestra
    int fila = x-1;
    int columna = y-1;
    int x1=100;
    int x2=159;
    int y1 = 100;
	int y2 = 160;

	//diagonal inclinada a la izquierda

    while (columna >= 0 && fila < 8){
        fflush(stdin);
        columna -= 1;
        fila += 1;
    }
        columna += 1;
        fila -= 1;

    while (fila >= 0 &&columna < 8){
        *(*(ficha.tableroAlfil+fila)+columna) = 5;
        columna = columna + 1;
        fila = fila - 1;
    }

    //regresamos a la posicion original
    fila = x-1;
    columna = y-1;

    //diagonal inclinada a la derecha
    while (columna > 0 && fila > 0){

        columna -= 1;
        fila -= 1;

    }

    while (columna < 8 && fila < 8){
        *(*(ficha.tableroAlfil+fila)+columna) = 5;
        columna += 1;
        fila += 1;
    }
    setfillstyle(SOLID_FILL,GREEN);
    for (int p=0; p<8; ++p){
        for (int g=0; g<8; ++g){

            if (*(*(ficha.tableroAlfil+p)+g) == 5){
                bar(x1,y1,x2+1,y2);
                //sprintf(vecS, "%d", arr[1]);
                outtextxy(x1+26, y1+24, "A");
            }
            x1 += 60;
            x2 += 60;
        }
        x1 = 100;
        x2 = 159;
        y1 = y2;
        y2 += 60;
    }

}
