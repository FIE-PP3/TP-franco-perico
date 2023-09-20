#ifndef RESERVA_H
#define RESERVA_H


class Reserva{
public:
    Reserva(int NA, Vuelo V);
    void AgregarPasajero(Pasajero * p);
private:
    int nroAsiento;
    Pasajero * listapasajero=NULL;
    Vuelo vuelo;
};

#endif