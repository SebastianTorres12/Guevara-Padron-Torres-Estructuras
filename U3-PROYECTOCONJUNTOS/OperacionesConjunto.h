

/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres, Ariel Guevara
FECHA DE CREACIÓN: 19/02/2023
FECHA DE MODIFICACIÓN: 26/02/2023
Proyecto Unidad 3
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include "Conjunto.cpp"

class OperacionesConjunto{
	private:
		Conjunto<int> A;
		Conjunto<int> B;
	public:
		OperacionesConjunto(Conjunto<int> A,Conjunto<int> B);
		void unionConjuntos();
		void interseccion();
		void complemento();
		void diferencia();
		void diferenciaSimetrica();
};