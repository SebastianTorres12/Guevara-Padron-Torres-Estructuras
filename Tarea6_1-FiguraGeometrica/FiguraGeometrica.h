/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 7/11/2022
FECHA DE MODIFICACIÓN: 7/11/2022
Tarea6_1: Figura Geometrica sobrecarga funcion
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/

#if !defined(__Class_Diagram_1_FiguraGeometrica_h)
#define __Class_Diagram_1_FiguraGeometrica_h
 #include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include"ValidacionDatos.cpp"
using namespace std;
class FiguraGeometrica
{
public:
   FiguraGeometrica(string nNombre);
     FiguraGeometrica();
   string getNombre(void);
   void setNombre(string nNombre);
   double getArea(void);
   void setArea(double nArea);
   double calcularArea(float lado);
   double calcularArea(float base, float altura);
   double calcularArea(double lado1, double lado2, double senAngulo);
   double calcularArea(double baseMayor, double baseMenor, float altura);
   double calcularArea(double radio);
   double calcularArea(int numeroLados, double lado, double apotema);
   void calcularAreaFiguras(void);

protected:
private:
   string nombre;
   double area;


};

#endif