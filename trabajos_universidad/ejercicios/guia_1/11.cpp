#include <iostream>
using namespace std;

int multiplicar(int a){
    for(int i=1; i<=10; i++){
        cout << a << " x " << i << " = " << a*i << endl;
    }
    return 0;
}

main(){
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    multiplicar(numero);
    return 0;
}