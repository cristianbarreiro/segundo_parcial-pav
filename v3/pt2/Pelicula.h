#ifndef PELICULA_H
#define PELICULA_H

#include <list>
#include <string>

using namespace std;

#include "Comentario.h";
#include "Usuario.h";

class Pelicula{
private:
    int id;
    string nombre;

    list<Comentario*> comentarios;

public:
    Pelicula();

    Pelicula(int id, string nombre);

    ~Pelicula();

    int getId();

    void responderComentario(string texto, int idC, Usuario* u);
};

#endif