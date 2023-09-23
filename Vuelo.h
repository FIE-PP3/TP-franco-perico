#ifndef VUELO_H
#define VUELO_H

#include <iostream>
#include <list>
using namespace std;

typedef struct FH{
    int hora;
    int dia;
    int mes;
}fechahora;

class Vuelo{
public:
    Vuelo (fechahora Salida, fechahora Llegada, int N, int D, string _origen, string _destino)
    {
        fechaSalida=Salida; 
        fechaLlegada=Llegada;
        nroVuelo=N;
        nroAsientosDisponibles=D;
        origen=_origen;
        destino=_destino;
    }
    fechahora ObtFechaS()
    {
        return fechaSalida;
    }
    fechahora ObtFechaL()
    {
        return fechaLlegada;
    }
    int ObtNV()
    {
        return nroVuelo;
    }
    int ObtND()
    {
        return nroAsientosDisponibles;
    }

private:
    fechahora fechaSalida;
    fechahora fechaLlegada;
    //Aerolinea aerolinea;
    string origen;
    string destino;
    int nroVuelo;
    int nroAsientosDisponibles;
};

#endif