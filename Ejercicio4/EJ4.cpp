#include "EJ4.h"
#include <iostream>

using namespace std;

int array(){
    int numeros[10];

    for (int i = 0; i < 10; i++) {
        numeros[i] = i + 1;
    }
    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << endl;
    }

    return 0;
}