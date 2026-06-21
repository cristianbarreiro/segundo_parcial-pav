#ifndef ELEMENTO_H
#define ELEMENTO_H

#include <string>

using namespace std;

class Elemento{
protected:
    int elemId;
    string nombre;

public:
    Elemento();
    Elemento(int elemId,string nombre);

    int getElemId();

    virtual ~Elemento();
};

#endif