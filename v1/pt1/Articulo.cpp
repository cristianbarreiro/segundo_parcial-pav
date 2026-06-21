#include "Articulo.h"

Articulo::Articulo() {}

Articulo::Articulo(int elemId) { this->elemId = elemId; }

Articulo::~Articulo() {}

int Articulo::getElemId() { return this->elemId; }