#include "Controlador.h"
#include "Usuario.h"
#include "DtUsuario.h"
#include "Articulo.h"
#include "Libro.h"

Controlador* Controlador::instancia=NULL;

Controlador::Controlador(){}

Controlador::~Controlador(){}

Controlador* Controlador::getInstancia(){

    if(instancia==NULL)
        instancia=new Controlador();

    return instancia;
}

set<DtUsuario*> Controlador::listarUsuarios(){

    set<DtUsuario*> usuariosDt;

    list<Usuario*>::iterator it;

    for(it=this->usuarios.begin();
        it!=this->usuarios.end();
        ++it){

        usuariosDt.insert((*it)->getDtUsuario());
    }

    return usuariosDt;
}

void Controlador::altaElemento(DtElemento dte,TipoElemento tipo){

    Elemento* e;

    if(tipo==ARTICULO)
        e=new Articulo(dte.getElemId(),
                       dte.getNombre(),
                       dte.getTexto());

    if(tipo==LIBRO)
        e=new Libro(dte.getElemId(),
                    dte.getNombre());

    this->elementos.push_back(e);
}