#ifndef USUARIOELEMENTO_H
#define USUARIOELEMENTO_H

class Elemento;

class UsuarioElemento {
 private:
  Elemento* elemento;

 public:
  UsuarioElemento();
  UsuarioElemento(Elemento* elemento);
  ~UsuarioElemento();

  int getElemId();

  void actualizarUltimaLectura();
};

#endif