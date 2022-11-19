/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 19/11/2022
FECHA DE MODIFICACIÓN: 19/11/2022
Proyecto Unidad 1-Rol de pagos
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/

#if !defined(__Class_Diagram_1_Empleado_h)
#define __Class_Diagram_1_Empleado_h

class Empleado
{
public:
   ~Empleado();
   Empleado();
   void setCedula(int newCedula);
   std::string getCargo(void);
   void setCargo(std::string newCargo);
   double getSueldo(void);
   void setSueldo(double newSueldo);
   int getHorasExtra(void);
   void setHorasExtra(int newHorasExtra);
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   std::string getApellido(void);
   void setApellido(std::string newApellido);
   int getCedula(void);

protected:
private:
   std::string nombre;
   std::string apellido;
   int cedula;
   std::string cargo;
   double sueldo;
   int horasExtra;


};

#endif