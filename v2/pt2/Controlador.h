#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include <list>
#include <string>

using namespace std;

class Usuario;
class DtMejor;
class DtFecha;

class Controlador{
private:
    static Controlador* instancia;
    list<Usuario*> usuarios;

    Controlador();

public:
    static Controlador* getInstancia();

    DtMejor* peliMejorPuntuadaPorUsuario(string email);

    list<string> usuariosQuePuntuaronEnFecha(DtFecha fecha);

    ~Controlador();
};

#endif