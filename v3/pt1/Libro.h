#ifndef LIBRO_H
#define LIBRO_H

#include <list>
#include <set>

#include "Elemento.h"

using namespace std;

class Capitulo;
class UsuarioElemento;
class DtCapitulo;

class Libro : public Elemento {
 private:
  list<Capitulo*> capitulos;
  list<UsuarioElemento*> usuarioElementos;

 public:
  Libro();

  Libro(int id);

  ~Libro();

  void agregarCapitulos(set<DtCapitulo> capitulos);
};

#endif