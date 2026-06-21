#ifndef ARTICULO_H
#define ARTICULO_H

#include <list>

#include "Elemento.h"

using namespace std;

class UsuarioArticulo;
class UsuarioElemento;

class Articulo : public Elemento {
 private:
  list<UsuarioArticulo*> usuarioArticulos;
  list<UsuarioElemento*> usuarioElementos;

 public:
  Articulo();

  Articulo(int id);

  ~Articulo();
};

#endif