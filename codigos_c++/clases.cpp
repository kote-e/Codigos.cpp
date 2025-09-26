#include <iostream>
using namespace std;


class Persona{
    // Atributos
    public:
    string nombre;
    int edad;
    string trabajo;
    string ciudad;

    // Constructor
    Persona(string n, int e, string t, string c){
        nombre = n;
        edad = e;
        trabajo = t;
        ciudad = c;
        
    }

    // Métodos
    void saludar(){
        cout << "Hola, mi nombre es " << nombre << ", tengo " << edad << " años, trabajo como " << trabajo << " y vivo en " << ciudad << "." << endl;
    }
    void despedirse(){
        cout << "Adiós, fue un placer conocerte." << endl;
    }

};

int main (){
    Persona p1 = Persona("Ana", 30, "Ingeniera", "Madrid"); // Crear un objeto de la clase Persona
    p1.saludar();
    p1.despedirse();


    Persona p2 = Persona("luiz", 40, "Contador", "Santiago"); // Crear otro objeto de la clase Persona
    p2.saludar();
    p2.despedirse();
  
    return 0;
}