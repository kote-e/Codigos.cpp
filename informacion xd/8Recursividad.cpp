#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;       // Caso base
    else
        return n * factorial(n - 1); // Llamada recursiva
}

void cuentaRegresiva(int n) {
    if (n == 0) {
        cout << "Despegue!";
    } else {
        cout << n << " ";
        cuentaRegresiva(n - 1);
    }
} 

int main() {
    cout << "el factorial de 5 es: " <<factorial(5); // 120
    cout << endl;

    cout << "Cuenta regresiva:" << endl;
    cuentaRegresiva(5);   // 5 4 3 2 1 Despegue!
    cout << endl;

    return 0;
}