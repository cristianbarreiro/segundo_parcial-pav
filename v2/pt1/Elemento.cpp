#include "Elemento.h"

Elemento::Elemento(){}

Elemento::Elemento(int elemId,string nombre){

    this->elemId=elemId;
    this->nombre=nombre;
}

Elemento::~Elemento(){}

int Elemento::getElemId(){

    return this->elemId;
}