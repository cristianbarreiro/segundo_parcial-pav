#include "Controlador.h"

Controlador* Controlador::instancia = NULL;

Controlador::Controlador() {}

Controlador::~Controlador() {}

Controlador* Controlador::getInstancia() {
  if (instancia == NULL) instancia = new Controlador();

  return instancia;
}

DtMejor* Controlador::peliMejorPuntuadaPorUsuario(string email) {
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

  return usuario->peliMejorPuntuada();
}

list<string> Controlador::usuariosQuePuntuaronEnFecha(DtFecha fecha) {
  list<Usuario*>::iterator it;

  list<string> users;

  for (it = this->usuarios.begin(); it != this->usuarios.end(); ++it) {
    if ((*it)->puntuoEnFecha(fecha)) {
      users.push_back((*it)->getEmail());
    }
  }

  return users;
}