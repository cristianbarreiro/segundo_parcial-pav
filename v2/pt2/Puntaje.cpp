#include "Puntaje.h"

#include "Pelicula.h"

Puntaje::Puntaje() {}

Puntaje::Puntaje(DtFecha fecha, int puntos, Pelicula* pelicula) {
  this->fecha = fecha;

  this->puntos = puntos;

  this->pelicula = pelicula;
}

Puntaje::~Puntaje() {}

int Puntaje::getPuntos() { return this->puntos; }

DtFecha Puntaje::getFecha() { return this->fecha; }

string Puntaje::getNombrePelicula() { return this->pelicula->getNombre(); }