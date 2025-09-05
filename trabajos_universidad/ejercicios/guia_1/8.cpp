#include <iostream>
using namespace std;

main(){
    int numero1, numero2, numero3, promedio;
    cout << "ingresa el primer numero: ";
    cin >> numero1;
    cout << "ingresa el segundo numero: ";
    cin >> numero2;
    cout << "ingresa el tercer numero: ";
    cin >> numero3;
    promedio = (numero1 + numero2 + numero3) / 3;
    cout << "el promedio de los tres numeros es: " << promedio << endl;
    return 0;
}