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
// 4**2 = 16 = 7 + 5 + 3 + 1
// 3**2 = 9 = 5 + 3 + 1
// 2**2 = 4 = 3 + 1
// 1**2 = 1 = 1

// cuadrado(4) = cuadrado(3) + 7 = 16
// cuadrado(3) = cuadrado(2) + 5 = 9
// cuadrado(2) = cuadrado(1) + 3 = 4
// cuadrado(1) = 1


int main(){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << "El cuadrado de " << n << " es: " << cuadrado(n) << endl;
    return 0;
}