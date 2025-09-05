#include <iostream>
using namespace std;

int potencia(int base, int exponente){
    int resultado;

    if(exponente == 0) return 1;
    else {
        resultado= potencia(base, exponente - 1) * base;}
    return resultado;
}


main(){
    int bas, expon;
    cout << "Ingrese la base: ";
    cin >> bas;
    cout << "Ingrese el exponente: ";
    cin >> expon;
    cout << "El resultado es: " << potencia(bas, expon) << endl;

    return 0;

}