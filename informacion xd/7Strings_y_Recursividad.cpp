/* "Leer strings"
    cin >> nombre;           Lee hasta el primer espacio
    getline(cin, nombre);    Lee toda la línea completa



    */


#include <iostream>
using namespace std;

int main() {
    string nombre;
    cin >> nombre;          // Lee hasta el primer espacio
    getline(cin, nombre);   // Lee toda la línea completa



    // funciones con strings
    string texto = "Hola " + nombre;
    
    cout << texto.size();              // Largo del texto
    cout << texto[0];                  // Primer carácter


    texto.append(" :)");               // Agrega texto
    cout << "Texto modificado: " << texto << endl;

    bool estaVacio = texto.empty();    // ¿Está vacío?
    cout << "¿Está vacío?: " << (estaVacio ? "Sí" : "No") << endl;

    string sub =  texto.substr(0, 4);  // "Hola"
    cout << "Substring: " << sub << endl;

    size_t pos = texto.find("Hola");   // Retorna posición
    if (pos != string::npos) {
        cout << "'hola' encontrado en posición: " << pos << endl;
    } else {
        cout << "'hola' no encontrado" << endl;
    }

    return 0;
}
