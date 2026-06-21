#include "Debito.h"

Debito::Debito(){}

Debito::Debito(float costo, Pelicula* pelicula, string banco)
    : Reserva(costo, pelicula){

    this->banco = banco;
}

Debito::~Debito(){}