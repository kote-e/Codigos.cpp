#include <iostream>
using namespace std;

int cuadrado(int numero){
    if (numero == 1){
        return 1;
    }
    else {
        return cuadrado(numero - 1) + (1+ ((numero -1) *2));

    }

}

int main(){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << "El cuadrado de " << n << " es: " << cuadrado(n) << endl;
    return 0;
}