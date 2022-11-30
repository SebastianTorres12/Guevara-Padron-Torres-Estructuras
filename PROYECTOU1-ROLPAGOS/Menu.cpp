/***********************************************************************
UFA - ESPE
AUTORES: Matías Padrón,Sebastian Torres
FECHA DE CREACIÓN: 19/11/2022
FECHA DE MODIFICACIÓN: 29/11/2022
Proyecto Unidad 1-Rol de pagos
GITHUB: Padron-Torres-Primer-Parcial-Estructuras
 ***********************************************************************/

#include "Menu.h"
#define Tecla_Arriba 72
#define Tecla_Abajo 80
#define Enter 13
using namespace std;

void Menu::menuPrincipal(){
	int cedula,horas,opcMP=0, opcM2=0, opcMNS=0,opRNS=0,opcMND,opcMNC,opH,tamNombre,tamApellido,tamCargo;
	bool repetir=true,repetir2=true,repetirRNS=true,repetirRND=true,repetirRNC=true,repetirNS=true,repetirND=true,repetirNC=true,vNombre=true,vApellido=true,vCargo=true;
	Archivo objArchivo;
    Nomina<Empleado> objN;
    ListaSimple<Empleado> listaS;
    ListaDoble<Empleado> listaD;
    ListaDobleCircular<Empleado> listaC;
    ValidacionDatos objValidar;
    char nombreC[30],apellidoC[30],cedulaC[30],cargoC[30],sueldoC[30],horasC[30];
    string nombre,apellido,cargo;
    double sueldo;
    
    //Empleado empleado[100];
	const char *titulo="BIENVENIDO AL APLICATIVO ROL DE PAGO";
    const char *opciones[]={"Registrar nomina empleados","Generar rol de pago","Buscar empleado en Nomina","Cerrar aplicativo"};
    const char *titulo2="REGISTRO";
    const char *opciones2[]={"Realizar registro en Nomina Simple","Realizar registro en Nomina Doble","Realizar registro en Nomina Circular","Retornar al menu principal"};
    const char *tituloNS="REGISTRO NOMINA SIMPLE";
    const char *opcionesNS[]={"Agregar empleado","Eliminar por cabeza","Eliminar por cola","Mostrar empleados","Retornar"};
	const char *opcionesRNS[]={"Actualizar Registro","Registrar manualmente","Registrar por archivo de texto plano","Retornar"};
	const char *tituloH="El empleado realizo horas extra durante su jornada laboral?";
	const char *opcionesH[]={"SI.","NO"};
	const char *tituloND="REGISTRO NOMINA DOBLE";
	const char *opcionesND[]={"Agregar empleado","Eliminar por cabeza","Eliminar por cola","Eliminar posicion","Mostrar empleados","Retornar"};
    const char *tituloNC="REGISTRO NOMINA CIRCULAR";
    const char *opcionesNC[]={"Agregar empleado","Eliminar por cabeza","Eliminar por cola","Eliminar posicion","Mostrar empleados","Retornar"};
    
	
	do{
    	opcMP = menu(titulo,opciones,4);
    	switch(opcMP){
    		case 1:{
    			do{
    				opcM2=menu(titulo2,opciones2,4);
					switch(opcM2){
    					case 1:{
    						do{
    							opRNS=menu(tituloNS,opcionesRNS,4);
    							
    							switch(opRNS){
    								case 1:{
    									cout<<"\nACTUALIZAR REGISTRO"<<endl;
    									//vaciarLista(listaS);
    								
    									if(listaS.getNumNodos()!=0){
    									for(int i=1;i<=listaS.getNumNodos();i++){
    										listaS.eliminarPorCola();
										}
										}								
										objArchivo.lecturaArchivo(listaS);
										cout<<"\nREGISRTO ACTUALIZADO (LISTA)"<<endl;
										system("pause");
										break;
										}
    									
									
    								case 2:{
    									do{
											system("cls");
    										opcMNS=menu(tituloNS,opcionesNS,5);
    					    				switch(opcMNS){	
												case 1:{
												do{
    					    						nombre=objValidar.lecturaTexto("\nDigite el nombre del empleado: ");
    					    						tamNombre=nombre.size();
    					    						if(tamNombre==0){
    					    							 vNombre=true;
    					    							 cout<<"Error: no se puede ingresar un nombre vacio, ingrese nuevamente"<<endl;
													}else{
														vNombre=false;
													}
													}while(vNombre);
													vNombre=true;
													
    					    		                do{
    					    		                apellido=objValidar.lecturaTexto("\nDigite el apellido del empleado: ");	
    					    		                tamApellido=apellido.size();
    					    		                if(tamApellido==0){
    					    							 vApellido=true;
    					    							 cout<<"Error: no se puede ingresar un apellido vacio, ingrese nuevamente"<<endl;
													}else{
														vApellido=false;
													}
													}while(vApellido);
													vApellido=true;
											        cedula=validarCedula(cedulaC);
											        do{
											        cargo=objValidar.lecturaTexto("\nDigite el cargo del empleado: ");	
											        tamCargo=cargo.size();
											        if(tamCargo==0){
    					    							 vCargo=true;
    					    							 cout<<"Error: no se puede ingresar un cargo vacio, ingrese nuevamente"<<endl;
													}else{
														vCargo=false;
													}
													}while(vCargo);
													vCargo=true;
    					    		                do{
    					    		                sueldo=objValidar.casteoReales(sueldoC,"\nDigite el sueldo del empleado: ");
													}while(sueldo<425);
    					    		               
    					    		                	opH=menu(tituloH,opcionesH,2);
    					    		                	switch(opH){
    					    		                		case 1:{
    					    		                			do{
    					    		                			horas=objValidar.casteoEnteros(horasC,"\nDigite las horas extras: ");	
																}while(horas<=0);		
																break;
															}
															case 2:{
															    horas=0;		
																break;
															}	
														}
													Empleado *empleado=new Empleado(nombre,apellido,cedula,cargo,sueldo,horas);	
    					    		                listaS.insertarPorCola(empleado);	
    					    		                objArchivo.escribirArchivoTxt(empleado); 
													break;
												}
												case 2:{
											 		system("cls");
											 		listaS.eliminarPorCabeza();
											 		if(objArchivo.contarLineasTxt()==1){
											 			break;
													 }else{
													 	objArchivo.eliminarLineaTXT(2);
													 }
											    	
											 		system("pause");
											 		
													break;
												}
												case 3:{
													system("cls");
											 		listaS.eliminarPorCola();
											 			if(objArchivo.contarLineasTxt()==1){
											 			break;
													 }else{
											 		objArchivo.eliminarLineaTXT(objArchivo.contarLineasTxt());
											 	}
											 		system("pause");
													break;
												}
												case 4:{
													system("cls");
													cout<<"\n\tNOMINA EMPRESA"<<endl;
										            listaS.mostrarPorCabeza();
										            cout<<"\n";
										            cout<<"NUMERO EMPLEADOS ACTUALES  "<<listaS.getNumNodos()<<endl;
										            system("pause");
													break;
												}
												case 5:{
												repetirNS=false;
											
													break;
												}
										    	}										
											}while(repetirNS);
											repetirNS=true;
											break;
										}
									case 3:{
										system("cls");
										if(listaS.getNumNodos()!=0){
    									for(int i=1;i<=listaS.getNumNodos();i++){
    										listaS.eliminarPorCola();
										}
										}
										cout<<"INGRESANDO POR TXT"<<endl;
										objArchivo.lecturaArchivo(listaS); 
										system("pause");
										break;
									}case 4:{
										repetirRNS=false;
										break;
									}
								}
							  
							}while(repetirRNS);
							repetirRNS=true;	
							break;
					}
				
						case 2:{
							system("cls");
								
								do{
    							opRNS=menu(tituloND,opcionesRNS,4);
    							switch(opRNS){
    								case 1:{
    									cout<<"\nACTUALIZAR REGISTRO"<<endl;
    										
    									if(listaD.getNumNodos()!=0){
    									for(int i=1;i<=listaD.getNumNodos();i++){
    										listaD.eliminarPorCola();
										}
										
										}
    									objArchivo.lecturaArchivo(listaD);
										cout<<"\nREGISRTO ACTUALIZADO (LISTA)"<<endl;
										system("pause");
										break;
									}
    								case 2:{
    									do{
    										system("cls");
    										opcMND=menu(tituloND,opcionesND,6);
    					    				switch(opcMND){
												case 1:{
												
													do{
    					    						nombre=objValidar.lecturaTexto("\nDigite el nombre del empleado: ");
    					    						tamNombre=nombre.size();
    					    						if(tamNombre==0){
    					    							 vNombre=true;
    					    							 cout<<"Error: no se puede ingresar un nombre vacio, ingrese nuevamente"<<endl;
													}else{
														vNombre=false;
													}
													}while(vNombre);
													vNombre=true;
													
    					    		                do{
    					    		                apellido=objValidar.lecturaTexto("\nDigite el apellido del empleado: ");	
    					    		                tamApellido=apellido.size();
    					    		                if(tamApellido==0){
    					    							 vApellido=true;
    					    							 cout<<"Error: no se puede ingresar un apellido vacio, ingrese nuevamente"<<endl;
													}else{
														vApellido=false;
													}
													}while(vApellido);
													vApellido=true;
											        cedula=validarCedula(cedulaC);
											        do{
											        cargo=objValidar.lecturaTexto("\nDigite el cargo del empleado: ");	
											        tamCargo=cargo.size();
											        if(tamCargo==0){
    					    							 vCargo=true;
    					    							 cout<<"Error: no se puede ingresar un cargo vacio, ingrese nuevamente"<<endl;
													}else{
														vCargo=false;
													}
													}while(vCargo);
													vCargo=true;
    					    		                do{
    					    		                sueldo=objValidar.casteoReales(sueldoC,"\nDigite el sueldo del empleado: ");
													}while(sueldo<425);
    					    		               
    					    		                	opH=menu(tituloH,opcionesH,2);
    					    		                	switch(opH){
    					    		                		case 1:{
    					    		                			do{
    					    		                			horas=objValidar.casteoEnteros(horasC,"\nDigite las horas extras: ");	
																}while(horas<=0);		
																break;
															}
															case 2:{
															    horas=0;		
																break;
															}	
														}
													Empleado *empleado=new Empleado(nombre,apellido,cedula,cargo,sueldo,horas);	
    					    		                listaD.insertarPorCola(empleado);	
    					    		                objArchivo.escribirArchivoTxt(empleado);
													break;
												}
												case 2:{
											 		system("cls");
											 		
											 		listaD.eliminarPorCabeza();
													if(objArchivo.contarLineasTxt()==1){
											 			break;
													 }else{								 		
											 		objArchivo.eliminarLineaTXT(2); 
											     	}
											 		system("pause");
											 		
													break;
												}
												case 3:{
													system("cls");
											 		listaD.eliminarPorCola();
											 		if(objArchivo.contarLineasTxt()==1){
											 			break;
													 }else{
											 		objArchivo.eliminarLineaTXT(objArchivo.contarLineasTxt());
											 	    }
											 		system("pause");
													break;
												}
												case 4:{
													system("cls");
													listaD.mostrarPorCabeza();
													cout<<"\n";
													cout<<"NUMERO EMPLEADOS ACTUALES  "<<listaD.getNumNodos()<<endl;
													cout<<"\n";
													char posC[10];
													int pos;
													pos=objValidar.casteoEnteros(posC,"\nIngrese N del nodo que desea eliminar: ");
													listaD.eliminarEntre(pos);
													if(objArchivo.contarLineasTxt()==1||pos==0){
											 			break;
													 }else{
													objArchivo.eliminarLineaTXT(pos+1);
													}
													system("pause");
													break;
												}
												case 5:{
													system("cls");
													cout<<"\n\tNOMINA EMPRESA"<<endl;
										            listaD.mostrarPorCabeza();
										            cout<<"\n";
										            cout<<"NUMERO EMPLEADOS ACTUALES  "<<listaD.getNumNodos()<<endl;
										            system("pause");
													break;
												}
												case 6:{
												repetirND=false;
											
													break;
												}
										    	}										
											}while(repetirND);
											repetirND=true;
											break;
										}
									case 3:{
										system("cls");
										if(listaD.getNumNodos()!=0){
    									for(int i=1;i<=listaD.getNumNodos();i++){
    										listaD.eliminarPorCola();
										}
										
										}
										cout<<"INGRESANDO POR TXT"<<endl;
										objArchivo.lecturaArchivo(listaD); 
										system("pause");
										break;
									}case 4:{
										repetirRND=false;
									
										break;
									}
								}
							  	
							}while(repetirRND);	
							repetirRND=true;
							break;
						}
						case 3:{
							
								system("cls");
							
								do{
    							opRNS=menu(tituloNC,opcionesRNS,4);
    							switch(opRNS){
    								case 1:{
    									cout<<"\nACTUALIZAR REGISTRO"<<endl;
    									if(listaC.getNumNodos()!=0){
    									for(int i=1;i<=listaC.getNumNodos();i++){
    										listaC.eliminarPorCola();
										}
										}
    									objArchivo.lecturaArchivo(listaC);
										cout<<"\nREGISRTO ACTUALIZADO (LISTA)"<<endl;
										system("pause");
										break;
									}
    								case 2:{
    									do{
    										system("cls");
    										opcMNC=menu(tituloNC,opcionesNC,6);
    					    				switch(opcMNC){
												case 1:{
													do{
	    					    						nombre=objValidar.lecturaTexto("\nDigite el nombre del empleado: ");
	    					    						tamNombre=nombre.size();
	    					    						if(tamNombre==0){
	    					    							 vNombre=true;
	    					    							 cout<<"Error: no se puede ingresar un nombre vacio, ingrese nuevamente"<<endl;
														}else{
															vNombre=false;
														}
														}while(vNombre);
														vNombre=true;
														
	    					    		                do{
	    					    		                apellido=objValidar.lecturaTexto("\nDigite el apellido del empleado: ");	
	    					    		                tamApellido=apellido.size();
	    					    		                if(tamApellido==0){
	    					    							 vApellido=true;
	    					    							 cout<<"Error: no se puede ingresar un apellido vacio, ingrese nuevamente"<<endl;
														}else{
															vApellido=false;
														}
														}while(vApellido);
														vApellido=true;
												        cedula=validarCedula(cedulaC);
												        do{
												        cargo=objValidar.lecturaTexto("\nDigite el cargo del empleado: ");	
												        tamCargo=cargo.size();
												        if(tamCargo==0){
	    					    							 vCargo=true;
	    					    							 cout<<"Error: no se puede ingresar un cargo vacio, ingrese nuevamente"<<endl;
														}else{
															vCargo=false;
														}
														}while(vCargo);
														vCargo=true;
	    					    		                do{
	    					    		                sueldo=objValidar.casteoReales(sueldoC,"\nDigite el sueldo del empleado: ");
														}while(sueldo<425);
	    					    		               
	    					    		                	opH=menu(tituloH,opcionesH,2);
	    					    		                	switch(opH){
	    					    		                		case 1:{
	    					    		                			do{
	    					    		                			horas=objValidar.casteoEnteros(horasC,"\nDigite las horas extras: ");	
																	}while(horas<=0);		
																	break;
																}
																case 2:{
																    horas=0;		
																	break;
																}	
															}
														Empleado *empleado=new Empleado(nombre,apellido,cedula,cargo,sueldo,horas);	
	    					    		                listaC.insertarPorCola(empleado);	
	    					    		                objArchivo.escribirArchivoTxt(empleado);
													break;
												}
												case 2:{
											 		system("cls");
											 		listaC.eliminarPorCabeza();
											 		if(objArchivo.contarLineasTxt()==1){
											 			break;
													 }else{
											 		objArchivo.eliminarLineaTXT(2); 
											     	}
											 		system("pause");
											 		
													break;
												}
												case 3:{
													system("cls");
											 		listaC.eliminarPorCola();
											 		if(objArchivo.contarLineasTxt()==1){
											 			break;
													 }else{
											 		objArchivo.eliminarLineaTXT(objArchivo.contarLineasTxt()); 
											 		}
											 		system("pause");
													break;
												}
												case 4:{
													system("cls");
													listaC.mostrarPorCabeza();
													cout<<"\n";
													char posC[10];
													int pos;
													pos=objValidar.casteoEnteros(posC,"\nIngrese N del Empleado que desea eliminar: ");
													listaC.borrarEnPosicion(pos);
													if(objArchivo.contarLineasTxt()==1||pos==0){
											 			break;
													 }else{
													objArchivo.eliminarLineaTXT(pos+1);
												    }
													system("pause");
													break;
												}
												case 5:{
													system("cls");
													cout<<"\n\tNOMINA EMPRESA"<<endl;
										            listaC.mostrarPorCabeza();
										            cout<<"\n";
													cout<<"NUMERO EMPLEADOS ACTUALES  "<<listaC.getNumNodos()<<endl;
										            system("pause");
													break;
												}
												case 6:{
												repetirNC=false;
											
													break;
												}
										    	}										
											}while(repetirNC);
											repetirNC=true;
											break;
										}
									case 3:{
										system("cls");
										if(listaC.getNumNodos()!=0){
    									for(int i=1;i<=listaC.getNumNodos();i++){
    										listaC.eliminarPorCola();
										}
										
										}
										cout<<"INGRESANDO POR TXT"<<endl;
										objArchivo.lecturaArchivo(listaC); 
										system("pause");
										break;
									}case 4:{
										repetirRNC=false;
									    cout<<"\n";
										break;
									}
								}
							  	
							}while(repetirRNC);	
							repetirRNC=true;
							break;
						}
						case 4:{
                    		repetir2=false; 
							break;
						}
					}
				}while(repetir2);
    			repetir2=true;
				break;
			}
			
    		case 2:{
    			system("cls");
    			cout<<"\n\tROL DE PAGO"<<endl;
    			objArchivo.lecturaArchivo(listaS);
				system("cls");
    			objN.generarRolPagos(listaS);
				system("pause");
				break;
			}
			case 3:{
				cout<<"\nBUSCAR EMPLEADO"<<endl;
				char cedulaC[10];
				int cedula;
				cedula=validarCedula(cedulaC);
				objArchivo.buscarEmpleadoTxt(cedula); 
				system("pause");
				break;
			}
				
			
    		case 4:{
    			system("cls");
    			cout<<"\n\t  HASTA PRONTO";
                repetir=false; 
                break;
			}
		}
	}while(repetir);
}

