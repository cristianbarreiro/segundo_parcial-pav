#ifndef USUARIO_H
#define USUARIO_H

#include <list>
#include <string>

using namespace std;

class Puntaje;
class DtMejor;
class DtFecha;

class Usuario{
private:
    string email;
    list<Puntaje*> puntajes;

public:
    Usuario();
    Usuario(string email);
    ~Usuario();

    string getEmail();

    DtMejor* peliMejorPuntuada();

    bool puntuoEnFecha(DtFecha fecha);
};

#endif