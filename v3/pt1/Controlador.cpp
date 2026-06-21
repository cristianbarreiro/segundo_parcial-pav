#include "Controlador.h"

#include "Elemento.h"
#include "Libro.h"

Controlador* Controlador::instancia = NULL;

Controlador::Controlador() {}

Controlador::~Controlador() {}

Controlador* Controlador::getInstancia() {
  if (instancia == NULL) instancia = new Controlador();

  return instancia;
}

void Controlador::eliminarElemento(int id) {
  Elemento* e;

  bool noEncontre = true;

  list<Elemento*>::iterator it = this->elementos.begin();

  while (noEncontre) {
    if ((*it)->getId() == id) {
      e = *it;

      noEncontre = false;
    }

    ++it;
  }

  this->elementos.remove(e);

  delete e;
}

void Controlador::agregarCapitulos(int idLib, set<DtCapitulo> capitulos) {
  Elemento* e;

  bool noEncontre = true;

  list<Elemento*>::iterator it = this->elementos.begin();

  while (noEncontre) {
    if ((*it)->getId() == idLib) {
      e = *it;

      noEncontre = false;
    }

    ++it;
  }

  Libro* libro = dynamic_cast<Libro*>(e);

  libro->agregarCapitulos(capitulos);
}