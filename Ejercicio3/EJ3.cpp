#include "EJ3.h"
#include <iostream>

using namespace std;

int bucle_for(){
    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }
    return 0;
}


int bucle_while(){
    int num, i = 1;

    cout << "Ingrese un número: ";
    cin >> num;

    while (i <= 10) {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    }
    return 0;
}

int bucle_do_while(){
    int num, i = 1;

    cout << "Ingrese un número: ";
    cin >> num;

    do {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    } while (i <= 10);

    return 0;
}

int breack(){
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            break;
        }
        cout << i << endl;
    }
    return 0;

}