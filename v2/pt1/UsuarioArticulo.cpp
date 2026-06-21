#include "UsuarioArticulo.h"
#include "Articulo.h"

UsuarioArticulo::UsuarioArticulo(){}

UsuarioArticulo::UsuarioArticulo(Articulo* articulo){

    this->articulo=articulo;
    this->cantLecturas=0;
}

UsuarioArticulo::~UsuarioArticulo(){}

int UsuarioArticulo::getElemId(){

    return this->articulo->getElemId();
}

int UsuarioArticulo::getCantLecturas(){

    return this->cantLecturas;
}