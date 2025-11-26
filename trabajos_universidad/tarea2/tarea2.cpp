#include <iostream>
using namespace std;


void desplegarAdyacencia() {
    // imprimir la matriz de adyacencia. Debe recibir como parámetro la matriz a imprimir.
}

void desplegarIncidencia() {
    // imprimir la matriz de incidencia. Debe recibir como parámetro la matriz a imprimir.
}

void gradoVertice() {
    // debe desplegar el grado de un vértice entregado como parámetro a la función

}

void desplegarAdyacenciaDirigida() {
    // imprimir la matriz de adyacencia dirigida. Debe recibir como parámetro la matriz a imprimir.
}

void desplegarIncidenciaDirigida() {
    // imprimir la matriz de incidencia dirigida. Debe recibir como parámetro la matriz a imprimir.
}


int main(){
    int opcion;
    do{
        cout << "\n\n----- MENU -----\n";
        cout << "1. Mostrar matriz de adyacencia NO dirigida\n";
        cout << "2. Mostrar matriz de incidencia NO dirigida\n";
        cout << "3. Mostrar matriz de adyacencia dirigida\n";
        cout << "4. Mostrar matriz de incidencia dirigida\n";
        cout << "5. Obtener grado de un vertice (NO dirigido)\n";
        cout << "6. Salir\n";
        cout << "Ingrese opcion: ";
        cin >> opcion;

        switch(opcion){
            case 1:
                desplegarAdyacencia();
                break;
            case 2:
                desplegarIncidencia();
                break;
            case 3:
                desplegarAdyacenciaDirigida();
                break;
            case 4:
                desplegarIncidenciaDirigida();
                break;
            case 5:
                gradoVertice();
                break;
            case 6:
                cout << "Saliendo del programa...\n";
                break;
            default :
                cout << "Opcion invalida. Intente de nuevo.\n";
        }

    } while(opcion != 6);

} 