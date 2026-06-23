#ifndef RESERVA_H
#define RESERVA_H

#include <string>

#include "Pelicula.h"

using namespace std;

class Reserva {
 private:
  float costo;
  Pelicula* pelicula;

 public:
  Reserva();
  Reserva(float costo, Pelicula* pelicula);
  virtual ~Reserva();

  string getNombrePeli();
};

#endif