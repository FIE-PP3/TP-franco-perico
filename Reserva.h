#ifndef RESERVA_H
#define RESERVA_H

class Reserva{
public:
    Reserva(int numeroDeAsiento, Vuelo vuelo){
        nroAsiento = numeroDeAsiento;
        nroDeVuelo = vuelo;
    };
    void AgregarPasajero(Pasajero p) {
        listapasajero.push_back(p);
    }
private:
    int nroAsiento;
    list <Pasajero> listapasajero;
    Vuelo nroDeVuelo;
};

#endif