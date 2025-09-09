#include <iostream>
using namespace std;

int cuadrado(int numero){
    if (numero == 1){
        return 1;
    }
    else {
        return cuadrado(numero - 1) + (1+ ((numero -1) *2));

    } 
    // 4**2= 16   1+3+5+7=16
    // 3**2= 9    1+3+5=9


}

int main(){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << "El cuadrado de " << n << " es: " << cuadrado(n) << endl;
    return 0;
}