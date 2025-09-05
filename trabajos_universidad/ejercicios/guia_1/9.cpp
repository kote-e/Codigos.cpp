#include <iostream>
using namespace std;

main(){
    int base, altura;
    cout << "Ingrese la base del triangulo: ";
    cin >> base;
    cout << "Ingrese la altura del triangulo: ";
    cin >> altura;
    cout << "El area del triangulo es: " << (base * altura) / 2 << endl;
    return 0;
}