#ifndef USUARIO_H
#define USUARIO_H

#include <list>
#include <string>

using namespace std;

class UsuarioElemento;
class UsuarioArticulo;

class Usuario{
private:
    string email;

    list<UsuarioElemento*> usuarioElementos;
    list<UsuarioArticulo*> usuarioArticulos;

public:
    Usuario();
    Usuario(string email);
    ~Usuario();

    string getEmail();

    void leerElementoYaLeido(int elemId);
};

#endif