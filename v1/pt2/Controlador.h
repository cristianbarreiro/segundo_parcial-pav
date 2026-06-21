#ifndef CONTROLADOR_H
#define CONTROLADOR_H

#include <list>
#include <string>

using namespace std;

class Usuario;

class Controlador{
private:
    static Controlador* instancia;
    list<Usuario*> usuarios;

    Controlador();
    ~Controlador();

public:
    static Controlador* getInstancia();

    void eliminarUsuarioYReservas(string email);

    list<string> verPeliculasReservadasConDebito(string email);
};

#endif