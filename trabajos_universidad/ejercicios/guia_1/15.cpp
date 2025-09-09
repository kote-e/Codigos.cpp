#include <iostream>
using namespace std;

int main(){
    string contraseña ="contrase", contraseña_ingresada;
    do{
        cout << "ingrese la contraseña: ";
        cin >> contraseña_ingresada;

        if (contraseña_ingresada.length()!= 8){
            cout << "la contraseña debe tener 8 caracteres" << endl;
        }
        else if(contraseña_ingresada != contraseña){
            cout << "contraseña incorrecta, intente de nuevo" << endl;
        }
    }while(contraseña_ingresada.length()!= 8 && contraseña_ingresada != contraseña);
    cout << "contraseña correcta" << endl;
    
}