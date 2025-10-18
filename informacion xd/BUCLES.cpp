#include <iostream>
using namespace std;

int main() {

    // Bucle While
    int contador = 1;

    while (contador <= 5) {
        cout << "Iteración número: " << contador << endl;
        contador++; // aumenta en 1
    }

    // do While
    int numero;
    do {
        cout << "Ingresa un número positivo: ";
        cin >> numero;
    } while (numero <= 0);

    cout << "Número válido: " << numero << endl;

    // Bucle For
    for (int i = 1; i <= 5; i++) {
        cout << "Valor de i: " << i << endl;

    return 0;
}