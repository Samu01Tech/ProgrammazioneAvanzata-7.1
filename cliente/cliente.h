#ifndef __CLIENTE_H__
#define __CLIENTE_H__

#include <iostream>
#include <list>
#include "../ordine/ordine.h"
using namespace std;

class Ordine;
class Cliente{
    private:
        int idCliente;
        list<Ordine*> lpo;
        list<Ordine> lo;
    public: 
        Cliente(int _idCliente);
        ~Cliente();
        void addOrdine(Ordine* po);
        //void addOrdine(Ordine o); SBAGLIATO
        void addOrdine(int idordine);
        friend ostream& operator << (ostream& os, const Cliente& c);
};

ostream& operator << (ostream& os, const Cliente& c);

#endif
