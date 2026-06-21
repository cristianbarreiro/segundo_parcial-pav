#include "Articulo.h"

Articulo::Articulo() {}

Articulo::Articulo(int elemId, string nombre, string texto)
    : Elemento(elemId, nombre) {
  this->texto = texto;
}

Articulo::~Articulo() {}