#include "helper.h"

using namespace std;
------------------------------------
/*Programa de Gestión de Vuelos (Equipo Nro 1 - Ejercicio 3- PP3)
------------------------------------------------------------------------
Menú:
1. Buscar Vuelos. // ver de agregar busqueda de reservas, que no dice la
2. Gestionar reservas:
3. Gestionar usuarios.
--------------------------
Sub-Menú (Buscar Vuelos)
1. Por (parámetros A,B,C).
2. Por (parámetros D,E,F).
3. Por (parámetros ....).
Etc...
-----------------------------
Sub-Menú (Gestionar reservas)
1. Reservar
2. Cancelar una reserva.
---------------------------
Sub-Menú (Gestionar usurios)
1. Cargar nuevo usuario.
2. Administrar Usuarios (solo Administrador)*/

#include "helper.h"
#include <iostream>
using namespace std;

///////CLASES///////////////
class Vuelo {};
class Usuario {};
class Pasajero {};
class Reserva {};
////////////////////////////

////////MAIN////////////////
int main() {
    menuPrincipal();
}
////////MAIN////////////////

///////FUNCIONES////////////
void menuPrincipal() {
    int opcion;

    while (true) {
        cout << "Menú Principal:" << endl;
        cout << "1. Buscar vuelos" << endl;
        cout << "2. Gestionar Vuelos" << endl;
        cout << "3. Gestionar Usuario" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opción: ";

        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Has seleccionado la Opción 1." << endl;
                buscarVuelos();
                break;
            case 2:
                cout << "Has seleccionado la Opción 2." << endl;
                gestionarReserva();
                break;
            case 3:
                cout << "Has seleccionado la Opción 3." << endl;
                gestionarUsuario();
                break;
            case 4:
                cout << "Saliendo del programa." << endl;
                return 0;
            default:
                cout << "Opción no válida. Por favor, selecciona una opción válida." << endl;
        }
    }
}
Vuelo buscarVuelos(){

}
void gestionarReserva(){

}
Usuario gestionarUsuario(){

}
///////FUNCIONES////////////