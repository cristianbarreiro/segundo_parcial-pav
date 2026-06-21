#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include <list>
#include <set>

using namespace std;

class Usuario;
class Elemento;
class DtUsuario;
class DtElemento;
enum TipoElemento;

class Controlador {
 private:
  static Controlador* instancia;

  list<Usuario*> usuarios;
  list<Elemento*> elementos;

  Controlador();

 public:
  static Controlador* getInstancia();

  set<DtUsuario*> listarUsuarios();

  void altaElemento(DtElemento dte, TipoElemento tipo);

  ~Controlador();
};

#endif