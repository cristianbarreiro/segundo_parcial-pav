#include "UsuarioElemento.h"
#include "Elemento.h"

UsuarioElemento::UsuarioElemento(){}

UsuarioElemento::UsuarioElemento(Elemento* elemento){
    this->elemento = elemento;
}

UsuarioElemento::~UsuarioElemento(){}

int UsuarioElemento::getElemId(){
    return this->elemento->getElemId();
}

void UsuarioElemento::actualizarUltimaLectura(){
}