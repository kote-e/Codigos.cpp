#include <iostream>
using namespace std;

int main(){
    int a,b,c, mayor;
    cout << "ingresa tres numeros: ";
    cin >> a >> b >> c;
    mayor = a;
    if(b > mayor) mayor = b;
    else if(c > mayor) mayor = c;
    cout << "el mayor es: " << mayor << endl;
    return 0;

}