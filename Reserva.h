#ifndef RESERVA_H
#define RESERVA_H

#include <iostream>
#include <list>
using namespace std;

class Reserva{
public:
    Reserva (int _nroreserva,int CantAsientosAreservar, Vuelo *vuelo){
        Nroreserva = _nroreserva;
        CantAsientos = CantAsientosAreservar;
        nroDeVuelo = vuelo;
    }
    void AgregarPasajero(Pasajero p) {
        listapasajero.push_back(p);
    }
    int Nroreserva;
    void AgregarDisponibilidad(){
        nroDeVuelo->agregarAsientosDisponibles(listapasajero.size());
    }
private:
    int CantAsientos;
    list <Pasajero> listapasajero;
    Vuelo * nroDeVuelo;
};

#endif