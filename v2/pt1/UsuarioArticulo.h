#ifndef USUARIOARTICULO_H
#define USUARIOARTICULO_H

class Articulo;

class UsuarioArticulo{
private:
    Articulo* articulo;
    int cantLecturas;

public:
    UsuarioArticulo();
    UsuarioArticulo(Articulo* articulo);

    int getElemId();

    int getCantLecturas();

    ~UsuarioArticulo();
};

#endif