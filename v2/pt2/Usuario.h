#ifndef USUARIO_H
#define USUARIO_H

#include <list>
#include <string>

#include "DtMejor.h"
#include "Puntaje.h"
#include "DtFecha.h"

using namespace std;

class Usuario {
 private:
  string email;
  list<Puntaje*> puntajes;

 public:
  Usuario();
  Usuario(string email);
  ~Usuario();

  string getEmail();

  DtMejor* peliMejorPuntuada();

  bool puntuoEnFecha(DtFecha fecha);
};

#endif