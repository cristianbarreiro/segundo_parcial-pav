#include "Controlador.h"

Controlador* Controlador::instancia = NULL;

Controlador::Controlador() {}

Controlador::~Controlador() {}

Controlador* Controlador::getInstancia() {
  if (instancia == NULL) instancia = new Controlador();

  return instancia;
}

void Controlador::eliminarUsuarioYReservas(string email) {
  Usuario* usuario;
  bool noEncontre = true;

  list<Usuario*>::iterator it = this->usuarios.begin();

  while (noEncontre) {
    if ((*it)->getEmail() == email) {
      usuario = *it;
      noEncontre = false;
    }
    ++it;
  }
  this->usuarios.remove(usuario);
  delete usuario;
}

list<string> Controlador::verPeliculasReservadasConDebito(string email) {
  Usuario* usuario;
  bool noEncontre = true;

  list<Usuario*>::iterator it = this->usuarios.begin();

  while (noEncontre) {
    if ((*it)->getEmail() == email) {
      usuario = *it;
      noEncontre = false;
    }
    ++it;
  }

  return usuario->pelisReservadasConDebito();
}