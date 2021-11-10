#include <iostream>
#include "ordine.h"
using namespace std;

Ordine::Ordine(int _idOrdine){
    idOrdine = _idOrdine;
    pc = NULL;
    cout << "Ordine Creato" << endl;
}

Ordine::~Ordine(){
    cout << "Ordine Cancellato" << endl;
}

void Ordine::setCliente(Cliente* c){
    pc = c;
}

ostream& operator <<(ostream& os,const Ordine& o){
    os << "ID Ordine [" << o.idOrdine << "]";
    return os;
}
