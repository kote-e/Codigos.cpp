/* ¿Qué es un puntero?: Un puntero guarda la dirección de memoria de otra variable.

int a = 5;    // variable normal
int *p;       // puntero a entero
p = &a;       // guarda la dirección de a
*/

#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *p = &a;

    cout << "Direccion de a: " << &a << endl;
    cout << "Direccion almacenada en p: " << p << endl;
    cout << "Valor de a usando *p: " << *p << endl;

    
    *p = 10; // Modifica el valor de a a través del puntero
    cout << "Nuevo valor de a: " << a << endl;
    return 0;
}