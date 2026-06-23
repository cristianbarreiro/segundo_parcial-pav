#include "Controlador.h"

Controlador* Controlador::instancia = NULL;

Controlador::Controlador() {}

Controlador::~Controlador() {}

Controlador* Controlador::getInstancia() {
  if (instancia == NULL) instancia = new Controlador();

  return instancia;
}

void Controlador::responderComentario(int idP, string texto, int idC,
                                      Usuario* u) {
  Pelicula* pelicula;

  bool noEncontre = true;

  list<Pelicula*>::iterator it = this->peliculas.begin();

  while (noEncontre) {
    if ((*it)->getId() == idP) {
      pelicula = *it;

      noEncontre = false;
    }

    ++it;
  }

  pelicula->responderComentario(texto, idC, u);
}

void Controlador::eliminarPelicula(int idP) {
  Pelicula* pelicula;

  bool noEncontre = true;

  list<Pelicula*>::iterator it = this->peliculas.begin();

  while (noEncontre) {
    if ((*it)->getId() == idP) {
      pelicula = *it;

      noEncontre = false;
    }

    ++it;
  }

  delete pelicula;
}