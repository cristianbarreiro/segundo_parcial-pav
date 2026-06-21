#include "Libro.h"

#include "Capitulo.h"
#include "UsuarioElemento.h"

Libro::Libro() {}

Libro::Libro(int id) : Elemento(id) {}

Libro::~Libro() {
  list<Capitulo*>::iterator itC;

  while (this->capitulos.size() > 0) {
    itC = this->capitulos.begin();

    this->capitulos.remove(*itC);

    delete *itC;
  }

  list<UsuarioElemento*>::iterator itUE;

  while (this->usuarioElementos.size() > 0) {
    itUE = this->usuarioElementos.begin();

    this->usuarioElementos.remove(*itUE);

    delete *itUE;
  }
}