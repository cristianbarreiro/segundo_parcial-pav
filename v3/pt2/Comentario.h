#ifndef COMENTARIO_H
#define COMENTARIO_H

#include <list>
#include <string>

using namespace std;

class Usuario;

class Comentario{
private:
    int id;
    string texto;

    list<Comentario*> respuestas;

    Usuario* usuario;

public:
    Comentario();

    Comentario(int id, string texto, Usuario* usuario);

    ~Comentario();

    static int generarId();

    int getId();

    void agregarRespuesta(Comentario* respuesta);
};

#endif