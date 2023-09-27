#include <iostream>
#include <list>
using namespace std;
#include "helper.h"

void menuPrincipal(Aerolinea & nuestraAerolinea) {
    int opcion,nrovuelo=1;
    string name_login,origen,destino,email_login;
    list <Vuelo> vuelosencontrados;
    fechahora salida={0,0,0},llegada={0,0,0};   //Declaraciones de estructuras tipo FH
    bool MenuUsuario=true;
    Vuelo * vueloareservar;                     //Declaración de punteros a un Objeto de la clase Vuelo
    Usuario * usuarioQueReserva;                //Declaración de punteros a un Objeto de la clase Vuelo
    while (true) {
        cout << endl <<"--------------------------------------";
        cout << "MENU PRINCIPAL";
        cout <<"--------------------------------------";
        cout << endl << "1. Ingresar a su cuenta. " << endl;
        cout << "2. Registrar una cuenta nueva. " << endl;
        cout << "3. Salir. " << endl;
        cout << "SELECCIONE UNA OPCION: ";
        cin >> opcion;
        switch (opcion) {
            case 1:{//Opción para ingresar con credencial de un usuario    //Menú de Jerarquía 2
                cout <<"--------------------------------------";
                cout << endl<< "Ingresar nombre de usuario: " << endl;
                cin>>name_login;
                if(nuestraAerolinea.Accesousuario(name_login)){      //funcion booleanaa que retorna al menu principal si el usuario no existe
                    MenuUsuario=true;
                    while(MenuUsuario){
                        cout <<"--------------------------------------";
                        cout <<"INGRESO DE USUARIO VALIDO";
                        cout <<"--------------------------------------";
                        cout<< endl<<"1- Buscar vuelos. "<< endl;
                        cout<<"2- Gestionar reservas. "<< endl;
                        cout<<"3- Volver al menu principal. "<< endl;
                        cout << "SELECCIONE UNA OPCION: ";
                        cin>> opcion;
                        switch (opcion)
                        {
                        case 1://Opción para buscar vuelos
                            cout << endl <<"--------------------------------------";
                            cout << "BUSCAR VUELOS";
                            cout <<"--------------------------------------";
                            cout<< endl<<"Ingresar el lugar de origen: "<< endl;
                            cin>>origen;
                            cout<<"Ingresar el hora de salida: "<< endl;
                            cin>>salida.hora;
                            cout<<"Ingresar el dia de salida:"<< endl;
                            cin>>salida.dia;
                            cout<<"Ingresar el mes de salida: "<< endl;
                            cin>>salida.mes;
                            cout<<"Ingresar el lugar destino: "<< endl;
                            cin>>destino;
                            cout<<"Ingresar la hora de llegada: "<< endl;
                            cin>>llegada.hora;
                            cout<<"Ingresar el dia de llegada:"<< endl;
                            cin>>llegada.dia;
                            cout<<"Ingresar el mes de llegada: "<< endl;
                            cin>>llegada.mes;
                            vuelosencontrados=nuestraAerolinea.buscarVuelos(llegada,salida,origen,destino);
                            if(vuelosencontrados.size())
                                cout<<"Vuelos encontrados:"<<endl;
                            nuestraAerolinea.imprimir(vuelosencontrados);
                            break;
                        case 2://Opción para gestionar reservas
                            cout << endl <<"--------------------------------------";
                            cout << "GESTIONAR RESERVAS";
                            cout <<"--------------------------------------";
                            cout<< endl<<"1- Hacer una reserva. "<<endl;
                            cout<<"2- Cancelar una reserva. "<<endl;
                            cout << "SELECCIONE UNA OPCION: ";
                            cin>> opcion;
                            switch (opcion)
                            {
                            case 1: //funcion de la aerolinea hacer reservas
                                cout << endl <<"--------------------------------------";
                                cout << "HACER RESERVAS";
                                cout <<"--------------------------------------";
                                cout<< endl<<"Ingresar el numero de vuelo a reservar: "<<endl;
                                cin>>nrovuelo;
                                int cantasiento;
                                cout<<"Ingrese la cantidad de asientos que desea reservar: "<<endl;
                                cin>>cantasiento;
                                vueloareservar=nuestraAerolinea.obtenerVuelo(nrovuelo);
                                usuarioQueReserva=nuestraAerolinea.IdentificacionUsuario(name_login);
                                nuestraAerolinea.hacerReserva(vueloareservar,usuarioQueReserva,cantasiento);
                                break;
                            case 2://funcion de la aerolinea cancelar reservas
                                int nroReserva;
                                cout << endl <<"--------------------------------------";
                                cout << "CANCELAR";
                                cout <<"--------------------------------------";
                                cout<<"Ingresar el Nro de reserva que desea cancelar: "<<endl;
                                cin>>nroReserva;
                                usuarioQueReserva=nuestraAerolinea.IdentificacionUsuario(name_login);
                                if(usuarioQueReserva->eliminarreserva(nroReserva))
                                    nuestraAerolinea.cancelarReservas(nroReserva);
                            default:
                                break;
                            }
                        case 3://Opción para volver al menú principal
                            MenuUsuario=false;
                            break;
                        }
                    }
                }
                else {//Opción para usuario no válido
                    cout <<"--------------------------------------";
                    cout<<"ATENCION: Ingreso un usuario NO valido"<<endl;
                    cout <<"--------------------------------------";
                }
                break;
            }
            case 2:{//Opción para registrar un usuario    //Menú de Jerarquía 2            
                cout << endl <<"--------------------------------------";
                cout << "REGISTRAR UN NUEVO USUARIO.";
                cout <<"--------------------------------------";

                cout << "Ingresar un nombre para el usuario nuevo: " << endl;
                cin>>name_login;
                cout << "Ingresar un email para el usuario nuevo: " << endl;
                cin>>email_login;
                Usuario addusuario(name_login,email_login);
                nuestraAerolinea.agregarusuarios(addusuario);
                break;
            }                                                      
            case 3:{ //Opción para Salir del programa    //Menú de Jerarquía 2                          
                cout << endl<< "SALIENDO DEL PROGRAMA." << endl;
                cout <<"--------------------------------------";
                exit (-1);
            }                                                       
            default:
                cout <<"--------------------------------------";
                cout << "ATENCION: Opción NO válida. Por favor, selecciona una opción válida." << endl;
        }
    } //Menú de jerarquía 1
}       //Función Menú Principal

