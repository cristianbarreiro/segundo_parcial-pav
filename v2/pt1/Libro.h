#ifndef LIBRO_H
#define LIBRO_H

#include "Elemento.h"

class Libro : public Elemento{
public:
    Libro();

    Libro(int elemId,string nombre);

    ~Libro();
};

#endif