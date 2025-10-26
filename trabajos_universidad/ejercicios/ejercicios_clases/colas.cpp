/* Escriba un programa que tome una cola de números enteros, ingresados por consola, y
utilice una función recursiva para invertir el orden de los elementos en la cola. Luego,
muestre la cola resultante.*/

#include <iostream>
#include <queue>
using namespace std;

void imprimir_cola(queue<int> cola) {
    while (!cola.empty()) {
        cout << cola.front() << endl;
        cola.pop();
    }
}

queue<int> invertir_cola(queue<int> &cola) {
    if (cola.empty()) {
        return cola;
    }

    int elemento = cola.front();
    cola.pop();

    queue<int> cola_invertida = invertir_cola(cola);

    cola_invertida.push(elemento);
    return cola_invertida;
}


int main(){
    queue<int> numeros;
    queue<int> cola_invertida;

    while (true) {
        int numero;
        cout << "Ingresa un numero entero o -1 para terminar: ";
        cin >> numero;

        if (numero == -1) {
            break;
        }

        numeros.push(numero);
    }
    cola_invertida= invertir_cola(numeros);
    cout << "Cola invertida: " << endl;
    imprimir_cola(cola_invertida);

}