#include "Credito.h"

Credito::Credito(){}

Credito::Credito(float costo, Pelicula* pelicula, string financiera)
    : Reserva(costo, pelicula){

    this->financiera = financiera;
}

Credito::~Credito(){}