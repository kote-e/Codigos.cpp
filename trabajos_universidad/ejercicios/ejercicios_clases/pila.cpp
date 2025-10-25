#include <iostream>
#include <stack>
using namespace std;

void imprimir_pila(stack<string> pila) {
    while (!pila.empty()) {
        cout << pila.top() << endl;
        pila.pop();
    }
}

int main(){
    stack<string> pila_operaciones;
    bool salir = false;
    string operacion;
    int opciones;

    while(!salir){
        cout << "ingresa la operacion que deseas guardar" << endl;
        cin >> operacion;
        pila_operaciones.push(operacion);

        cout << " que deseas hacer?, borrar ultima operacion (1), ingresar otra operacion (2), salir (3)" << endl;
        cin >> opciones;
        if (opciones == 1){
            if (!pila_operaciones.empty()){
                pila_operaciones.pop();
                cout << "ultima operacion borrada" << endl;
            } else {
                cout << "La pila esta vacia, no se puede borrar ninguna operacion." << endl;
            }
        } else if (opciones == 2){
            continue;
        } else if (opciones == 3){
            salir = true;
            cout << "las operaciones que realizaste son: " << endl;
        } else {
            cout << "opcion no valida" << endl;
    }
    imprimir_pila(pila_operaciones);
    }
}