/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 7/11/2022
FECHA DE MODIFICACIÓN: 8/11/2022
Tarea6_2: Sobrecarga operador varias veces
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
 #include "KitHerramientas.cpp"
 using namespace std;
int main(int argc, char** argv){
	//SobreCarga1
	//K1
	cout<<"APLICATIVO SOBRECARGA OPERADORES"<<endl;
	Perno objPerno(15.5,5);
	Tornillo objTornillo(10.5,10);
	Tuerca objTuerca(5.5,6);
	KitHerramientas objKit1(objPerno,objTornillo,objTuerca);
	//K2
	Perno objPerno2(15.5,5);
	Tornillo objTornillo2(10.5,10);
	Tuerca objTuerca2(5.5,6);
	KitHerramientas objKit2(objPerno2,objTornillo2,objTuerca2);
	
	//KitR
	KitHerramientas objKitResultado;
	objKitResultado = objKit1+objKit2;
	cout<<"\nPRECIO KIT RESULTADO-> "<<objKitResultado.getPrecioKit();
	//********************
	//SobreCarga2
	//PERNO1
	Perno objPK1(6,50);
	//KitPerno1
	KitHerramientas objKKP(objPK1,objTornillo,objTuerca);
	//Perno2
	Perno objPK2(6,20);
	//KitPernoUnidades
	KitHerramientas objKitPerno;
	objKitPerno=objKKP+objPK2;
	
	cout<<"\nSuma unidades de pernos de un kit y perno aparte-> "<<objKitPerno.getObjPerno().getUnidades();
	//********************
	//SobreCarga3
	//TuercaKit
	Tuerca objTT(36.69,5);
	//KitTuerca
	KitHerramientas objKTuerc(objPK1,objTornillo,objTT);
	//TuercaU
	Tuerca objTU(15.5,5);
	//KitPrecioTuerca
	KitHerramientas objKitPrecioTuer;
	objKitPrecioTuer=objKTuerc+objTU;
	cout<<"\nSuma precio tuerca de un kit y tuerca aparte-> "<<objKitPrecioTuer.getObjTuerca().getPrecio();
	//********************
	//SobreCarga4
	//TornilloKit
	Tornillo objTor(18.6,5);
	//KitTornillo
	KitHerramientas objKTor(objPK1,objTor,objTT);
	//TornilloUnitario
	Tornillo objTorU(5.56,5);
	//KitPrecioTuerca
	KitHerramientas objKitPrecioTor;
	objKitPrecioTor=objKTor+objTorU;
	cout<<"\nSuma precio tornillo de un kit y tornillo aparte-> "<<objKitPrecioTor.getObjTornillo().getPrecio();
	//********************
	return 0;
}