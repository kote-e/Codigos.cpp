#include <iostream>
using namespace std;

main(){
    int numero;
    cout << "ingresa un numero: ";
    cin >> numero;
    if (numero % 2 == 0){
        cout << "el numero es par" << endl;
    }
    else{
        cout << "el numero es impar" << endl;
    }
    return 0;
}