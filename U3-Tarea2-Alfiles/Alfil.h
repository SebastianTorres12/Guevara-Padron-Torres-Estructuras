/***********************************************************************
UFA - ESPE
AUTORES: Ariel Guevara,Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 28/01/2023
FECHA DE MODIFICACIÓN: 29/01/2023
Tarea2: Solucion Alfiles 
GITHUB: Guevara-Padron-Torres-Estructuras
 ***********************************************************************/
#include <iostream>
#include <fstream>
#include "Metodos.h"
using namespace std;
class Alfil : public Metodos{
	private:
		bool **validar;
		char **tablero;
		fstream archivo;
		int contador;
		int n;
	public:
		Alfil();
		~Alfil();
		bool** getValidar();
		void setValidar(bool **validar);
		char** getTablero();
		void setTablero(char **tablero);
		fstream getArchivo();
		void setArchivo(fstream archivo);
		int getContador();
		void setContador(int contador);
		int getN();
		void setN(int n);
		//Metodos de la interface
		void encerarTablero() override;
		void crearArchivo() override;
		void bloquear(int x, int y) override;
		void mostrar() override;
		void quitarRelleno(int x, int y) override;
		void solucion(int x, int y, int n1) override;
		void solucionAlfilFilas() override;
		void solucionAlfil() override;
};