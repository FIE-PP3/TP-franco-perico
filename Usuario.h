#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <list>
using namespace std;

typedef struct busqueda {
    int fechaSalida;
    int horaSalida;
    int fechaLlegada;
    int horaLlegada;
    int numeroDeVuelo;
}Busqueda;

class Usuario{
public:
    Usuario (string _nombre, string _email){
        nombre=_nombre;
        email=_email;
    }
    void AgregarReserva(Reserva R1){
        listareseva.push_back(R1);
    }
    /*int buscarVuelos(){
        Vuelo * vueloBuscado;
        Busqueda busqueda;
        cout << "Introduzca fecha de salida: " << endl;
        cin >> busqueda.fechaSalida;
        cout << "Introduzca hora de salida: " << endl;
        cin >> busqueda.horaSalida;
        cout << "Introduzca fecha de llegada: " << endl;
        cin >> busqueda.fechaLlegada;
        cout << "Introduzca hora de llegada: " << endl;
        cin >> busqueda.horaLlegada;
        cout << "Introduzca numero de vuelo: " << endl;
        cin >> busqueda.numeroDeVuelo;
        /////////
        //vueloBuscado = funcionFriendDeVuelo //meterse en vuelos y buscar de acuerdo a busqueda. Hacer método en vuelo.h
        /////////
        return vueloBuscado->ObtNV();
    } // recibe parámetro de búsuqueda de aceurdo al enunciado y retorna el numero de Vuelvo.

    void gestionarReserva(){

    } // recibe un número de un Vuelo y reserva dicho vuelo (modifica listaReserva), agrega reserva a lista de reservas, y devuelve void
*/
private:
    string nombre;
    string email;
    list <Reserva> listareseva;
};

#endif