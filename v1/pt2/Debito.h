#ifndef DEBITO_H
#define DEBITO_H

#include "Reserva.h"

class Debito : public Reserva{
private:
    string banco;

public:
    Debito();
    Debito(float costo, Pelicula* pelicula, string banco);
    ~Debito();
};

#endif