#include "Grafico.h"
//Colores conjuntos
#define colorA LIGHTBLUE
#define colorB MAGENTA
#define colorC GREEN
//Coordenadas iniciales para dibujar los cuadros para los conjuntos si se quiere aumentar grosor o largo se modifica en la funcion 
#define xAGrafico 70
#define yAGrafico 100
#define xBGrafico 550
#define yBGrafico 100
#define xCGrafico 150
#define yCGrafico 290
//Coordenas para empezar a dibujar el texto de los numeros del conjunto
#define xADatos 90
#define yADatos 120
#define xBDatos 570
#define yBDatos 120
#define xCDatos 160
#define yCDatos 300

void Grafico::dibujarConjunto(Conjunto<int> C,int opc){
	char vecS[10];
   switch(opc){
	   	
		case 1:{
	   	   settextstyle(1,HORIZ_DIR,1);
			  // Establecer el color de fondo para el rectángulo y los números
		   setbkcolor(colorA);
		   // Dibujar el rectángulo
		   setfillstyle(SOLID_FILL, colorA);
		   bar(xAGrafico, yAGrafico, xAGrafico+270, yAGrafico+100);
			int datos=C.getNumNodos();
			datos=datos/2;
			int x=xADatos;
			int y=yADatos;
			int contador=0;
			NodoDoble *aux = C.getPrimero();
			while(aux){
				if(contador==datos){
					x=xADatos;
					y+=50;
				}
				sprintf(vecS, "%d", aux->getValor());
				outtextxy(x, y,vecS);
				x+=50;
				delay(250);
				
				aux=aux->getSiguiente();	
				contador++;
			}
			setbkcolor(BLACK);
			break;
		   }
		case 2:{
			settextstyle(1,HORIZ_DIR,1);
			// Establecer el color de fondo para el rectángulo y los números
		   setbkcolor(colorB);
		   // Dibujar el rectángulo
		   setfillstyle(SOLID_FILL, colorB);
		   bar(xBGrafico, yBGrafico, xBGrafico+270, yBGrafico+100);
			int datos=C.getNumNodos();
			datos=datos/2;
			int x=xBDatos;
			int y=yBDatos;
			int contador=0;
			NodoDoble *aux = C.getPrimero();
			while(aux){
				if(contador==datos){
					x=xBDatos;
					y+=50;
				}
				sprintf(vecS, "%d", aux->getValor());
				outtextxy(x, y,vecS);
				x+=50;
				delay(250);
				
				aux=aux->getSiguiente();	
				contador++;
			}
			setbkcolor(BLACK);
			break;
		}
   		case 3:{
   			settextstyle(1,HORIZ_DIR,1);
   			// Establecer el color de fondo para el rectángulo y los números
		   setbkcolor(colorC);
		   // Dibujar el rectángulo
		   setfillstyle(SOLID_FILL, colorC);
		  bar(xCGrafico, yCGrafico, xCGrafico+530, yCGrafico+100);
			int datos=C.getNumNodos();
			datos=datos/2;
			int x=xCDatos;
			int y=yCDatos;
			int contador=0;
			NodoDoble *aux = C.getPrimero();
			while(aux){
				if(contador==datos){
					x=xCDatos;
					y+=50;
				}
				sprintf(vecS, "%d", aux->getValor());
				outtextxy(x, y,vecS);
				x+=50;
				delay(250);
				
				aux=aux->getSiguiente();	
				contador++;
			}
			setbkcolor(BLACK);
			break;
		   }
		   
		
   }
   
}

void Grafico::dibujarNotacion(int numDatos){
		
	for (double x = 0; x <=numDatos; x += 0.05) {
		//Eje X
		line(900,550,1250,550);
		//Eje Y
		line(920,570,920,120);
		
		settextstyle(1,HORIZ_DIR,3);
		outtextxy(990, 50,"Big O(n^2)");
		
		settextstyle(1,HORIZ_DIR,1);
		outtextxy(970,570,"Numero de datos");
		settextstyle(1,VERT_DIR,1);
		outtextxy(880,520,"Numero de operaciones");
	    double y = x * x;
	    int x_screen = (int)(x * 10 + 920);
	    int y_screen = (int)(-y * 5 + 550);
	    circle(x_screen, y_screen, 2);

	}
	

	
	
}


