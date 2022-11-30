/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 19/11/2022
FECHA DE MODIFICACIÓN: 29/11/2022
Proyecto Unidad 1-Rol de pagos
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
 #include "Empleado.cpp"
using namespace std;
template <typename T>
class CalculosRolPago{
	public:
		T calcularIess(Empleado *empleado);
  	 	T calcularHorasSup(Empleado *empleado);
   		T calcularHorasExtra(Empleado *empleado);
   		T calcularImpRenta(Empleado *empleado);
   		T calcularIngresos(Empleado *empleado);
   		T calcularEgresos(Empleado *empleado);
   		//CALCULO 
   		T calcularDecimoTercero(Empleado *empleado);
   		T calcularDecimoCuarto();
   		T calcularVacaciones(Empleado *empleado);
   		T calcularAportePatronal(Empleado *empleado);
   		T calcularTotalIEES(Empleado *empleado);
   		
   		string espaciar(int tamanio, int valor);
	    
};