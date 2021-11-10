#include <iostream>
#include "cliente.h"
#include "../ordine/ordine.h"

Cliente::Cliente(int _idCliente){
    idCliente = _idCliente;
    cout << "Cliente Creato" << endl;
};

Cliente::~Cliente(){
    cout << "Cliente Cancellato" << endl;
};

ostream& operator << (ostream& os, const Cliente& c){
    os << "ID Cliente [" << c.idCliente << "]";

    //scorro gli ordini con l'itteratore
    list<Ordine*>::const_iterator iter;
    for(iter = c.lpo.begin(); iter != c.lpo.end(); iter++){
        os << *iter;
    }
    return os;
};
