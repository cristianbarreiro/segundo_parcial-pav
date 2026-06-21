#ifndef PELICULA_H
#define PELICULA_H

#include <string>

using namespace std;

class Pelicula{
private:
    int id;
    string nombre;

public:
    Pelicula();

    Pelicula(int id, string nombre);

    ~Pelicula();

    string getNombre();
};

#endif