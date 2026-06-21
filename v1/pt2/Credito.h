#ifndef CREDITO_H
#define CREDITO_H

#include "Reserva.h"

class Credito : public Reserva{
private:
    string financiera;

public:
    Credito();
    Credito(float costo, Pelicula* pelicula, string financiera);
    ~Credito();
};

#endif