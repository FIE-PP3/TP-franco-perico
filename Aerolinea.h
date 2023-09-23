#ifndef AEROLINEA_H
#define AEROLINEA_H

#include <iostream>
#include <list>
using namespace std;

class Aerolinea{
public:
    Vuelo * buscarVuelos(struct tm fechaLlegada, struct tm fechaSalida, string origen, std::string destino);
    Reserva hacerReserva(Vuelo vuelo, Usuario usuario, int nroAsiento);
    void cancelarReservas(Reserva reservaAcancelar);
    list <Reserva> listareserva;
private:    
    list <Vuelo> listavuelo;
    list <Usuario> listausuario;
};

#endif