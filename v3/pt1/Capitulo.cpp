#include "Capitulo.h"

Capitulo::Capitulo() {}

Capitulo::Capitulo(int nroCap, string titulo, string texto) {
  this->nroCap = nroCap;
  this->titulo = titulo;
  this->texto = texto;
}

Capitulo::~Capitulo() {}