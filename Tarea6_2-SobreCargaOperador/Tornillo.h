/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 7/11/2022
FECHA DE MODIFICACIÓN: 8/11/2022
Tarea6_2: Sobrecarga operador varias veces
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Tornillo_h)
#define __Class_Diagram_1_Tornillo_h



class Tornillo
{
public:
   Tornillo();
   Tornillo(double nPrecio,int unidad);
   ~Tornillo();
   double getPrecio(void);
   void setPrecio(double newPrecio);
   int getUnidades(void);
   void setUnidades(int newUnidades);



protected:
private:
   double precio;
   int unidades;


};

#endif