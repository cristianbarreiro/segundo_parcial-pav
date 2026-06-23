#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include <list>
#include <string>

#include "Pelicula.h"
#include "Usuario.h"

using namespace std;

class Controlador {
 private:
  static Controlador* instancia;
  list<Pelicula*> peliculas;

  Controlador();
  ~Controlador();

 public:
  static Controlador* getInstancia();

  void responderComentario(int idP, string texto, int idC, Usuario* u);

  void eliminarPelicula(int idP);

};

#endif