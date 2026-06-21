#include "Controlador.h"
#include "Usuario.h"

Controlador* Controlador::instancia = NULL;

Controlador::Controlador(){}

Controlador::~Controlador(){}

Controlador* Controlador::getInstancia(){
    if(instancia == NULL)
        instancia = new Controlador();

    return instancia;
}

void Controlador::eliminarUsuario(string email){

    Usuario* usuario;
    bool noEncontre = true;

    list<Usuario*>::iterator it = this->usuarios.begin();

    while(noEncontre){
        if((*it)->getEmail() == email){
            usuario = *it;
            noEncontre = false;
        }
        ++it;
    }

    this->usuarios.remove(usuario);

    delete usuario;
}

void Controlador::leerElementoYaLeido(string email,int elemId){

    Usuario* usuario;
    bool noEncontre = true;

    list<Usuario*>::iterator it = this->usuarios.begin();

    while(noEncontre){
        if((*it)->getEmail() == email){
            usuario = *it;
            noEncontre = false;
        }
        ++it;
    }

    usuario->leerElementoYaLeido(elemId);
}