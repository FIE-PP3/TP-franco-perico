#ifndef RESERVA_H
#define RESERVA_H

#include <iostream>
#include <list>
using namespace std;

class Reserva{
public:
    Reserva (int CantAsientosAreservar, Vuelo *vuelo){
        CantAsientos = CantAsientosAreservar;
        nroDeVuelo = vuelo;
    }
    void AgregarPasajero(Pasajero p) {
        listapasajero.push_back(p);
    }
private:
    int CantAsientos;
    list <Pasajero> listapasajero;
    Vuelo * nroDeVuelo;
};

#endif