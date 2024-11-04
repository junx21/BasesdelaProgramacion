#include "EJ8.h"
#include <iostream>
#define TAMANIO_MAXIMO 100

using namespace std;

const double PI = 3.14159;


enum Dias {DOMINGO, LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO};

int constantes() {
    cout << "Valor de PI: " << PI << endl;
    cout << "Tamaño máximo: " << TAMANIO_MAXIMO << endl;

    Dias hoy = MIERCOLES;
    cout << "Hoy es el día número: " << hoy << endl;

    typedef unsigned long enteroLargo;
    enteroLargo numeroGrande = 1234567890;
    cout << "Número grande: " << numeroGrande << endl;

    return 0;
}
