/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 7/11/2022
FECHA DE MODIFICACIÓN: 7/11/2022
Tarea6_2: Sobrecarga operador varias veces
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>

#if !defined(__Class_Diagram_1_KitHerramientas_h)
#define __Class_Diagram_1_KitHerramientas_h



#include "Perno.cpp"
#include "Tornillo.cpp"
#include "Tuerca.cpp"
 using namespace std;
class KitHerramientas
{
public:
   KitHerramientas();
   KitHerramientas(Perno objP,Tornillo objTor,Tuerca objTue);
   ~KitHerramientas();
   Perno getObjPerno(void);
   void setObjPerno(Perno newObjPerno);
   Tornillo getObjTornillo(void);
   void setObjTornillo(Tornillo newObjTornillo);
   Tuerca getObjTuerca(void);
   void setObjTuerca(Tuerca newObjTuerca);
   double getPrecioKit(void);
   void setPrecioKit(double newPrecioKit);
   KitHerramientas operator + (KitHerramientas &k1);
   KitHerramientas operator + (Perno &p1);
   KitHerramientas operator + (Tuerca &tuer);
   KitHerramientas operator + (Tornillo &torni);
protected:
private:
   Perno objPerno;
   Tornillo objTornillo;
   Tuerca objTuerca;
	double precioKIT;
};

#endif