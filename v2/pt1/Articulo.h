#ifndef ARTICULO_H
#define ARTICULO_H

#include "Elemento.h"

class Articulo : public Elemento{
private:
    string texto;

public:
    Articulo();

    Articulo(int elemId,string nombre,string texto);

    ~Articulo();
};

#endif