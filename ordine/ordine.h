#ifndef __ORDINE_H__
#define __ORDINE_H__

#include <iostream>
#include "../cliente/cliente.h"
using namespace std;

class Cliente;
class Ordine{
    private:
        int idOrdine;
        Cliente* pc;
    public:
        Ordine(int _idOrdine);
        ~Ordine();
        void setCliente(Cliente* pc);
        friend ostream& operator <<(ostream& os,const Ordine& o);
};

ostream& operator <<(ostream& os,const Ordine& o);

#endif
