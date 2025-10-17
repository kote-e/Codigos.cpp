#include <iostream>
using namespace std;

int main() {
    string nombre;
    cout << "Escribe tu nombre: ";
    cin >> nombre; // Lee una palabra (sin espacios)
    cout << "Hola, " << nombre << "!" << endl;

    
    cout << "Escribe tu nombre completo: ";

getline(cin, nombre); // Lee una línea completa (con espacios)
    cout << "Hola, " << nombre << "!" << endl;
    return 0;
}