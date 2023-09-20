#ifndef PASAJERO_H
#define PASAJERO_H


class Pasajero{
public:
    Pasajero (string N, int D): nombre(N),dni(D){}
    string ObtNombre(){
        return nombre;
    };
    int ObtDni(){
        return dni;
    };
private:
    string nombre;
    int dni;
};

#endif