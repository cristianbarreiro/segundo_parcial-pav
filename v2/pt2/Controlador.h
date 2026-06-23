#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include <list>
#include <string>

#include "Usuario.h"
#include "DtFecha"
#include "DtMejor"


using namespace std;

class Controlador {
 private:
  static Controlador* instancia;
  list<Usuario*> usuarios;

  Controlador();

 public:
  static Controlador* getInstancia();

  DtMejor* peliMejorPuntuadaPorUsuario(string email);

  list<string> usuariosQuePuntuaronEnFecha(DtFecha fecha);

  ~Controlador();
};

#endif