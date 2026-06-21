#include "Pelicula.h"
#include "Comentario.h"

Pelicula::Pelicula(){}

Pelicula::Pelicula(int id, string nombre){

    this->id = id;
    this->nombre = nombre;
}

Pelicula::~Pelicula(){

    list<Comentario*>::iterator it;

    while(this->comentarios.size() > 0){

        it = this->comentarios.begin();

        this->comentarios.remove(*it);

        delete *it;
    }
}

int Pelicula::getId(){

    return this->id;
}

void Pelicula::responderComentario(string texto,
                                   int idC,
                                   Usuario* u){

    Comentario* respuesta =
        new Comentario(Comentario::generarId(),
                       texto,
                       u);

    this->comentarios.push_back(respuesta);

    Comentario* responde;

    bool noEncontre = true;

    list<Comentario*>::iterator it = this->comentarios.begin();

    while(noEncontre){

        if((*it)->getId() == idC){

            responde = *it;

            noEncontre = false;
        }

        ++it;
    }

    responde->agregarRespuesta(respuesta);
}