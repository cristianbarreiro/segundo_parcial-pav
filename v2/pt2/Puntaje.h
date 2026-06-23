#ifndef PUNTAJE_H
#define PUNTAJE_H

#include <string>

#include "DtFecha.h"
#include "Pelicula.h"

using namespace std;


class Puntaje{
private:
    DtFecha fecha;
    int puntos;
    Pelicula* pelicula;

public:
    Puntaje();

    Puntaje(DtFecha fecha, int puntos, Pelicula* pelicula);

    ~Puntaje();

    int getPuntos();

    DtFecha getFecha();

    string getNombrePelicula();
};

#endif