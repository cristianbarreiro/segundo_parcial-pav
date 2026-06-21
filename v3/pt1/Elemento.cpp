#include "Elemento.h"

Elemento::Elemento() {}

Elemento::Elemento(int id) { this->id = id; }

Elemento::~Elemento() {}

int Elemento::getId() { return this->id; }