#include "EJ5.h"
#include <iostream>


using namespace std;

int localVar = 10;

int suma(int a, int b) {
    return a + b;
}

double suma(double a, double b) {
    return a + b;
}

int sumar() {
    int a = 5, b = 10;
    cout << "La suma de a + b es: " << a + b << endl;
    cout << "Variable local dentro de la función: " << localVar << endl;
    cout << "Suma de enteros: " << suma(5, 10) << endl;
    cout << "Suma de dobles: " << suma(5.5, 10.5) << endl;

    imprimirSuma(a, b);
    llamarFunciones();

    return 0;
}



void imprimirSuma(int a, int b) {
    cout << "La suma de " << a << " y " << b << " es: " << suma(a, b) << endl;
}

void llamarFunciones() {
    int num1 = 5, num2 = 10;
    imprimirSuma(num1, num2);
}

