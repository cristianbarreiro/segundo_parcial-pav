#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include <list>
#include <string>

using namespace std;

class Pelicula;
class Usuario;

class Controlador {
 private:
  static Controlador* instancia;
  list<Pelicula*> peliculas;

  Controlador();

 public:
  static Controlador* getInstancia();

  void responderComentario(int idP, string texto, int idC, Usuario* u);

  void eliminarPelicula(int idP);

  ~Controlador();
};

#endif