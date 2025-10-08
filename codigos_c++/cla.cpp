#include <iostream>
using namespace std;


class Persona{
    // Atributos
    public:
    string nombre;
    int edad;
    string trabajo;
    string ciudad;


    // Métodos
    void saludar(){
        cout << "Hola, mi nombre es " << nombre << ", tengo " << edad << " años, trabajo como " << trabajo << " y vivo en " << ciudad << "." << endl;
    }
    void despedirse(){
        cout << "Adiós, fue un placer conocerte." << endl;
    }

};

int main (){
    Persona p1; // Crear un objeto de la clase Persona
    p1.nombre = "Ana";
    p1.edad = 30;
    p1.trabajo = "Ingeniera";
    p1.ciudad = "Madrid";
    p1.saludar();
    p1.despedirse();

    Persona p2; // Crear otro objeto de la clase Persona
    cout << "Escribe el nombre de la segunda persona: ";
    cin >>  p2.nombre;
    cout << "Escribe la edad de la segunda persona: ";
    cin >>  p2.edad;
    cout << "Escribe el trabajo de la segunda persona: ";
    cin >>  p2.trabajo;
    cout << "Escribe la ciudad de la segunda persona: ";
    cin >>  p2.ciudad;
    p2.saludar();
    p2.despedirse();

    return 0;
}