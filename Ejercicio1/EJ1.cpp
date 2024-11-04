#include "EJ1.h"
#include<iostream>
#include<string>

using namespace std;

int varGlobal = 10;

int variable () {

    string nombre;
    int edad;
    double altura;
    char genero;
    bool esEstudiante;

    cout << "Ingrese su nombre: ";
    cin >> nombre;

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese su altura: ";
    cin >> altura;

    cout << "Ingrese su genero (H/M): ";
    cin >> genero;

    cout << "Es usted estudiante? (1/0): ";
    cin >> esEstudiante;

    cout << "Hola " << nombre << "! Tienes " << edad << " años, ";

    if (edad < 18) {
        cout << "eres menor de edad. ";
    } else {
        cout << "eres mayor de edad, ";
    }

    cout <<" mides " << altura << ", tu genero es " << genero <<
        " y ";
    if (esEstudiante) {
        cout << "eres estudiante.";
    }
    else {
        cout << "no eres estudiante." << endl;
    }

    cout << "La variable global es: " << varGlobal << endl;

    return 0;
}


