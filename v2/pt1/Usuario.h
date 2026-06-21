#ifndef USUARIO_H
#define USUARIO_H

#include <list>
#include <set>
#include <string>

using namespace std;

class UsuarioElemento;
class UsuarioArticulo;
class DtUsuario;

class Usuario {
 private:
  string email;
  string nombre;

  list<UsuarioElemento*> usuarioElementos;
  list<UsuarioArticulo*> usuarioArticulos;

 public:
  Usuario();
  Usuario(string email, string nombre);

  DtUsuario* getDtUsuario();

  ~Usuario();
};

#endif