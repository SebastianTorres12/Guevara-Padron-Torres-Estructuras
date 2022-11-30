
/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 19/11/2022
FECHA DE MODIFICACIÓN: 29/11/2022
Proyecto Unidad 1-Rol de pagos
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
 #include "CalculosRolPago.h"
 //PORCENTAJE ESTABLECIDO POR EL IEES APORTE PERSONAL
 # define PorcentajeIEES 0.0945
 # define PorcentajeHorasSup 1.5
 # define PorcentajeHorasEx 2
  //VALORES FRACCION BASICA ESTABLECIDOS POR LA LEY ORGANICA PARA EL IMPUESTO A LA RENTA 
 # define PrimeraFB 11310.01
 # define SegundaFB 14410.01
 # define TerceraFB 18010.01
 # define CuartaFB  21630.01
 # define QuintaFB  31630.01
 # define SextaFB   41630.01
 # define SeptimaFB 51630.01
 # define OctavaFB  61630.01
 # define NovenaFB  100000.01
  //VALORES EXCESO ESTABLECIDOS POR LA LEY ORGANICA PARA EL IMPUESTO A LA RENTA 
 # define PrimeraEX  14410.00
 # define SegundaEX 18010.00
 # define TerceraEX 21630.00
 # define CuartaEX 31630.00
 # define QuintaEX 41630.00
 # define SextaEX   51630.00
 # define SeptimaEX 61630.00
 # define OctavaEX  100000.00
 //IMPUESTO FRACCION BASICA ESTABLECIDOS POR LA LEY ORGANICA PARA EL IMPUESTO A LA RENTA 
 # define PrimeraImpFB  155
 # define SegundaImpFB 515
 # define TerceraImpFB 949
 # define CuartaImpFB 2449
 # define QuintaImpFB 4449
 # define SextaImpFB  6949
 # define SeptimaImpFB 9949
 # define OctavaImpFB  23379
 
 //PORCENTAJES ESTABLECIDOS POR LA LEY ORGANICA PARA EL IMPUESTO A LA RENTA 
 # define PorcentajePrimeraFB 0.05
 # define PorcentajeSegundaFB 0.1
 # define PorcentajeTerceraFB 0.12
 # define PorcentajeCuartaFB 0.15
 # define PorcentajeQuintaFB 0.20
 # define PorcentajeSextaFB 0.25
 # define PorcentajeSeptimaFB 0.30
 # define PorcentajeOctavaFB 0.35
 # define PorcentajeNovenaFB 0.37
 
 //BENEFICIOS SOCIALES
 #define SueldoBasico 425  
 #define PorcentajeAportePatronal 0.1215     
 template <typename T>
T CalculosRolPago<T>::calcularHorasSup(Empleado *empleado){
	return (((empleado->getSueldo()/240)*PorcentajeHorasSup)*empleado->getHorasExtra());
}
template <typename T>
T CalculosRolPago<T>::calcularHorasExtra(Empleado *empleado){
	return (((empleado->getSueldo()/240)*PorcentajeHorasEx)*empleado->getHorasExtra());
}
template <typename T>
T CalculosRolPago<T>::calcularIngresos(Empleado *empleado){
	return (empleado->getSueldo()+calcularHorasExtra(empleado)+calcularHorasSup(empleado));
}
template <typename T>
T CalculosRolPago<T>::calcularIess(Empleado *empleado){
	return calcularIngresos(empleado)*PorcentajeIEES; 
}
template <typename T>
T CalculosRolPago<T>::calcularImpRenta(Empleado *empleado){
	T totalIngreAnual=calcularIngresos(empleado)*12;
	T FB,porcentaje,TotalIyFB,aplicoPor;
	if(totalIngreAnual<PrimeraFB){
		
		return 0;
	}else if(totalIngreAnual<PrimeraEX){
		
		TotalIyFB=totalIngreAnual-PrimeraFB;
		aplicoPor=TotalIyFB*PorcentajePrimeraFB;
		return aplicoPor/12;
	}else if(totalIngreAnual<SegundaEX){
		
		TotalIyFB=totalIngreAnual-SegundaFB;
		aplicoPor=TotalIyFB*PorcentajeSegundaFB;
		return (aplicoPor+PrimeraImpFB)/12;
	}else if(totalIngreAnual<TerceraEX){
		
		TotalIyFB=totalIngreAnual-TerceraFB;
		aplicoPor=TotalIyFB*PorcentajeTerceraFB;
		return (aplicoPor+SegundaImpFB)/12;
	}else if(totalIngreAnual<CuartaEX){
	
		TotalIyFB=totalIngreAnual-CuartaFB;
		aplicoPor=TotalIyFB*PorcentajeCuartaFB;
		return (aplicoPor+TerceraImpFB)/12;
	}else if(totalIngreAnual<QuintaEX){
		
		TotalIyFB=totalIngreAnual-QuintaFB;
		aplicoPor=TotalIyFB*PorcentajeQuintaFB;
		return (aplicoPor+CuartaImpFB)/12;
	}else if(totalIngreAnual<SextaEX){
		
		TotalIyFB=totalIngreAnual-SextaFB;
		aplicoPor=TotalIyFB*PorcentajeSextaFB;
	    
		return (aplicoPor+QuintaImpFB)/12;
	}else if(totalIngreAnual<SeptimaEX){
		
		TotalIyFB=totalIngreAnual-SeptimaFB;
		aplicoPor=TotalIyFB*PorcentajeSeptimaFB;
		return (aplicoPor+SextaImpFB)/12;
	}else if(totalIngreAnual<OctavaEX){
		
		TotalIyFB=totalIngreAnual-OctavaFB;
		aplicoPor=TotalIyFB*PorcentajeOctavaFB;
		return (aplicoPor+SeptimaImpFB)/12;	
	}else if(totalIngreAnual>OctavaEX){
	
		TotalIyFB=totalIngreAnual-NovenaFB;
		aplicoPor=TotalIyFB*PorcentajeNovenaFB;
		return (aplicoPor+OctavaImpFB)/12;	
	}
	return 0;
   
}
template <typename T>
T CalculosRolPago<T>::calcularEgresos(Empleado *empleado){
	return calcularIess(empleado)+calcularImpRenta(empleado);
}

//BENEFICIOS SOCIALES
template <typename T>
T CalculosRolPago<T>::calcularDecimoTercero(Empleado *empleado){
	return calcularIngresos(empleado)/12;
}
template <typename T>
T CalculosRolPago<T>::calcularDecimoCuarto(){
	return SueldoBasico/12;
}
template <typename T>
T CalculosRolPago<T>::calcularVacaciones(Empleado *empleado){
	return calcularIngresos(empleado)/24;
}
template <typename T>
T CalculosRolPago<T>::calcularAportePatronal(Empleado *empleado){
	return  calcularIngresos(empleado)*PorcentajeAportePatronal;
}
template <typename T>
T CalculosRolPago<T>::calcularTotalIEES(Empleado *empleado){
	return calcularIess(empleado)+calcularAportePatronal(empleado);
}
template <typename T>
string CalculosRolPago<T>::espaciar(int tamanio, int valor){
	int espacio = 0;
 	string texto = "";
 	espacio = valor - tamanio;
 	for(int i=0; i<espacio;i++){
 		texto=texto+" ";
	 }
 	return texto;
}
 
 
 
 
 