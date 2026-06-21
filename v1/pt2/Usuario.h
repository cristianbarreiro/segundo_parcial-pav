#ifndef USUARIO_H
#define USUARIO_H

#include <list>
#include <string>

using namespace std;

class Reserva;

class Usuario{
private:
    string email;
    list<Reserva*> reservas;

public:
    Usuario();
    Usuario(string email);
    ~Usuario();

    string getEmail();

    list<string> pelisReservadasConDebito();
};

#endif