/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 1/11/2022
FECHA DE MODIFICACIÓN: 1/11/2022
Tarea4-Sobre Carga Operadores
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include"Kilometraje.cpp"

int main(int argc, char** argv){
	Kilometraje objK;
	objK.tomarMedida();
	objK.verMedidas();
	++objK;
	cout<<"\n despues de incrementar el kilometraje -> ";
	objK.verMedidas();
	
	--objK;
	cout<<"\n despues de disminuir el kilometraje -> ";
	objK.verMedidas();
	return 0;
}