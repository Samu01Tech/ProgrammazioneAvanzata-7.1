#ifndef __ORDINE_H__
#define __ORDINE_H__

#include <iostream>
using namespace std;

class Ordine{
    private:
        int idOrdine;

    public:
        Ordine(int _idOrdine);
        ~Ordine();
        friend ostream& operator <<(ostream& os,const Ordine& o);
};

ostream& operator <<(ostream& os,const Ordine& o);

#endif
