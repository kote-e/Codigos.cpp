#include <iostream>
#include <cmath>
using namespace std;

main(){
    float a;
    cout << "Ingrese un numero: "; 
    cin >> a;
    cout << "El valor absoluto de " << a << " es: " << fabs(a) << endl;
    cout << "El valor redondeado de " << a << " es: " << round(a) << endl;
    return 0;
}