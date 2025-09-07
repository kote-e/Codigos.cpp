#include <iostream>
using namespace std;

int main(){
    string contraseña ="contrasena", contraseña_ingresada;
    do{
        cout << "ingrese la contraseña: ";
        cin >> contraseña_ingresada;
        if(contraseña_ingresada != contraseña){
            cout << "contraseña incorrecta, intente de nuevo" << endl;
        }
    }while(contraseña_ingresada != contraseña);
    cout << "contraseña correcta" << endl;
    
}