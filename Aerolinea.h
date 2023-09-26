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
    Usuario * IdentificacionUsuario(string & nombreAbuscar){
        for (auto & aux : listausuario){
            if ( aux.getnombre() == nombreAbuscar)
                return &aux;
        }
    }
    void imprimir (list <Vuelo> & mostrar){
        for (auto & aux :mostrar)
        {
            cout<<"Nro de vuelo "<<aux.ObtNV()<<" Origen: "<< aux.getOrigen()<<" Destino: "<<aux.getDestino()<<" Cantidad de asientos disponibles "<<aux.ObtND()<<endl;
        }
        
    }
    list <Vuelo> buscarVuelos(fechahora fechaLlegada, fechahora fechaSalida, string origen, string destino){
        list <Vuelo> listaDeVuelo;
        for (auto & aux : listavuelo){
            if ( aux.ObtFechaL().hora == fechaLlegada.hora){
                if (aux.ObtFechaL().dia == fechaLlegada.dia){
                    if (aux.ObtFechaL().mes == fechaLlegada.mes) {
                        if ( aux.ObtFechaS().hora == fechaSalida.hora){
                            if (aux.ObtFechaS().dia == fechaSalida.dia){
                                if (aux.ObtFechaS().mes == fechaSalida.mes) {
                                    if ( aux.getOrigen() == origen) {
                                        if ( aux.getDestino() == destino) {
                                            listaDeVuelo.push_back(aux);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
            }       
        }
        return listaDeVuelo;
    }
    void hacerReserva(Vuelo * vuelo, Usuario * usuario, int cantAsiento){
        if(Disponibilidad(cantAsiento,vuelo)){
            Reserva reserva(cantAsiento,vuelo);
            string nombrepasajero;
            int dniPasajero;
            Pasajero pasajeroACargar("",0);
            for(int i=0;i<cantAsiento;i++){
                cout<<"- Como se llama el pasajero nro "<<i+1<<"?"<<endl;
                cin>>nombrepasajero;
                cout<<"- Cual es su DNI "<<endl;
                cin>>dniPasajero;          
                Pasajero pasajeroACargar(nombrepasajero,dniPasajero);
                reserva.AgregarPasajero(pasajeroACargar);
            }
            vuelo->restarAsientosDisponibles(cantAsiento);
            usuario->AgregarReserva(reserva);
        } else {
            cout<<"No hay "<<cantAsiento<<" disponible en el vuelo Nro"<<vuelo->ObtNV()<<endl;
        }
    }
       Vuelo * obtenerVuelo(int nroDeVuelo ){
        Vuelo *p;
        for (auto & aux : listavuelo) {
            if (aux.ObtNV() == nroDeVuelo) {
                p=&aux;
                return p;
            }
        }
        cout << "Nro de Vuelo no encontrado." <<endl;
        return p;
    }   //Devuelve un Vuelo a partir del Nro de Vuelo (que ya sabemos por el buscarVuelo)

    bool Disponibilidad(int cantAsientos, Vuelo * vuelo){
        if(cantAsientos<= vuelo->ObtND())
            return true;
        return false;
    }
    void cancelarReservas(Reserva reservaAcancelar);
    list <Reserva> listareserva;
private:
    list <Vuelo> listavuelo;
    list <Usuario> listausuario;
};


#endif