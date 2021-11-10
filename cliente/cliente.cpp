#include <iostream>
#include <list>
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
    os << "ID Cliente [" << c << "]";

    //scorro gli ordini con l'itteratore


    return os;
};
