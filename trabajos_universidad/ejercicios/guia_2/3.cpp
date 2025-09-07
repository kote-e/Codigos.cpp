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

int main(){
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "La suma de los numeros desde 1 hasta " << numero << " es: " << suma(numero) << endl;

    return 0;
}