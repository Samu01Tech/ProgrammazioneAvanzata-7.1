#include <iostream>
#include "ordine/ordine.h"
#include "cliente/cliente.h"
using namespace std;



int main() {
    Ordine o1(1245);
    Ordine o2(3456);
    Ordine o3(5678);

    Cliente c(999);
    c.addOrdine(&o1);
    c.addOrdine(&o2);
    c.addOrdine(666);
    c.addOrdine(667);
    cout << c << endl;

    // ostream da modificare per stampare anche lo 
  return 0;
} 