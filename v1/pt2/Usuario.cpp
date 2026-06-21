#include "Usuario.h"
#include "Reserva.h"
#include "Debito.h"

Usuario::Usuario(){}

Usuario::Usuario(string email){
    this->email = email;
}

Usuario::~Usuario(){

    list<Reserva*>::iterator it;

    while(this->reservas.size() > 0){
        it = this->reservas.begin();

        this->reservas.remove(*it);

        delete *it;
    }
}

string Usuario::getEmail(){
    return this->email;
}

list<string> Usuario::pelisReservadasConDebito(){

    list<string> pelis;

    list<Reserva*>::iterator it;

    for(it = this->reservas.begin();
        it != this->reservas.end();
        ++it){

        if(Debito* d = dynamic_cast<Debito*>(*it)){
            pelis.push_back(d->getNombrePeli());
        }
    }

    return pelis;
}