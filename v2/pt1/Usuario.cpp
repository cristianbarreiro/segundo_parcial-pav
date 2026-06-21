#include "Usuario.h"
#include "UsuarioElemento.h"
#include "UsuarioArticulo.h"
#include "DtUsuario.h"

Usuario::Usuario(){}

Usuario::Usuario(string email,string nombre){

    this->email=email;
    this->nombre=nombre;
}

Usuario::~Usuario(){

    list<UsuarioElemento*>::iterator itUE;

    while(this->usuarioElementos.size()>0){

        itUE=this->usuarioElementos.begin();

        this->usuarioElementos.remove(*itUE);

        delete *itUE;
    }

    list<UsuarioArticulo*>::iterator itUA;

    while(this->usuarioArticulos.size()>0){

        itUA=this->usuarioArticulos.begin();

        this->usuarioArticulos.remove(*itUA);

        delete *itUA;
    }
}