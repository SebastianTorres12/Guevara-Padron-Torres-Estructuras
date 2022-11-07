/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 4/11/2022
FECHA DE MODIFICACIÓN: 6/11/2022
Tarea5-Tabla de Amortización
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
 #include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "Calendario.cpp"
#include "Cliente.cpp"
#include "ValidacionDatos.cpp"
using namespace std;

class TablaAmortizacion{
	
	private:
	string tipoPersona;	
	double monto;
	int plazo;
	double interes;
	Calendario objCalendario;
	Cliente objCliente;
	public:
	TablaAmortizacion();
	void generarTabla();
	TablaAmortizacion tomarDatos();
	int verificarDia(int d, int m, int a);
	string getTipoPersona();
	void setTipoPersona(string nTipoPersona);
	double getMonto();
	void setMonto(double nMonto);
	int getPlazo();
	void setPlazo(int nPlazo);
	double getInteres();
	void setInteres(double nInteres);
	string espaciar(int tamanio, int valor);
};