/**
 * Muestra un menú con un título y una lista de opciones, y devuelve el número de la opción
 * seleccionada por el usuario
 * 
 * @param titulo El título del menú.
 * @param opciones es una matriz de cadenas que contiene las opciones que se mostrarán en el menú.
 * @param n número de opciones
 * 
 * @return La opción seleccionada por el usuario.
 */
int Menu::menu(const char *titulo,const char *opciones[],int n){
    int opcSeleccionada=1;
    int tecla;
    bool repetir=true;
    do{
        system("cls");
        gotoxy(5,3+opcSeleccionada); cout<<"-->";
        gotoxy(15,2); cout<<titulo;
        for(int i=0;i<n;i++){
            gotoxy(10,4+i); cout<<i+1<<"."<<opciones[i];
        }

        do{
            tecla=getch();
        }while(tecla!=Tecla_Arriba && tecla!=Tecla_Abajo && tecla!=Enter);
        
        switch (tecla)
        {
        case Tecla_Arriba:
            opcSeleccionada--;
            if(opcSeleccionada<1){
               opcSeleccionada=n;
            }
            break;
        case Tecla_Abajo:
            opcSeleccionada++;
            if(opcSeleccionada>n){
               opcSeleccionada=1;
            }
            break;
        case Enter:
            repetir=false;
            break;
        }
    }while(repetir);


    return opcSeleccionada;

}

/**
 * Mueve el cursor a la posición especificada
 * 
 * @param x La coordenada x del cursor.
 * @param y La coordenada y del cursor.
 */
void Menu::gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}
 
/**
 * Valida el número de DNI de una persona.
 * 
 * @param cedulaC es una matriz de caracteres que contiene la entrada del usuario.
 * 
 * @return el valor de la variable cédula.
 */
int Menu::validarCedula(char *cedulaC){
	ValidacionDatos objValidaciones;
	int cedula=0;
	int cifras=0;
	string cedulaS;

	do{
		try{
		cedula=objValidaciones.casteoEnteros(cedulaC,"\nIngrese una cedula correcta");
		cedulaS=cedulaC;
		cifras=cedulaS.size();
		if(cifras!=10){
			throw "Cedula incorrecta, ingrese una cedula de 10 digitos";
		}
		if(cifras==10){
			cout<<"\nCedula correcta"<<endl;
			break;
		}
		}catch(const char* s){
			cout<<"\nCatch:"<<s<<endl;
		}
	}while(cifras!=10);
	
	return cedula;
}

