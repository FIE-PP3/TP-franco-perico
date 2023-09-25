#include <iostream>
#include <list>
using namespace std;
#include "helper.h"
//------------------------------------
/*Programa de Gestión de Vuelos (Equipo Nro 1 - Ejercicio 3- PP3)
------------------------------------------------------------------------
Menú:
1.ingrese a su cuenta.
--------> ingrese su nombre de usuario
-------------------* Buscar Vuelos
-------------------* Gestionar Reservas
----------------------------+ Hacer Reservas
----------------------------+ Cancelar Reservas
--------> Menú Principal
2.registrarme.
--------> Agregar un Usuario.
--------> Menú principal. 
*/
///INICIALIZACION////
/*Aerolinea  EstadoInicial(){ 
    Aerolinea nuestraaerolinea;
    fechahora f[10]={{1,2,3,},{1,2,3},{1,2,3},{1,2,3},{1,2,3},{1,2,3},{1,2,3},{1,2,3},{1,2,3},{1,2,3}}; 
    Vuelo v1(f[0],f[1],1,25,"Buenos Aires","Cordoba");
    Vuelo v2(f[2],f[3],2,20,"Cordoba","Buenos Aires");
    Vuelo v3(f[4],f[5],3,15,"Buenos Aires","Salta");
    Vuelo v4(f[6],f[7],4,2,"Salta","Buenos Aires");
    Vuelo v5(f[8],f[9],5,0,"Buenos Aires","Salta");
    nuestraaerolinea.agregarvuelos(v1);
    nuestraaerolinea.agregarvuelos(v2);
    nuestraaerolinea.agregarvuelos(v3);
    nuestraaerolinea.agregarvuelos(v4);
    nuestraaerolinea.agregarvuelos(v5);
    Usuario s1("hernan","lenonpreto65@gmail.com"),s2("juancito","juancitopelado@gmail.com");
    nuestraaerolinea.agregarusuarios(s1);
    nuestraaerolinea.agregarusuarios(s2);
    return nuestraaerolinea;
}*/
///INICIALIZACION////

///////FUNCIONES///////////
void menuPrincipal(Aerolinea & nuestraAerolinea) {
    int opcion,nrovuelo=1;
    string name_login,origen,destino;
    list <Vuelo> vuelosencontrados; // = nuestraAerolinea.buscarVuelos(origen,destino);
    fechahora salida={0,0,0},llegada={0,0,0};
    bool MenuUsuario=true;
    Vuelo * vueloareservar;
    Usuario * usuarioQueReserva;
    while (true) {
        cout << "Menú Principal:" << endl;
        cout << "1. Ingrese a su cuenta" << endl;
        cout << "2. Registrarme" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        switch (opcion) {
            case 1:{
                cout << "Ingrese su nombre de usuario" << endl; 
                cin>>name_login;
                if(nuestraAerolinea.Accesousuario(name_login)){      //funcion si existe el usuario "true" si no existe "false" y vuelve al menu principal
                    MenuUsuario=true;
                    while(MenuUsuario){
                        cout<<"1- Buscar Vuelos"<< endl;
                        cout<<"2- Gestionar Reservas"<< endl;
                        cout<<"3- Volver al Menu Principal"<< endl;
                        cout << "Seleccione una opción: ";
                        cin>> opcion;
                        switch (opcion)
                        {
                        case 1://funcion de la aerolinea BuscarVuelos
                            cout<<"Ingresa el origen"<< endl;
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
                            cout<<"Vuelos encontrados:"<<endl;
                            nuestraAerolinea.imprimir(vuelosencontrados);

                            break;
                        case 2:
                            cout<<"1- Hacer Reservas"<<endl;
                            cout<<"2- Cancelar Reservas"<<endl;
                            cout << "Seleccione una opción: ";
                            cin>> opcion;
                            switch (opcion)
                            {
                            case 1:
                                //funcion de la aerolinea  hacer reservas
                                cout<<"ingrese el numero de vuelo a reservar "<<endl;
                                cin>>nrovuelo;
                                int cantasiento;
                                cout<<"Cuantos asientos quiere reservar "<<endl;
                                cin>>cantasiento;
                                vueloareservar=nuestraAerolinea.obtenerVuelo(nrovuelo);
                                usuarioQueReserva=nuestraAerolinea.IdentificacionUsuario(name_login);
                                nuestraAerolinea.hacerReserva(vueloareservar,usuarioQueReserva,cantasiento);
                                break;
                            case 2:
                                //funcion de la aerolinea  Cancelar reservas
                            default:
                                break;
                            }
                        case 3:
                            MenuUsuario=false;
                            break;
                        }
                    }
                }
                else {
                    cout<<"Ingreso un usuario no valido"<<endl;
                }
                break;
            }
            case 2:{
                cout << "Agregar un usuario" << endl;
                //Funcion Para agregar un usuario
                break;
            }
            case 3:{
                cout << "Saliendo del programa." << endl;
                exit (-1);
            }
            default:
                cout << "Opción no válida. Por favor, selecciona una opción válida." << endl;
        }
    }
}

////////MAIN////////////////
int main() {
    //Aerolinea * inicio=EstadoInicial();    ///INICIALIZACION////
    Aerolinea nuestraaerolinea;
    fechahora f[10]={{1,2,3,},{1,2,3},{1,2,3},{1,2,3},{1,2,3},{1,2,3},{1,2,3},{1,2,3},{1,2,3},{1,2,3}}; 
    Vuelo v1(f[0],f[1],1,25,"Buenos","Cordoba");
    Vuelo v2(f[2],f[3],2,20,"Cordoba","Buenos");
    Vuelo v3(f[4],f[5],3,15,"Buenos","Salta");
    Vuelo v4(f[6],f[7],4,2,"Salta","Buenos");
    Vuelo v5(f[8],f[9],5,0,"Buenos","Salta");
    nuestraaerolinea.agregarvuelos(v1);
    nuestraaerolinea.agregarvuelos(v2);
    nuestraaerolinea.agregarvuelos(v3);
    nuestraaerolinea.agregarvuelos(v4);
    nuestraaerolinea.agregarvuelos(v5);
    Usuario s1("hernan","lenonpreto65@gmail.com"),s2("juancito","juancitopelado@gmail.com");
    nuestraaerolinea.agregarusuarios(s1);
    nuestraaerolinea.agregarusuarios(s2);
    
    menuPrincipal(nuestraaerolinea);
    return 0;
}
////////MAIN///////////////