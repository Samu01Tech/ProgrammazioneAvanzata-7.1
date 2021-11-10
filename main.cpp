#include <iostream>
#include "ordine/ordine.h"
#include "cliente/cliente.h"
using namespace std;



int main() {
    Ordine o1(1245);
    Ordine o2(3456);
    Ordine o3(5678);

    Cliente c(999);
    cout << c << endl;
  return 0;
} 