int main() {
    ///INICIALIZACION////
    Aerolinea nuestraaerolinea;     //Instanciación de Obj de la Clase Aerolínea
    fechahora f[10]={{12,1,7},{13,1,7},{12,10,9},{13,10,9},{12,25,12},{13,25,12},{12,31,12},{13,31,12},{12,2,4},{13,2,4}}; 
    Vuelo v1(f[0],f[1],1,25,"BsAs","Cordoba");   //Instanciaciones de Objetos de la Clase Vuelo
    Vuelo v2(f[2],f[3],2,20,"Cordoba","BsAs");
    Vuelo v3(f[4],f[5],3,15,"BsAs","Salta");
    Vuelo v4(f[6],f[7],4,2,"Salta","BsAs");
    Vuelo v5(f[4],f[5],5,0,"BsAs","Salta");
    nuestraaerolinea.agregarvuelos(v1);         //Agregaciones de Objetos de la Clase Vuelo por método de Obj de Clase Aerolínea
    nuestraaerolinea.agregarvuelos(v2);
    nuestraaerolinea.agregarvuelos(v3);
    nuestraaerolinea.agregarvuelos(v4);
    nuestraaerolinea.agregarvuelos(v5);
    Usuario s1("hernan","lenonpreto65@gmail.com");      //Instanciaciones de Objetos de la Clase Usuario
    Usuario s2("juancito","juancitopelado@gmail.com");
    nuestraaerolinea.agregarusuarios(s1);       //Agregación de Objetos de la Usuario Vuelo por método de Obj de Clase Aerolínea
    nuestraaerolinea.agregarusuarios(s2);
    ///INICIALIZACION////
    menuPrincipal(nuestraaerolinea);        //Llamada a Menú Principal pasando por parámetro Obj de la Case Aerolínea
    return 0;
}       //Programa principal
