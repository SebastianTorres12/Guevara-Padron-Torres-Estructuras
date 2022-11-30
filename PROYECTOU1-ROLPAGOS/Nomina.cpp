/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 19/11/2022
FECHA DE MODIFICACIÓN: 29/11/2022
Proyecto Unidad 1-Rol de pagos
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include "Nomina.h"
#include <chrono>
#include <cmath>

/**
 * Genera la nómina de los empleados.
 * 
 * @param objL ListaSimple<T> objL
 */

template <typename T>
void Nomina<T>::generarRolPagos(ListaSimple<T> objL){
	
	CalculosRolPago<double> c;
	double sueldoD,hsupD,hexD,ingreD,ieesD,impRD,egreR,dCuartoD,dTerceroD,vacacionesD,aporteD,totalD;
	
	auto now = std::chrono::system_clock::now();
    std::time_t end_time = std::chrono::system_clock::to_time_t(now); 
    std::cout << "Fecha y hora de emision del rol de pago: \n" << std::ctime(&end_time) << std::endl;
 	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
 	cout<<"Nombre             Cargo	  Sueldo    Suplementarias     Extraordinarias	   Total Ingresos   |   AportePersonal-IEES   ImpuestoRenta   Total Egresos   Neto a Recibir\n";
 	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
 	NodoSimple *aux =objL.getPrimero();
	while(aux){
	sueldoD=aux->getObjEmpleado()->getSueldo();
	sueldoD=std::ceil(sueldoD * 100.0) / 100.0;
	hsupD=c.calcularHorasSup(aux->getObjEmpleado());
	hsupD=std::ceil(hsupD * 100.0) / 100.0;
	hexD=c.calcularHorasExtra(aux->getObjEmpleado());
	hexD=std::ceil(hexD * 100.0) / 100.0;
	ingreD=c.calcularIngresos(aux->getObjEmpleado());
	ingreD=std::ceil(ingreD * 100.0) / 100.0;
	ieesD=c.calcularIess(aux->getObjEmpleado());
	ieesD=std::ceil(ieesD * 100.0) / 100.0;	
	impRD=c.calcularImpRenta(aux->getObjEmpleado());
	impRD=std::ceil(impRD * 100.0) / 100.0;	
	egreR=c.calcularEgresos(aux->getObjEmpleado());
	egreR=std::ceil(egreR * 100.0) / 100.0;	
	string sueldo =to_string(sueldoD);
    string hsup=to_string(hsupD);
    string hex=to_string(hexD);
    string ingre=to_string(ingreD);
    string iees=to_string(ieesD);
    string impR=to_string(impRD);
    string egre=to_string(egreR);
    if(c.calcularHorasSup(aux->getObjEmpleado())==0){
    	cout<<aux->getObjEmpleado()->getNombre()<<" "<<aux->getObjEmpleado()->getApellido()<<c.espaciar(aux->getObjEmpleado()->getApellido().size(),12) <<aux->getObjEmpleado()->getCargo()<<c.espaciar(aux->getObjEmpleado()->getCargo().size(),16)<<aux->getObjEmpleado()->getSueldo()<<c.espaciar(sueldo.size(),20)<<hsupD<<c.espaciar(1,23)<<hexD<<c.espaciar(hex.size(),25)<<ingreD<<c.espaciar(ingre.size(),30)<<ieesD<<c.espaciar(iees.size(),23)<<impRD<<c.espaciar(impR.size(),20)<<egreR<<c.espaciar(egre.size(),20)<<ingreD-egreR; 
	    aux->getObjEmpleado()->setSueldoNeto(c.calcularIngresos(aux->getObjEmpleado()));
	}else{
		cout<<aux->getObjEmpleado()->getNombre()<<" "<<aux->getObjEmpleado()->getApellido()<<c.espaciar(aux->getObjEmpleado()->getApellido().size(),12) <<aux->getObjEmpleado()->getCargo()<<c.espaciar(aux->getObjEmpleado()->getCargo().size(),16)<<aux->getObjEmpleado()->getSueldo()<<c.espaciar(sueldo.size(),20)<<hsupD<<c.espaciar(hsup.size(),25)<<hexD<<c.espaciar(hex.size(),25)<<ingreD<<c.espaciar(ingre.size(),25)<<ieesD<<c.espaciar(iees.size(),23)<<impRD<<c.espaciar(impR.size(),20)<<egreR<<c.espaciar(egre.size(),20)<<ingreD-egreR; 
		aux->getObjEmpleado()->setSueldoNeto(c.calcularIngresos(aux->getObjEmpleado()));
	}
        	
  	printf("\n");
	aux=aux->getSiguiente();
	}
	system("pause");
	//BENEFICIOS SOCIALES
	system("cls");
	std::cout << "Fecha y hora de emision del rol de pago: \n" << std::ctime(&end_time) << std::endl;
	cout<<"BENEFICIOS SOCIALES"<<endl;
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------\n";
 	cout<<"Nombre             Cargo	  Sueldo    DECIMO TERCERO    DECIMO CUARTO    VACACIONES     APORTE PATRONAL    TOTAL IEES A PAGAR          \n";
 	cout<<"--------------------------------------------------------------------------------------------------------------------------------------\n";
 	NodoSimple *auxb =objL.getPrimero();
	while(auxb){
	sueldoD=auxb->getObjEmpleado()->getSueldo();
	sueldoD=std::ceil(sueldoD * 100.0) / 100.0;
	dTerceroD=c.calcularDecimoTercero(auxb->getObjEmpleado());
	dTerceroD=std::ceil(dTerceroD * 100.0) / 100.0;
	dCuartoD=c.calcularDecimoCuarto();
	dCuartoD=std::ceil(dCuartoD * 100.0) / 100.0;
	vacacionesD=c.calcularVacaciones(auxb->getObjEmpleado());
	vacacionesD=std::ceil(vacacionesD * 100.0) / 100.0;
	aporteD=c.calcularAportePatronal(auxb->getObjEmpleado());
	aporteD=std::ceil(aporteD * 100.0) / 100.0;
	totalD=c.calcularTotalIEES(auxb->getObjEmpleado());
	totalD=std::ceil(totalD * 100.0) / 100.0;
    //		
	string sueldo =to_string(sueldoD);
	string dTercero =to_string(dTerceroD);
	string dCuarto =to_string(dTerceroD);
    string vacaciones=to_string(vacacionesD);
    string aporteP=to_string(aporteD);
    string totalIees=to_string(totalD);
    
    cout<<auxb->getObjEmpleado()->getNombre()<<" "<<auxb->getObjEmpleado()->getApellido()<<c.espaciar(auxb->getObjEmpleado()->getApellido().size(),12) <<auxb->getObjEmpleado()->getCargo()<<c.espaciar(auxb->getObjEmpleado()->getCargo().size(),16)<<sueldoD<<c.espaciar(sueldo.size(),20)<<dTerceroD<<c.espaciar(dTercero.size(),20)<<dCuartoD<<c.espaciar(dCuarto.size(),23)<<vacacionesD<<c.espaciar(vacaciones.size(),20)<<aporteD<<c.espaciar(aporteP.size(),20)<<totalD;
	
        	
  	printf("\n");
	auxb=auxb->getSiguiente();
	}
	
 }

 /**
 * Genera la nómina de los empleados.
 * 
 * @param objL ListaDoble<T> objL
 */
 /*template <typename T>
 void Nomina<T>::generarRolPagos(ListaDoble<T> objL){
 		
	CalculosRolPago<double> c;
	auto now = std::chrono::system_clock::now();
    std::time_t end_time = std::chrono::system_clock::to_time_t(now); 
    std::cout << "Fecha y hora de emision del rol de pago: \n" << std::ctime(&end_time) << std::endl;
 	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
 	cout<<"Nombre             Cargo	  Sueldo    Suplementarias     Extraordinarias	   Total Ingresos   |   AportePersonal-IEES   ImpuestoRenta   Total Egresos   Neto a Recibir                 \n";
 	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
 	NodoDoble *aux =objL.getPrimero();
	while(aux){
	string sueldo =to_string(aux->getObjEmpleado()->getSueldo());
    string hsup=to_string(c.calcularHorasSup(aux->getObjEmpleado()));
    string hex=to_string(c.calcularHorasExtra(aux->getObjEmpleado()));
    string ingre=to_string(c.calcularIngresos(aux->getObjEmpleado()));
    string iees=to_string(c.calcularIess(aux->getObjEmpleado()));
    string impR=to_string(c.calcularImpRenta(aux->getObjEmpleado()));
    string egre=to_string(c.calcularEgresos(aux->getObjEmpleado()));
    if(c.calcularHorasSup(aux->getObjEmpleado())==0){
    	cout<<aux->getObjEmpleado()->getNombre()<<" "<<aux->getObjEmpleado()->getApellido()<<c.espaciar(aux->getObjEmpleado()->getApellido().size()+aux->getObjEmpleado()->getNombre().size(),19) <<aux->getObjEmpleado()->getCargo()<<c.espaciar(aux->getObjEmpleado()->getCargo().size(),16)<<aux->getObjEmpleado()->getSueldo()<<c.espaciar(sueldo.size(),20)<<c.calcularHorasSup(aux->getObjEmpleado())<<c.espaciar(1,23)<<c.calcularHorasExtra(aux->getObjEmpleado())<<c.espaciar(hex.size(),25)<<c.calcularIngresos(aux->getObjEmpleado())<<c.espaciar(ingre.size(),30)<<c.calcularIess(aux->getObjEmpleado())<<c.espaciar(iees.size(),23)<<c.calcularImpRenta(aux->getObjEmpleado())<<c.espaciar(impR.size(),20)<<c.calcularEgresos(aux->getObjEmpleado())<<c.espaciar(egre.size(),20)<<c.calcularIngresos(aux->getObjEmpleado())-c.calcularEgresos(aux->getObjEmpleado()); 
	}else{
		cout<<aux->getObjEmpleado()->getNombre()<<" "<<aux->getObjEmpleado()->getApellido()<<c.espaciar(aux->getObjEmpleado()->getApellido().size()+aux->getObjEmpleado()->getNombre().size(),19) <<aux->getObjEmpleado()->getCargo()<<c.espaciar(aux->getObjEmpleado()->getCargo().size(),16)<<aux->getObjEmpleado()->getSueldo()<<c.espaciar(sueldo.size(),20)<<c.calcularHorasSup(aux->getObjEmpleado())<<c.espaciar(hsup.size(),25)<<c.calcularHorasExtra(aux->getObjEmpleado())<<c.espaciar(hex.size(),25)<<c.calcularIngresos(aux->getObjEmpleado())<<c.espaciar(ingre.size(),25)<<c.calcularIess(aux->getObjEmpleado())<<c.espaciar(iees.size(),23)<<c.calcularImpRenta(aux->getObjEmpleado())<<c.espaciar(impR.size(),20)<<c.calcularEgresos(aux->getObjEmpleado())<<c.espaciar(egre.size(),20)<<c.calcularIngresos(aux->getObjEmpleado())-c.calcularEgresos(aux->getObjEmpleado()); 
	}
        	
  	printf("\n");
	aux=aux->getSiguiente();
	}
	system("pause");
	//BENEFICIOS SOCIALES
	system("cls");
	std::cout << "Fecha y hora de emision del rol de pago: \n" << std::ctime(&end_time) << std::endl;
	cout<<"BENEFICIOS SOCIALES"<<endl;
	cout<<"--------------------------------------------------------------------------------------------------------------------------------------\n";
 	cout<<"Nombre             Cargo	  Sueldo    DECIMO TERCERO    DECIMO CUARTO    VACACIONES     APORTE PATRONAL    TOTAL IEES A PAGAR          \n";
 	cout<<"--------------------------------------------------------------------------------------------------------------------------------------\n";
 	NodoDoble *auxb =objL.getPrimero();
	while(auxb){
	string sueldo =to_string(auxb->getObjEmpleado()->getSueldo());
	string dTercero =to_string(c.calcularDecimoTercero(auxb->getObjEmpleado()));
    string dCuaarto=to_string(c.calcularDecimoCuarto());
    string vacaciones=to_string(c.calcularVacaciones(auxb->getObjEmpleado()));
    string aporteP=to_string(c.calcularAportePatronal(auxb->getObjEmpleado()));
    string totalIees=to_string(c.calcularTotalIEES(auxb->getObjEmpleado()));
    
    cout<<auxb->getObjEmpleado()->getNombre()<<" "<<auxb->getObjEmpleado()->getApellido()<<c.espaciar(auxb->getObjEmpleado()->getApellido().size()+auxb->getObjEmpleado()->getNombre().size(),18) <<auxb->getObjEmpleado()->getCargo()<<c.espaciar(auxb->getObjEmpleado()->getCargo().size(),16)<<auxb->getObjEmpleado()->getSueldo()<<c.espaciar(sueldo.size(),20)<<c.calcularDecimoTercero(auxb->getObjEmpleado())<<c.espaciar(dTercero.size(),20)<<c.calcularDecimoCuarto()<<c.espaciar(dCuaarto.size(),23)<<c.calcularVacaciones(auxb->getObjEmpleado())<<c.espaciar(vacaciones.size(),20)<<c.calcularAportePatronal(auxb->getObjEmpleado())<<c.espaciar(aporteP.size(),20)<<c.calcularTotalIEES(auxb->getObjEmpleado());
	
        	
  	printf("\n");
	auxb=auxb->getSiguiente();
	}
 }
 */

 /**
 * Genera la nómina de los empleados.
 * 
 * @param objL ListaSimple<T> objL
 */
 /*
 template <typename T>
 void Nomina<T>::generarRolPagos(ListaDobleCircular<T> objL){
 	
 	CalculosRolPago<double> c;
 	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
 	cout<<"Nombre             Cargo	  Sueldo    Suplementarias     Extraordinarias	   Total Ingresos   |   AportePersonal-IEES   ImpuestoRenta   Total Egresos   Neto a Recibir\n";
 	cout<<"--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n";
 	NodoDoble *aux=objL.getCabeza();
	while(aux->getSiguiente()!=objL.getCabeza()){
	string sueldo =to_string(aux->getObjEmpleado()->getSueldo());
    string hsup=to_string(c.calcularHorasSup(aux->getObjEmpleado()));
    string hex=to_string(c.calcularHorasExtra(aux->getObjEmpleado()));
    string ingre=to_string(c.calcularIngresos(aux->getObjEmpleado()));
    string iees=to_string(c.calcularIess(aux->getObjEmpleado()));
    string impR=to_string(c.calcularImpRenta(aux->getObjEmpleado()));
    string egre=to_string(c.calcularEgresos(aux->getObjEmpleado()));
    if(c.calcularHorasSup(aux->getObjEmpleado())==0){
    	cout<<aux->getObjEmpleado()->getNombre()<<" "<<aux->getObjEmpleado()->getApellido()<<c.espaciar(aux->getObjEmpleado()->getApellido().size()+aux->getObjEmpleado()->getNombre().size(),19) <<aux->getObjEmpleado()->getCargo()<<c.espaciar(aux->getObjEmpleado()->getCargo().size(),16)<<aux->getObjEmpleado()->getSueldo()<<c.espaciar(sueldo.size(),20)<<c.calcularHorasSup(aux->getObjEmpleado())<<c.espaciar(1,23)<<c.calcularHorasExtra(aux->getObjEmpleado())<<c.espaciar(hex.size(),20)<<c.calcularIngresos(aux->getObjEmpleado())<<c.espaciar(ingre.size(),30)<<c.calcularIess(aux->getObjEmpleado())<<c.espaciar(iees.size(),23)<<c.calcularImpRenta(aux->getObjEmpleado())<<c.espaciar(impR.size(),20)<<c.calcularEgresos(aux->getObjEmpleado())<<c.espaciar(egre.size(),20)<<c.calcularIngresos(aux->getObjEmpleado())-c.calcularEgresos(aux->getObjEmpleado()); 
	}else{
		cout<<aux->getObjEmpleado()->getNombre()<<" "<<aux->getObjEmpleado()->getApellido()<<c.espaciar(aux->getObjEmpleado()->getApellido().size()+aux->getObjEmpleado()->getNombre().size(),19) <<aux->getObjEmpleado()->getCargo()<<c.espaciar(aux->getObjEmpleado()->getCargo().size(),16)<<aux->getObjEmpleado()->getSueldo()<<c.espaciar(sueldo.size(),20)<<c.calcularHorasSup(aux->getObjEmpleado())<<c.espaciar(hsup.size(),18)<<c.calcularHorasExtra(aux->getObjEmpleado())<<c.espaciar(hex.size(),20)<<c.calcularIngresos(aux->getObjEmpleado())<<c.espaciar(ingre.size(),25)<<c.calcularIess(aux->getObjEmpleado())<<c.espaciar(iees.size(),23)<<c.calcularImpRenta(aux->getObjEmpleado())<<c.espaciar(impR.size(),20)<<c.calcularEgresos(aux->getObjEmpleado())<<c.espaciar(egre.size(),20)<<c.calcularIngresos(aux->getObjEmpleado())-c.calcularEgresos(aux->getObjEmpleado()); 
	}
        	
  	printf("\n");
	aux=aux->getSiguiente();
	}
	string sueldo =to_string(aux->getObjEmpleado()->getSueldo());
    string hsup=to_string(c.calcularHorasSup(aux->getObjEmpleado()));
    string hex=to_string(c.calcularHorasExtra(aux->getObjEmpleado()));
    string ingre=to_string(c.calcularIngresos(aux->getObjEmpleado()));
    string iees=to_string(c.calcularIess(aux->getObjEmpleado()));
    string impR=to_string(c.calcularImpRenta(aux->getObjEmpleado()));
    string egre=to_string(c.calcularEgresos(aux->getObjEmpleado()));
	 if(c.calcularHorasSup(aux->getObjEmpleado())==0){
    	cout<<aux->getObjEmpleado()->getNombre()<<" "<<aux->getObjEmpleado()->getApellido()<<c.espaciar(aux->getObjEmpleado()->getApellido().size()+aux->getObjEmpleado()->getNombre().size(),19) <<aux->getObjEmpleado()->getCargo()<<c.espaciar(aux->getObjEmpleado()->getCargo().size(),16)<<aux->getObjEmpleado()->getSueldo()<<c.espaciar(sueldo.size(),20)<<c.calcularHorasSup(aux->getObjEmpleado())<<c.espaciar(1,23)<<c.calcularHorasExtra(aux->getObjEmpleado())<<c.espaciar(hex.size(),25)<<c.calcularIngresos(aux->getObjEmpleado())<<c.espaciar(ingre.size(),30)<<c.calcularIess(aux->getObjEmpleado())<<c.espaciar(iees.size(),23)<<c.calcularImpRenta(aux->getObjEmpleado())<<c.espaciar(impR.size(),20)<<c.calcularEgresos(aux->getObjEmpleado())<<c.espaciar(egre.size(),20)<<c.calcularIngresos(aux->getObjEmpleado())-c.calcularEgresos(aux->getObjEmpleado()); 
	}else{
		cout<<aux->getObjEmpleado()->getNombre()<<" "<<aux->getObjEmpleado()->getApellido()<<c.espaciar(aux->getObjEmpleado()->getApellido().size()+aux->getObjEmpleado()->getNombre().size(),19) <<aux->getObjEmpleado()->getCargo()<<c.espaciar(aux->getObjEmpleado()->getCargo().size(),16)<<aux->getObjEmpleado()->getSueldo()<<c.espaciar(sueldo.size(),20)<<c.calcularHorasSup(aux->getObjEmpleado())<<c.espaciar(hsup.size(),25)<<c.calcularHorasExtra(aux->getObjEmpleado())<<c.espaciar(hex.size(),25)<<c.calcularIngresos(aux->getObjEmpleado())<<c.espaciar(ingre.size(),25)<<c.calcularIess(aux->getObjEmpleado())<<c.espaciar(iees.size(),23)<<c.calcularImpRenta(aux->getObjEmpleado())<<c.espaciar(impR.size(),20)<<c.calcularEgresos(aux->getObjEmpleado())<<c.espaciar(egre.size(),20)<<c.calcularIngresos(aux->getObjEmpleado())-c.calcularEgresos(aux->getObjEmpleado()); 
	}
	printf("\n");
	system("pause");
	//BENEFICIOS SOCIALES
	system("cls");
	cout<<"BENEFICIOS SOCIALES"<<endl;
	cout<<"----------------------------------------------------------------------------------------------------------------------------------------------\n";
 	cout<<"Nombre             Cargo	  Sueldo    DECIMO TERCERO      DECIMO CUARTO      VACACIONES     APORTE PATRONAL    TOTAL IEES A PAGAR              \n";
 	cout<<"----------------------------------------------------------------------------------------------------------------------------------------------\n";
 	NodoDoble *auxb =objL.getCabeza();
	while(auxb->getSiguiente()!=objL.getCabeza()){
	string sueldo =to_string(auxb->getObjEmpleado()->getSueldo());
	string dTercero =to_string(c.calcularDecimoTercero(auxb->getObjEmpleado()));
    string dCuaarto=to_string(c.calcularDecimoCuarto());
    string vacaciones=to_string(c.calcularVacaciones(auxb->getObjEmpleado()));
    string aporteP=to_string(c.calcularAportePatronal(auxb->getObjEmpleado()));
    string totalIees=to_string(c.calcularTotalIEES(auxb->getObjEmpleado()));
    cout<<auxb->getObjEmpleado()->getNombre()<<" "<<auxb->getObjEmpleado()->getApellido()<<c.espaciar(auxb->getObjEmpleado()->getApellido().size()+auxb->getObjEmpleado()->getNombre().size(),18) <<auxb->getObjEmpleado()->getCargo()<<c.espaciar(auxb->getObjEmpleado()->getCargo().size(),16)<<auxb->getObjEmpleado()->getSueldo()<<c.espaciar(sueldo.size(),20)<<c.calcularDecimoTercero(auxb->getObjEmpleado())<<c.espaciar(2,14)<<c.calcularDecimoCuarto()<<c.espaciar(dCuaarto.size(),23)<<c.calcularVacaciones(auxb->getObjEmpleado())<<c.espaciar(vacaciones.size(),20)<<c.calcularAportePatronal(auxb->getObjEmpleado())<<c.espaciar(aporteP.size(),20)<<c.calcularTotalIEES(auxb->getObjEmpleado());
	  
        	
  	printf("\n");
	auxb=auxb->getSiguiente();
	}
	string sueldoA =to_string(auxb->getObjEmpleado()->getSueldo());
	string dTercero =to_string(c.calcularDecimoTercero(auxb->getObjEmpleado()));
    string dCuaarto=to_string(c.calcularDecimoCuarto());
    string vacaciones=to_string(c.calcularVacaciones(auxb->getObjEmpleado()));
    string aporteP=to_string(c.calcularAportePatronal(auxb->getObjEmpleado()));
    string totalIees=to_string(c.calcularTotalIEES(auxb->getObjEmpleado()));
	cout<<auxb->getObjEmpleado()->getNombre()<<" "<<auxb->getObjEmpleado()->getApellido()<<c.espaciar(auxb->getObjEmpleado()->getApellido().size()+auxb->getObjEmpleado()->getNombre().size(),18) <<auxb->getObjEmpleado()->getCargo()<<c.espaciar(auxb->getObjEmpleado()->getCargo().size(),16)<<auxb->getObjEmpleado()->getSueldo()<<c.espaciar(sueldoA.size(),20)<<c.calcularDecimoTercero(auxb->getObjEmpleado())<<c.espaciar(2,14)<<c.calcularDecimoCuarto()<<c.espaciar(dCuaarto.size(),23)<<c.calcularVacaciones(auxb->getObjEmpleado())<<c.espaciar(vacaciones.size(),20)<<c.calcularAportePatronal(auxb->getObjEmpleado())<<c.espaciar(aporteP.size(),20)<<c.calcularTotalIEES(auxb->getObjEmpleado());
	
	printf("\n");
	system("pause");
 }
 
 */
