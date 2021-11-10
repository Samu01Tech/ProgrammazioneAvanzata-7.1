#include <iostream>
#include "ordine.h"
using namespace std;

Ordine::Ordine(int _idOrdine){
    idOrdine = _idOrdine;
    cout << "Ordine Creato" << endl;
}

Ordine::~Ordine(){
    cout << "Ordine Cancellato" << endl;
}

ostream& operator <<(ostream& os,const Ordine& o){
    os << "ID Ordine [" << o << "]";
    return os;
}
