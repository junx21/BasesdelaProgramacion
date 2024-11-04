#include "EJ2.h"
#include<iostream>

using namespace std;

int age() {

    int edad;

    cout << "\n Introduce tu edad: ";
    cin >> edad;

    if (edad >= 18) {
        cout << "Eres mayor de edad." << endl;
    } else {
        cout << "Eres menor de edad." << endl;
    }

    return 0;
}

int operadores() {

    int n1 = 1;
    int n2 = 2;
    bool sol;

    cout << "\n n1 + n2" << n1 + n2 << endl;
    cout << "n1 == n2" << (n1 == n2) << endl;
    cout << "n1 ! n2" << (n1 != n2) << endl;

    sol = !(n1 == n2);
    cout << "sol = !(n1 == n2)\n" << sol << endl;

    return 0;
}
