#include "Reserva.h"

Reserva::Reserva(){}

Reserva::Reserva(float costo, Pelicula* pelicula){
    this->costo = costo;
    this->pelicula = pelicula;
}

Reserva::~Reserva(){}

string Reserva::getNombrePeli(){
    return this->pelicula->getNombre();
}