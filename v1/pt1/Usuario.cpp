#include "Usuario.h"

#include "UsuarioArticulo.h"
#include "UsuarioElemento.h"

Usuario::Usuario() {}

Usuario::Usuario(string email) { this->email = email; }

Usuario::~Usuario() {
  list<UsuarioElemento*>::iterator itUE;

  while (this->usuarioElementos.size() > 0) {
    itUE = this->usuarioElementos.begin();

    this->usuarioElementos.remove(*itUE);

    delete *itUE;
  }

  list<UsuarioArticulo*>::iterator itUA;

  while (this->usuarioArticulos.size() > 0) {
    itUA = this->usuarioArticulos.begin();

    this->usuarioArticulos.remove(*itUA);

    delete *itUA;
  }
}

string Usuario::getEmail() { return this->email; }

void Usuario::leerElementoYaLeido(int elemId) {
  list<UsuarioElemento*>::iterator it;

  for (it = this->usuarioElementos.begin(); it != this->usuarioElementos.end();
       ++it) {
    if ((*it)->getElemId() == elemId) {
      (*it)->actualizarUltimaLectura();
    }
  }

  list<UsuarioArticulo*>::iterator ita;

  for (ita = this->usuarioArticulos.begin();
       ita != this->usuarioArticulos.end(); ++ita) {
    if ((*ita)->getElemId() == elemId) {
      (*ita)->incrementarCantLecturas();
    }
  }
}