#ifndef HELPER_H
#define HELPER_H

#include<time.h>
#include<iostream>

class Vuelo{
public:
private:
    struct tm fechaSalida;
    struct tm horaSalida;
    struct tm fechaLlegada;
    struct tm horaLlegada;
    //Aerolinea aerolinea;
    int nroVuelo;
    int nroAsientosDisponibles;
};

class Pasajero{
private:
    std::string nombre;
    int dni;
};

class Reserva{

private:
    int nroAsiento;
    Pasajero * listapasajero;
    Vuelo vuelo;
};

class Usuario{
private:
    std::string nombre;
    std::string email;
    Reserva * listareseva;
};

class Aerolinea{
public:
    Aerolinea();
    Vuelo * buscarVuelos(struct tm fechaLlegada, struct tm fechaSalida, std::string origen, std::string destino);
    Reserva hacerReserva(Vuelo vuelo, Usuario usuario, int nroAsiento);
    void cancelarReservas(Reserva reservaAcancelar);
    Reserva * listareserva;
private:    
    Vuelo * listavuelo;
    Usuario * listausuario;
};


#endif