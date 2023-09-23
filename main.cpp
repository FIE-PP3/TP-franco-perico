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
void EstadoInicial(){ 
    Aerolinea nuestraAerolinea;
    list <Usuario> listaUsuarios;
    list <Vuelo> listaVuelos;
    list <Reserva> listaReserva;
    list <Usuario> usuarios;
    fechahora f[10]={{1,2,3,},{1,2,3},{1,2,3},{1,2,3},{1,2,3},{1,2,3},{1,2,3},{1,2,3},{1,2,3},{1,2,3}}; 
    Vuelo v1(f[0],f[1],1,25,"Buenos Aires","Cordoba");
    Vuelo v2(f[2],f[3],2,20,"Cordoba","Buenos Aires");
    Vuelo v3(f[4],f[5],3,15,"Buenos Aires","Salta");
    Vuelo v4(f[6],f[7],4,2,"Salta","Buenos Aires");
    Vuelo v5(f[8],f[9],5,0,"Buenos Aires","Salta");

}
///INICIALIZACION////

///////FUNCIONES///////////
void menuPrincipal() {
    int opcion;
    string name_login;
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
                if(1){      //funcion si existe el usuario "true" si no existe "false" y vuelve al menu principal
                    cout<<"1- Buscar Vuelos"<< endl;
                    cout<<"2- Gestionar Reservas"<< endl;
                    cout << "Seleccione una opción: ";
                    cin>> opcion;
                    switch (opcion)
                    {
                    case 1:
                        //funcion del usuario "name_login" BuscarVuelos
                        break;
                    case 2:
                        cout<<"1- Hacer Reservas"<<endl;
                        cout<<"2- Cancelar Reservas"<<endl;
                        cout << "Seleccione una opción: ";
                        cin>> opcion;
                        switch (opcion)
                        {
                        case 1:
                            //funcion del usuario "name_login" hacer reservas
                            break;
                        case 2:
                            //funcion del usuario "name_login" Cancelar reservas
                        default:
                            break;
                        }
                    default:
                        break;
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
    EstadoInicial();    ///INICIALIZACION////
    menuPrincipal();
    return 0;
}
////////MAIN///////////////