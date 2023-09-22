#ifndef VUELO_H
#define VUELO_H



class Vuelo{
public:
    Vuelo (fechahora Salida, fechahora Llegada, int N, int D)
    {
        fechaSalida=Salida; 
        fechaLlegada=Llegada;
        nroVuelo=N;
        nroAsientosDisponibles=D;
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
    int nroVuelo;
    int nroAsientosDisponibles;
};

#endif