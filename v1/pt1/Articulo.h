#ifndef ARTICULO_H
#define ARTICULO_H

class Articulo{
private:
    int elemId;

public:
    Articulo();
    Articulo(int elemId);
    ~Articulo();

    int getElemId();
};

#endif