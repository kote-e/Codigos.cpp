// solo funciona en Windows xd

#include <iostream>
#include <conio.h> 
#include <windows.h> 
using namespace std;

void limpiar() { 
    system("cls"); 
}


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

 string opciones[] = {
        "Mostrar matriz de adyacencia NO dirigida",
        "Mostrar matriz de incidencia NO dirigida",
        "Mostrar matriz de adyacencia dirigida",
        "Mostrar matriz de incidencia dirigida",
        "Obtener grado de un vertice (matriz NO dirigida)",
        "Salir"
    };

    int total = 6;
    int seleccion = 0;

    while (true) {

        limpiar(); // Limpiar la pantalla antes de mostrar el menú

        cout << "      MENU      \n\n";

        for (int i = 0; i < total; i++) {
            if (i == seleccion){
                cout << "> " << opciones[i] << endl;
            }
            else{
                cout << "  " << opciones[i] << endl;
            }
        }

        int tecla = getch(); // getch() captura la tecla presionada
        if (tecla == 0 || tecla == 224) {  // Las flechas siempre vienen en dos getch()
            int tecla2 = getch(); 

            if (tecla2 == 72) { // ↑
                seleccion--;
                if (seleccion < 0) seleccion = total - 1;
            }

            if (tecla2 == 80) { // ↓
                seleccion++;
                if (seleccion >= total) seleccion = 0;
            }
        }

        else if (tecla == 13) { // ENTER
            limpiar();
            cout << "Elegiste: " << opciones[seleccion] << "\n";

            switch(seleccion){
                case 0:
                    desplegarAdyacencia();
                    break;
                case 1:
                    desplegarIncidencia();
                    break;
                case 2:
                    desplegarAdyacenciaDirigida();
                    break;
                case 3:
                    desplegarIncidenciaDirigida();
                    break;
                case 4:
                    gradoVertice();
                    break;
                case 5:
                    cout << "Saliendo del programa...\n";
                    return 0;
                default :
                    cout << "Opcion invalida. Intente de nuevo.\n";
                    break;
            }
            system("pause");
        }
    }
    return 0;

}