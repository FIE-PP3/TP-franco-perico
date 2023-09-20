#ifndef VUELO_H
#define VUELO_H


class Vuelo{
public:
    Vuelo (fechahora Salida, fechahora Llegada, int N, int D): fechaSalida(Salida), 
                                                    fechaLlegada(Llegada), 
                                                    nroVuelo(N),
                                                    nroAsientosDisponibles(D){}
    fechahora ObtFechaS();
    fechahora ObtFechaL();
    int ObtNV();       //NV: "Número de Vuelo"
    int ObtND();       //ND: "rfdv"
private:
    fechahora fechaSalida;
    fechahora fechaLlegada;
    //Aerolinea aerolinea;
    int nroVuelo;
    int nroAsientosDisponibles;
};


fechahora Vuelo::ObtFechaS()
{
    return fechaSalida;
}

fechahora Vuelo::ObtFechaL()
{
    return fechaLlegada;
}



int Vuelo::ObtND()
{
    return nroAsientosDisponibles;
}



#endif