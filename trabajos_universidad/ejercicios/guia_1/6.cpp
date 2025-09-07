#include <iostream>
using namespace std;

main(){
    int factorial=1, numero;
    do{cout << "ingresa un numero: ";
    }
    while(numero<0);
    cin >> numero;
    for(int i=1; i<=numero; i++){
        factorial = factorial * i;
    }
    cout << "el factorial de " << numero << " es: " << factorial << endl;
    return 0;

}