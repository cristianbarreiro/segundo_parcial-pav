#ifndef USUARIO_H
#define USUARIO_H

#include <string>

using namespace std;

class Usuario{
private:
    string email;

public:
    Usuario();

    Usuario(string email);

    ~Usuario();
};

#endif