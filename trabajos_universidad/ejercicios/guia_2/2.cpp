#include <iostream>
using namespace std;

int cantidad_dijitos(int a){
    if (a < 0) {
        a = -a;
    }
    if (a < 10) {
        return 1;
    }
    else {
        return 1 + cantidad_dijitos(a / 10);}
}
// funcion(100) = 1 + funcion(10) = 3
// funcion(10) = 1 + funcion(1) = 2
// funcion(1) = 1

int main(){
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "La cantidad de dijitos de " << numero << " es: " << cantidad_dijitos(numero) << endl;
    return 0;
}