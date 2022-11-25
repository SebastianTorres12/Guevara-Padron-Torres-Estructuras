/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 24/11/2022
FECHA DE MODIFICACIÓN: 24/11/2022
Tarea12_MCMyMCD_Lista
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
 
 #include "Calculos.h"
 
 int Calculos::calcularMCD(int num1,int num2){
 	 	//CASO BASE	
 		if (num1 == 0)
		{
        return num2;
        }else if (num2 == 0){
        return num1;
        //Recursion
        }else{
        return calcularMCD(num2, num1%num2);
        }
 }
 
 int Calculos::calcularMCM(int num1,int num2){
 	return (num1*num2)/calcularMCD(num1,num2);
 	
 }
 
  /*const Calculos::std::function<int(int)>MCD=[&MCD](int num1,num2){
 	return (num1==0||num2==0)?MCD(num2,num1%num2):0;
 }*/
 /*
 const Calculos::std::function<int(int)>MCM=[&MCM](int num1,num2){
 	return (num1*num2)/MCD(num1,num2);
 }*/
 