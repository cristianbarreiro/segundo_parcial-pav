#include "Pelicula.h"

Pelicula::Pelicula() {}

Pelicula::Pelicula(int id, string nombre) {
  this->id = id;
  this->nombre = nombre;
}

Pelicula::~Pelicula() {}

string Pelicula::getNombre() { return this->nombre; }