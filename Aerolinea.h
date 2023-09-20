#ifndef AEROLINEA_H
#define AEROLINEA_H


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