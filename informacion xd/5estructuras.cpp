#include <iostream>
using namespace std;

int main() {

    // If / Else  
    int edad; 
    cout << "Ingresa tu edad: ";
    cin >> edad;

    if (edad >= 18) {
        cout << "Eres mayor de edad." << endl;
    } else {
        cout << "Eres menor de edad." << endl;
    }

    // If / Else If / Else
    int nota;
    cout << "Ingresa tu nota: ";
    cin >> nota;

    if (nota >= 90) {
        cout << "Excelente!" << endl;
    } else if (nota >= 60) {
        cout << "Aprobado." << endl;
    } else {
        cout << "Reprobado." << endl;
    }

    // Switch  
    int opcion;
    cout << "Menú:\n1. Jugar\n2. Configuración\n3. Salir\nElige una opción: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            cout << "Iniciando juego..." << endl;
            break;
        case 2:
            cout << "Abriendo configuración..." << endl;
            break;
        case 3:
            cout << "Saliendo del programa." << endl;
            break;
        default:
            cout << "Opción no válida." << endl;
    }

    return 0;
}