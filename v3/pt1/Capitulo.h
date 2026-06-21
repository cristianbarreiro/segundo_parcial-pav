#ifndef CAPITULO_H
#define CAPITULO_H

#include <string>

using namespace std;

class Capitulo {
 private:
  int nroCap;
  string titulo;
  string texto;

 public:
  Capitulo();

  Capitulo(int nroCap, string titulo, string texto);

  ~Capitulo();
};

#endif