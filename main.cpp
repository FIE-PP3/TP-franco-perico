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
        cout << endl << "Menú Principal:" << endl;
        cout << "1. Ingrese a su cuenta" << endl;
        cout << "2. Registrarme" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        switch (opcion) {
            case 1:{//Opción para ingresar con credencial de un usuario    //Menú de Jerarquía 2
                cout << endl<< "Ingrese su nombre de usuario" << endl; 
                cin>>name_login;
                if(nuestraAerolinea.Accesousuario(name_login)){      //funcion booleanaa que retorna al menu principal si el usuario no existe
                    MenuUsuario=true;
                    while(MenuUsuario){
                        cout<< endl<<"1- Buscar Vuelos"<< endl;
                        cout<<"2- Gestionar Reservas"<< endl;
                        cout<<"3- Volver al Menu Principal"<< endl;
                        cout << "Seleccione una opción: ";
                        cin>> opcion;
                        switch (opcion)
                        {
                        case 1://Opción para buscar vuelos
                            cout<< endl<<"Ingresa el origen"<< endl;
                            cin>>origen;
                            cout<<"Ingresa la hora de salida"<< endl;
                            cin>>salida.hora;
                            cout<<"Ingresa el dia de salida"<< endl;
                            cin>>salida.dia;
                            cout<<"Ingresa el mes de salida"<< endl;
                            cin>>salida.mes;
                            cout<<"Ingresa el destino"<< endl;
                            cin>>destino;
                            cout<<"Ingresa la hora de llegada"<< endl;
                            cin>>llegada.hora;
                            cout<<"Ingresa el dia de llegada"<< endl;
                            cin>>llegada.dia;
                            cout<<"Ingresa el mes de llegada"<< endl;
                            cin>>llegada.mes;
                            vuelosencontrados=nuestraAerolinea.buscarVuelos(llegada,salida,origen,destino);
                            if(vuelosencontrados.size())
                                cout<<"Vuelos encontrados:"<<endl;
                            nuestraAerolinea.imprimir(vuelosencontrados);
                            break;
                        case 2://Opción para gestionar reservas
                            cout<< endl<<"1- Hacer Reservas"<<endl;
                            cout<<"2- Cancelar Reservas"<<endl;
                            cout << "Seleccione una opción: ";
                            cin>> opcion;
                            switch (opcion)
                            {
                            case 1: //funcion de la aerolinea  hacer reservas
                                cout<< endl<<"Ingrese el numero de vuelo a reservar "<<endl;
                                cin>>nrovuelo;
                                int cantasiento;
                                cout<<"Cuantos asientos quiere reservar "<<endl;
                                cin>>cantasiento;
                                vueloareservar=nuestraAerolinea.obtenerVuelo(nrovuelo);
                                usuarioQueReserva=nuestraAerolinea.IdentificacionUsuario(name_login);
                                nuestraAerolinea.hacerReserva(vueloareservar,usuarioQueReserva,cantasiento);
                                break;
                            case 2://funcion de la aerolinea  Cancelar reservas
                                int nroReserva;
                                cout<<"Ingrese Nro de reserva a cancelar"<<endl;
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
                    cout<<"Ingreso un usuario no valido"<<endl;
                }
                break;
            }
            case 2:{//Opción para registrar un usuario    //Menú de Jerarquía 2            
                cout << endl<< "Agregar un usuario" << endl;
                cout << "Coloque un nombre para el Usuario" << endl;
                cin>>name_login;
                cout << "Coloque un email para el Usuario" << endl;
                cin>>email_login;
                Usuario addusuario(name_login,email_login);
                nuestraAerolinea.agregarusuarios(addusuario);
                break;
            }                                                      
            case 3:{ //Opción para Salir del programa    //Menú de Jerarquía 2                          
                cout << endl<< "Saliendo del programa." << endl;
                exit (-1);
            }                                                       
            default:
                cout << "Opción no válida. Por favor, selecciona una opción válida." << endl;
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
