#include <iostream>
#include <queue>
using namespace std;

void imprimir_cola(queue<int> cola) {
    while (!cola.empty()) {
        cout << cola.front() << endl;
        cola.pop();
    }
}

bool recorrer(queue<int> cola, int num){
    while(!cola.empty()){
        if (cola.front()==num){
            return true;
        }
        cola.pop();
    }
    return false;
}

int main(){
    queue<int> numeros;
    int largo;
    int nume;
    do{
        cout << "ingresa el largo de la cola (debe ser entre 5 y 10): ";
        cin >> largo;
        if (largo<5 || largo>10){
            cout << "Largo invalido. Intenta de nuevo." << endl;
        }
    } while (largo<5 || largo>10);

    for(int i=0; i<largo; i++){
        cout << "Ingresa el elemento " << i+1 << ": ";
        cin >> nume;
        bool igual = recorrer(numeros, nume);
        if (igual){
            cout << "El numero ya existe en la cola. Ingresa un numero diferente." << endl;
            i--;
        } else {
            numeros.push(nume);
    }
    }
    imprimir_cola(numeros);
    return 0;
}