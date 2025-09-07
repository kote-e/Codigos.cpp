#include <iostream>
using namespace std;

main(){
    int edad;
    cout << "ingrese su edad: ";
    cin >> edad;
    if (edad < 12){
        cout << "eres es un niño" << endl;
    }
    else if (edad >= 12 && edad <= 18){
        cout << "eres un adolescente" << endl;
    }
    else if (edad >= 19 && edad < 35){
        cout << "eres un adulto joven" << endl;
    }
    else{
        cout << "eres un adulto" << endl;
    }
    return 0;
}