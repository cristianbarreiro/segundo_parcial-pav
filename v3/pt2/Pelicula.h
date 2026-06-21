#ifndef PELICULA_H
#define PELICULA_H

#include <list>
#include <string>

using namespace std;

class Comentario;
class Usuario;

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