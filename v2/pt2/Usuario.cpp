#include "Usuario.h"

Usuario::Usuario() {}

Usuario::Usuario(string email) { this->email = email; }

Usuario::~Usuario() {
  list<Puntaje*>::iterator it;

  while (this->puntajes.size() > 0) {
    it = this->puntajes.begin();

    this->puntajes.remove(*it);

    delete *it;
  }
}

string Usuario::getEmail() { return this->email; }

DtMejor* Usuario::peliMejorPuntuada() {
  list<Puntaje*>::iterator it = this->puntajes.begin();

  bool primeraVez = true;

  int mayorPuntos;

  string nombreMejorPeli;

  while (it != this->puntajes.end()) {
    if (primeraVez) {
      mayorPuntos = (*it)->getPuntos();

      nombreMejorPeli = (*it)->getNombrePelicula();

      primeraVez = false;
    } else {
      if ((*it)->getPuntos() > mayorPuntos) {
        mayorPuntos = (*it)->getPuntos();

        nombreMejorPeli = (*it)->getNombrePelicula();
      }
    }

    ++it;
  }

  return new DtMejor(nombreMejorPeli, mayorPuntos);
}

bool Usuario::puntuoEnFecha(DtFecha fecha) {
  bool puntuo = false;

  list<Puntaje*>::iterator it = this->puntajes.begin();

  while (it != this->puntajes.end() && !puntuo) {
    if ((*it)->getFecha() == fecha) puntuo = true;

    ++it;
  }

  return puntuo;
}