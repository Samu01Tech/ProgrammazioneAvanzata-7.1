#ifndef __CLIENTE_H__
#define __CLIENTE_H__

#include <iostream>
#include <list>
#include "../ordine/ordine.h"
using namespace std;

class Cliente{
    private:
        int idCliente;
        list<Ordine*> lpo;
    public: 
        Cliente(int _idCliente);
        ~Cliente();
        friend ostream& operator << (ostream& os, const Cliente& c);
};

ostream& operator << (ostream& os, const Cliente& c);

#endif