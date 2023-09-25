#ifndef AEROLINEA_H
#define AEROLINEA_H

#include <iostream>
#include <list>
using namespace std;

class Aerolinea{
public:
    void agregarvuelos(Vuelo & aux){
        listavuelo.push_back(aux);
    }
    void agregarusuarios(Usuario & aux){
        listausuario.push_back(aux);
    }
    bool Accesousuario(string & nombreAbuscar){
        for (auto & aux : listausuario){
            if ( aux.getnombre() == nombreAbuscar)
                return true;
        }
        return false;
    }
    void imprimir (list <Vuelo> mostrar);
    list <Vuelo> buscarVuelos(/*struct tm fechaLlegada, struct tm fechaSalida,*/ string origen, std::string destino);
    Reserva hacerReserva(Vuelo vuelo, Usuario usuario, int nroAsiento);
    void cancelarReservas(Reserva reservaAcancelar);
    list <Reserva> listareserva;
private:
    list <Vuelo> listavuelo;
    list <Usuario> listausuario;
};

#endif