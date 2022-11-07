/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 4/11/2022
FECHA DE MODIFICACIÓN: 6/11/2022
Tarea5-Tabla de Amortización
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
 
 #include"TablaAmortizacion.h"
 TablaAmortizacion::TablaAmortizacion(){
	
 	this->monto=0;
 	this->plazo=0;
 	this->interes=0;
 }
 
 string TablaAmortizacion::getTipoPersona(){
 	return tipoPersona;
 }
 void TablaAmortizacion::setTipoPersona(string nTipoPersona){
 	this->tipoPersona=nTipoPersona;
 }
 
 double TablaAmortizacion::getMonto(){
 	return monto;
 }
 void TablaAmortizacion::setMonto(double nMonto){
 	this->monto=nMonto;
 }
 
 int TablaAmortizacion::getPlazo(){
 	return plazo;
 }
 void TablaAmortizacion::setPlazo(int nPlazo){
 	this->plazo=nPlazo;
 }
 double TablaAmortizacion::getInteres(){
 	return interes;
 }
 void TablaAmortizacion::setInteres(double nInteres){
 	this->interes=nInteres;
 }
 TablaAmortizacion TablaAmortizacion::tomarDatos(){
 	ValidacionDatos objValidar;
 	char monto[50],plazo[50],opTP[10];
 	double porcentajeInteres;
 	string tipoPersona;
 	int valorP,op;
 	double valorM;
 	do{
 		 cout<<"Seleccione el tipo de persona: "<<endl;
    cout<<"1.Juridica"<<endl;
	cout<<"2.Natural"<<endl;
	op=objValidar.casteoEnteros(opTP,"\nSeleccione la opcion-> ");
	 }while(op<1||op>2);
   	if(op==1){
	tipoPersona="Juridica";
	}else if(op==2){
	tipoPersona="Natural";	
	}
	if(op==1){
		do{
		cout<<"\nMonto permitido entre 1'000'000 - 5'000'000 "<<endl;
		valorM=objValidar.casteoReales(monto,"\nIngresar el monto: ");
		}while(valorM<1000000||valorM>5000000);
	    porcentajeInteres=0.0976;
	    
	}else if(op==2){
		do{
		cout<<"\nMonto permitido entre 100'000 - 1'000'000 "<<endl;
		valorM=objValidar.casteoReales(monto,"\nIngresar el monto: ");
		}while(valorM<100000||valorM>1000000);
		porcentajeInteres=0.1123;
		
	}
	do{
		cout<<"\nPlazo permitido entre 1 - 12 meses "<<endl;
		valorP=objValidar.casteoEnteros(plazo,"\nIngresar el plazo: ");
	}while(valorP<1||valorP>12);
	
	this->setTipoPersona(tipoPersona);
	this->setMonto(valorM);
	this->setPlazo(valorP);
	this->setInteres(porcentajeInteres);
	return *this;
 }
 
 void TablaAmortizacion::generarTabla(){
 cout<<"BIENVENIDO AL APLICATIVO TABLA AMORTIZACION"<<endl;
 cout<<"INGRESO DATOS CLIENTE"<<endl;
 objCliente.tomarDatos();
 system("cls");
 cout<<"\n		TABLA AMORTIZACION		\n"<<endl;
 objCliente.verDatos();
 this->tomarDatos();
 objCalendario.tomarFecha();
 objCalendario.verFecha();
 if(objCalendario.getMes()<12){
 	objCalendario.setMes(objCalendario.getMes() +1); 
 }else  {
 	objCalendario.setMes(1); 
 }
 
  int dia=objCalendario.getDia();
 system("cls");
 objCliente.verDatos();
 cout<<"\nTipo persona: "<<tipoPersona<<endl;
 cout<<"Monto: "<<monto<<endl;
 cout<<"Plazo: "<<plazo<<" meses"<<endl;
 cout<<"-------------------------------------------------------------------------------\n";
 cout<<"FECHA		CAPITAL		INTERES		CUOTA		SALDO		                   \n";
 cout<<"-------------------------------------------------------------------------------\n";
 double interes,cuota,saldoCero=0;
 double capital=monto/plazo;
 for(int i=1;i<=plazo;i++){
 	
 	if((verificarDia(objCalendario.getDia(),objCalendario.getMes(),objCalendario.getAno()))==0){	 
			//cout<<"\nZeller: "<<Zeller(objCalendario.getDia(),objCalendario.getMes(),objCalendario.getAno())<<endl;	 
			 --objCalendario;
			 objCalendario.verFecha();	
			 objCalendario.setDia(dia); 
		}
		else if((verificarDia(objCalendario.getDia(),objCalendario.getMes(),objCalendario.getAno()))==6){
			 //cout<<"\nZeller: "<<Zeller(objCalendario.getDia(),objCalendario.getMes(),objCalendario.getAno())<<endl;
			 --objCalendario;
	 		 --objCalendario;
	 		 objCalendario.verFecha();	
	 		 objCalendario.setDia(dia); 
		}
		else if((verificarDia(objCalendario.getDia(),objCalendario.getMes(),objCalendario.getAno()))==1){
			objCalendario.verFecha();	
		}
		else if((verificarDia(objCalendario.getDia(),objCalendario.getMes(),objCalendario.getAno()))==2){
			objCalendario.verFecha();	
		}	 
		else if((verificarDia(objCalendario.getDia(),objCalendario.getMes(),objCalendario.getAno()))==3){
			objCalendario.verFecha();	
		}	 
		else if((verificarDia(objCalendario.getDia(),objCalendario.getMes(),objCalendario.getAno()))==4){
			objCalendario.verFecha();	
		}	 	
		else if((verificarDia(objCalendario.getDia(),objCalendario.getMes(),objCalendario.getAno()))==5){
			objCalendario.verFecha();	
		}
		  		
		interes=(monto*getInteres())/12;	
		cuota=capital+interes;
		monto=monto-cuota;
		if(i<plazo){
		cout<<espaciar(2,10)<<capital<<espaciar(2,10)<<interes<<espaciar(2,10)<<cuota<<espaciar(2,10)<<monto<<endl;		
		}
		
		if(i==plazo){
		
			cout<<espaciar(2,10)<<capital<<espaciar(2,10)<<interes<<espaciar(2,10)<<cuota<<espaciar(2,10)<<saldoCero<<endl;
		}
		++objCalendario;
		
		
		
}
 	
 
 }
 
 /*
------------	FERIADOS NACIONALES -----------
		   dd mm  
año nuevo: 01 01 
carnaval: 28 02 y 01 03
viernes santo: 15 04
dia del trabajo: 01 05
batalla Pichincha: 24 05
1 er grito de Independencia: 10 08
Independencia de Guayaquil: 09 10
Dia de difuntos: 02 11
Independencia de Cuenca: 03 11
Navidad: 25 12

------------	FERIADOS LOCALES -----------
Fundacion de Quito: 06 12
*/
 
