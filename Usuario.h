#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <list>
using namespace std;

class Usuario{
public:
    Usuario (string _nombre, string _email){
        nombre=_nombre;
        email=_email;
    }
    void AgregarReserva(Reserva R1){
        listareseva.push_back(R1);
    }
    string getnombre(){
        return nombre;
    }
    bool eliminarreserva(int nroReserva){
        for(auto aux= listareseva.begin(); aux != listareseva.end();aux++){
            if(aux->Nroreserva == nroReserva){
                aux->AgregarDisponibilidad();
                listareseva.erase(aux);
                return true;
                }
        }
        return false;
    }
private:
    string nombre;
    string email;
    list <Reserva> listareseva;
};

#endif