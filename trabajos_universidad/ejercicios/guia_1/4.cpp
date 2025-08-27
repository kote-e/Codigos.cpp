#include <iostream>
using namespace std;

main(){
    int longitud, ancho, area;
    cout << "ingresa la longitud y el ancho del rectangulo: ";
    cin >> longitud >> ancho;
    area = (longitud * ancho);
    cout << "el area del rectangulo es: " << area << endl;
    return 0;
}
