/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 7/11/2022
FECHA DE MODIFICACIÓN: 7/11/2022
Tarea6_1: Figura Geometrica sobrecarga funcion
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include"FiguraGeometrica.h"
# define MY_PI 3.14159265358979323846
FiguraGeometrica::FiguraGeometrica(string nNombre){
	this->nombre=nNombre;
	this->area=0;
}
FiguraGeometrica::FiguraGeometrica(){
	
}

string FiguraGeometrica::getNombre(void)
{
   return nombre;
}


void FiguraGeometrica::setNombre(string nNombre)
{
   this->nombre=nNombre;
}


double FiguraGeometrica::getArea(void)
{
   return area;
}


void FiguraGeometrica::setArea(double nArea)
{
   this->area=nArea;
}


double FiguraGeometrica::calcularArea(float lado)
{
   return lado*lado;
}


double FiguraGeometrica::calcularArea(float base, float altura)
{
   return base*altura;
}



double FiguraGeometrica::calcularArea(double lado1, double lado2, double senAngulo)
{
   return (lado1*lado2*sin(senAngulo))/2;
}



double FiguraGeometrica::calcularArea(double baseMayor, double baseMenor, float altura)
{
   return (altura*(baseMayor*baseMenor))/2;
}



double FiguraGeometrica::calcularArea(double radio)
{
 	return MY_PI*pow(radio,2);
}


double FiguraGeometrica::calcularArea(int numeroLados, double lado, double apotema)
{
   return ((lado*numeroLados)*apotema)/2;
}

void FiguraGeometrica::calcularAreaFiguras(void)
{
	ValidacionDatos objValidar;
	int op;
	char oP[10];
	do{
		system("cls");
		cout<<"BIENVENIDO AL CALCULO DEL AREA DE FIGURAS GEOMETRICAS"<<endl;
   		cout<<"Seleccione la figura a calcular el area: "<<endl;
   		cout<<"1.Cuadrado"<<endl;
   		cout<<"2.Rectangulo"<<endl;
   		cout<<"3.Triangulo"<<endl;
   		cout<<"4.Trapecio"<<endl;
   		cout<<"5.Circulo"<<endl;
   		cout<<"6.Poligono +5 lados"<<endl;
   		cout<<"7.Salir"<<endl;
   		op=objValidar.casteoEnteros(oP,"\nSeleccione el numero ->");
   			switch(op){
   				case 1:{
   				system("cls");
   				cout<<"Area Cuadrado"<<endl;
   				float ladoC;
   				double areaCuadrado=0;
   				char clado[20];
   				ladoC=objValidar.casteoReales(clado,"Ingrese el lado del cuadrado->");
   				areaCuadrado=calcularArea(ladoC);
   				cout<<"\nEl area del Cuadrado es: "<<areaCuadrado<<endl;
   				system("pause");
				break;
	  			}
	  			case 2:{
	  			system("cls");
   				cout<<"Area Rectangulo"<<endl;
   				float baseF,alturaF;
   				double areaRectangulo=0;
   				char baseC[20],alturaC[20];
   				baseF=objValidar.casteoReales(baseC,"Ingrese la base del rectangulo ->");
   				alturaF=objValidar.casteoReales(alturaC,"\nIngrese la altura del rectangulo ->");
   				areaRectangulo=calcularArea(baseF,alturaF);
   				cout<<"\nEl area del Rectangulo es: "<<areaRectangulo<<endl;
   				system("pause");
					break;
				  }
				case 3:{
				system("cls");
   				cout<<"Area Triangulo"<<endl;
   				double lado1F,lado2F,senAnguloF;
   				double areaTriangulo=0;
   				char lado1C[20],lado2C[20],senAnguloC[20];
   				lado1F=objValidar.casteoReales(lado1C,"Ingrese el lado 1 del triangulo ->");
   				lado2F=objValidar.casteoReales(lado2C,"\nIngrese el lado 2 del triangulo ->");
   				senAnguloF=objValidar.casteoReales(senAnguloC,"\nIngrese el angulo(RADIANES) entre los dos lados ingresados->");	
   				areaTriangulo=calcularArea(lado1F,lado2F,senAnguloF);
   				cout<<"\nEl area del Triangulo es: "<<areaTriangulo<<endl;
   				system("pause");
					break;
				}
				case 4:{
				system("cls");  
   				cout<<"Area Trapecio"<<endl;
   				float alturaFT;
   				double areaTrapecio; 
   				double baseMF,baseMenF;
   				char alturaCT[20],baseMC[20],baseMenC[20];
   				baseMF=objValidar.casteoReales(baseMC,"Ingrese la base mayor del trapecio ->");
   				baseMenF=objValidar.casteoReales(baseMenC,"\nIngrese la base menor del trapecio ->");
   				alturaFT=objValidar.casteoReales(alturaCT,"\nIngrese la altura del trapecio ->");
   				areaTrapecio=calcularArea(baseMF,baseMenF,alturaFT);
   				cout<<"\nEl area del Trapecio es: "<<areaTrapecio<<endl;
   				system("pause");
					break;
				}
				case 5:{
				system("cls");
   				cout<<"Area Circulo"<<endl;
   				double radioD;
   				double areaCirculo=0;
   				char radioC[20];
   				radioD=objValidar.casteoReales(radioC,"Ingrese el radio del circulo->");
   				areaCirculo=calcularArea(radioD);
   				cout<<"\nEl area del Circulo es: "<<areaCirculo<<endl;
   				system("pause");
					break;
				}
				case 6:{
				system("cls");
   				cout<<"Area Poligono +5 lados"<<endl;
   				double ladoD,apotemaD;
   				int numI;
   				double areaPoligono=0;
   				char ladoCD[20],apotemaC[20],numC[10];
   				numI=objValidar.casteoEnteros(numC,"Ingrese el numero de lados del poligono");
   				ladoD=objValidar.casteoReales(ladoCD,"\nIngrese el valor de uno de los lados del poligono->");
   				apotemaD=objValidar.casteoReales(apotemaC,"\nIngrese la apotema->");
   				areaPoligono=calcularArea(numI,ladoD,apotemaD);
   				cout<<"\nEl area del Poligono es: "<<areaPoligono<<endl;
   				system("pause");	
					break;
				}
   	
   	
   }
	}while(op!=7);
 
   
   
   
   
}