int TablaAmortizacion::verificarDia(int d, int m, int a){
 	int regular[]={0,3,3,6,1,4,6,2,5,0,3,5};
	int bisiesto[]={0,3,4,0,2,5,0,3,6,1,4,6};
	int r1,r2,r3,r4,r5,f;
	f=m;

	if((a%4==0) && !(a%100==0))
	{
	    f=bisiesto[f-1];
	}
	else if (a%400==0)
	{
	    f=bisiesto[f-1];
	}
	else
	{
	    f=regular[f-1];
	}
	
	if((d==1 && m==1) ||  (d==1 && m==3 && a==2022) || (d==21 && m==2 && a==2023) || (d==13 && m==2 && a==2024) || (d==1 && m==5) || (d==24 && m==5) || (d==10 && m==8) || (d==9 && m==10) || (d==3 && m==11) || (d==6 && m==12) || (d==25 && m==12)){
		r1=(a-1)%7;
		r2=(a-1)/4;
		r3=(3*(((a-1)/100)+1))/4;
		r4=(r2-r3)%7;
		r5=d%7;
		d=(r1+r4+f+r5)%7;
		if(d==1 || d==2 || d==3 || d==4){
			d=0;
			return d;
		}
		
	}else{
		r1=(a-1)%7;
		r2=(a-1)/4;
		r3=(3*(((a-1)/100)+1))/4;
		r4=(r2-r3)%7;
		r5=d%7;
		d=(r1+r4+f+r5)%7;
		return d;	
	}
	
 }
 
 string TablaAmortizacion::espaciar(int tamanio,int valor){
 	int espacio = 0;
 	string texto = "";
 	espacio = valor - tamanio;
 	for(int i=0; i<espacio;i++){
 		texto=texto+" ";
	 }
 	return texto;
 }