#include <iostream>
#include <cmath>
using namespace std;

main(){
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    cout << "la potencia de " << a << " elevado a " << b << " es: " << pow(a,b) << endl;
    cout << "la raiz cuadrada de " << a << " es: " << sqrt(a) << endl;
    return 0;
}