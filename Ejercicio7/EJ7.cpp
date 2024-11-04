#include "EJ7.h"
#include <iostream>

using namespace std;




int referencias() {
    int numero = 100;
    cout << "Valor original: " << numero << endl;

    modificarValor(numero);
    cout << "Valor modificado: " << numero << endl;

    return 0;
}

void modificarValor(int& x) {
    x *= 2;
}