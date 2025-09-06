#include <iostream>
using namespace std;

main(){
    int numero, cantidad, cantidadu=0, positivos=0, negativos=0, ceros=0;
    cout << "Ingrese la cantidad de numeros a procesar: ";
    cin >> cantidad;

    do{
        cout << "Ingrese un numero: ";
        cin >> numero;
        if(numero > 0){
            positivos++;
        } else if(numero < 0){
            negativos++;
        } else {
            ceros++;
        }
        cantidadu++;
    }
    while(cantidadu < cantidad);
    cout << "Cantidad de positivos: " << positivos << endl;
    cout << "Cantidad de negativos: " << negativos << endl; 
    cout << "Cantidad de ceros: " << ceros << endl;
    return 0;
}