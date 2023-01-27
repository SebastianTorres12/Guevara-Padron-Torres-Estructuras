/*************************
UFA - ESPE
AUTORES: Ariel Guevara,Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 25/01/2023
FECHA DE MODIFICACIÓN: 26/01/2023
Tarea1- Tablero ajedrez, lectura de txt.
GITHUB: Guevara-Padron-Torres-Estructuras
 *************************/
#include "AjedrezConsola.h"

using std::stringstream;


void AjedrezConsola::leerArchivoMatriz(Matriz<int> matriz){
    std::string lineas{}; // lineas = ""
    std::string nums{};
   
    std::ifstream archivo;
    int i{}; // i=0;
    int j{};
    archivo.open("cuadros.txt",std::ios::in);
    if (archivo.fail()){
        std::cout<<"Ocurrio un error\nNo se pudo abrir el archivo"<<std::endl;
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
                    matriz.setValor(i,j,stoi(nums));
                    j++;
                }
                //metemos al vector cada unos de esos numeros
            }
            i++;
            j=0;
        }
        archivo.close();
    }
    
}


void AjedrezConsola::dibujarTableroMatriz(int tam, Matriz<int> matriz){
	
	    //filas del tablero
    for (int k=0; k<matriz.getF(); ++k){
        //alto de los cuadrados
        for (int i=0; i<tam; ++i){
            //columnas de cuadrados
            for (int j=0; j<matriz.getC(); ++j){
                if (matriz.getValor(k,j) == 1){
                //dibujamos cuadros blancos
                dibujarCuadradoBlanco(tam);
                }else if (matriz.getValor(k,j) == 0){
                    //dibujamos cuadros negros
                    dibujarCuadradoNegro(tam);
                }else{
                    std::cout<<"";
                }
            }  
            std::cout<<"\n";  
        }
    }
}

void AjedrezConsola::dibujarCuadradoBlanco(int tam){
    char cuad = 219;
    for (int i=0; i<(tam*2)+1; ++i){
        std::cout<<cuad;
    }
}

void AjedrezConsola::dibujarCuadradoNegro(int tam){
    for (int i=0; i<(tam*2)+1; ++i){
        std::cout<<" ";
    }
}

