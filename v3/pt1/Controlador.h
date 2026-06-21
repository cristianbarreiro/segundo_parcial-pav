#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include <list>
#include <set>

using namespace std;

class Elemento;
class DtCapitulo;

class Controlador {
 private:
  static Controlador* instancia;

  list<Elemento*> elementos;

  Controlador();

 public:
  static Controlador* getInstancia();

  void eliminarElemento(int id);

  void agregarCapitulos(int idLib, set<DtCapitulo> capitulos);

  ~Controlador();
};

#endif