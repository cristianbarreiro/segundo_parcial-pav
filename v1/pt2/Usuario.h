#ifndef USUARIO_H
#define USUARIO_H

#include <list>
#include <string>

#include "Debito.h"
#include "Reserva.h"

using namespace std;

class Usuario {
 private:
  string email;
  list<Reserva*> reservas;

 public:
  Usuario();
  Usuario(string email);
  ~Usuario();

  string getEmail();

  list<string> pelisReservadasConDebito();
};

#endif