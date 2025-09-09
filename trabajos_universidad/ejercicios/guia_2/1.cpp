#include <iostream>
using namespace std;

int potencia(int base, int exponente){
    int resultado;

    if(exponente == 0) return 1;
    else {
        resultado= potencia(base, exponente - 1) * base;}
    return resultado;
}
// 2**6 = 2 * 2**5 = 64
// 2**5 = 2 * 2**4 = 32
// 2**4 = 2 * 2**3 = 16
// 2**3 = 2 * 2**2 = 8
// 2**2 = 2 * 2**1 = 4
// 2**1 = 2 * 2**0 = 2
// 2**0 = 1

int main(){
    int bas, expon;
    cout << "Ingrese la base: ";
    cin >> bas;
    cout << "Ingrese el exponente: ";
    cin >> expon;
    cout << "El resultado es: " << potencia(bas, expon) << endl;

    return 0;
}