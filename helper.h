#ifndef HELPER_H
#define HELPER_H

#include<time.h>
#include<iostream>

using namespace std;

class Vuelo{
public:
    Vuelo (struct tm S, struct tm L, int N, int D): fechaSalida(S), 
                                                    fechaLlegada(L), 
                                                    nroVuelo(N),
                                                    nroAsientosDisponibles(D){}
    struct tm ObtFechaS();
    struct tm ObtFechaL();
    int ObtNV();       //NV: "Número de Vuelo"
    int ObtND();
private:
    struct tm fechaSalida;
    struct tm fechaLlegada;
    //Aerolinea aerolinea;
    int nroVuelo;
    int nroAsientosDisponibles;
};

class Pasajero{
public:
    Pasajero (string N, int D): nombre(N),dni(D){}
    string Obtnombre();
    int Obtdni();
private:
    string nombre;
    int dni;
};

class Reserva{
public:
    Reserva(int NA, Vuelo V);
    void AgregarPasajero(Pasajero * p);
private:
    int nroAsiento;
    Pasajero * listapasajero=NULL;
    Vuelo vuelo;
};

class Usuario{
private:
    string nombre;
    string email;
    Reserva * listareseva;
};

class Aerolinea{
public:
    Aerolinea();
    Vuelo * buscarVuelos(struct tm fechaLlegada, struct tm fechaSalida, string origen, std::string destino);
    Reserva hacerReserva(Vuelo vuelo, Usuario usuario, int nroAsiento);
    void cancelarReservas(Reserva reservaAcancelar);
    Reserva * listareserva;
private:    
    Vuelo * listavuelo;
    Usuario * listausuario;
};


#endif