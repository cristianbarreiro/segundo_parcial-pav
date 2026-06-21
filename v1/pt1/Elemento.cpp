#include "Elemento.h"

Elemento::Elemento(){}

Elemento::Elemento(int elemId){
    this->elemId = elemId;
}

Elemento::~Elemento(){}

int Elemento::getElemId(){
    return this->elemId;
}