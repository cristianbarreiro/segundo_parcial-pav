#include "Comentario.h"

Comentario::Comentario(){}

Comentario::Comentario(int id,
                       string texto,
                       Usuario* usuario){

    this->id = id;
    this->texto = texto;
    this->usuario = usuario;
}

Comentario::~Comentario(){

    list<Comentario*>::iterator it;

    while(this->respuestas.size() > 0){

        it = this->respuestas.begin();

        this->respuestas.remove(*it);

        delete *it;
    }
}

int Comentario::generarId(){

    static int id = 0;

    id++;

    return id;
}

int Comentario::getId(){

    return this->id;
}

void Comentario::agregarRespuesta(Comentario* respuesta){

    this->respuestas.push_back(respuesta);
}