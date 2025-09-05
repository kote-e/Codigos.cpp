#include <iostream>
using namespace std;

int main(){
    int grados_celsius, grados_fahrenheit;
    cout << "ingresa los grados celsius: ";
    cin >> grados_celsius;
    grados_fahrenheit = (grados_celsius * 9/5) + 32;
    cout << "los grados fahrenheit son: " << grados_fahrenheit << endl;
    return 0;
}