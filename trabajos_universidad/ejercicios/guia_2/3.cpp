#include <iostream>
using namespace std;

int suma(int numero){
    if (numero == 1){
        return 1;
    }
    else {
        return numero + suma(numero - 1);
    }
}
// suma (6) = 6 + suma(5) = 21
// suma(5) = 5 + suma(4) = 15
// suma(4) = 4 + suma(3) = 10
// suma(3) = 3 + suma(2) = 6
// suma(2) = 2 + suma(1) = 3
// suma(1) = 1

int main(){
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "La suma de los numeros desde 1 hasta " << numero << " es: " << suma(numero) << endl;
    return 0;
}