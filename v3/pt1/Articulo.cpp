#include "Articulo.h"

#include "UsuarioArticulo.h"
#include "UsuarioElemento.h"

Articulo::Articulo() {}

Articulo::Articulo(int id) : Elemento(id) {}

Articulo::~Articulo() {
  list<UsuarioArticulo*>::iterator itUA;

  while (this->usuarioArticulos.size() > 0) {
    itUA = this->usuarioArticulos.begin();

    this->usuarioArticulos.remove(*itUA);

    delete *itUA;
  }

  list<UsuarioElemento*>::iterator itUE;

  while (this->usuarioElementos.size() > 0) {
    itUE = this->usuarioElementos.begin();

    this->usuarioElementos.remove(*itUE);

    delete *itUE;
  }
}