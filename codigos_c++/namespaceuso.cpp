#include <iostream>
using namespace std;
namespace miespaciodenombres{  // Namespace declaration, funciones de matemáticas
    int suma(int a, int b) {
        return a + b;
    }
    int resta(int a, int b) {
        return a - b;
    }
    int multiplicacion(int a, int b) {
        return a * b;
    }
    int division(int a, int b) {
        if (b == 0) {
            cout << "no se puede dividir por cero!" << endl;
            return 0; 
        }
        return a / b;
    }
}

int main() {
    using namespace miespaciodenombres;  // Using the namespace
    int a = 10, b = 5;
    
    cout << "Suma: " << suma(a, b) << endl;
    cout << "Resta: " << resta(a, b) << endl;
    cout << "Multiplicación: " << multiplicacion(a, b) << endl;
    cout << "División: " << division(a, b) << endl;

    return 0;
}