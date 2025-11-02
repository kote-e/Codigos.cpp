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

      int num1, num2, sum;
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    sum = num1 + num2;
    cout << "La suma es: " << sum << endl;
    
    return 0;
}