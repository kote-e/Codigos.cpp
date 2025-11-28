// solo funciona en Windows xd 

#include <iostream>
#include <conio.h> 
#include <windows.h> 
using namespace std;

void limpiar() { 
    system("cls"); 
}


void desplegarAdyacencia(int matriz[8][8]) {
    string ar[8]= {{"V1"}, {"V2"}, {"V3"}, {"V4"}, {"V5"}, {"V6"}, {"V7"}, {"V8"}};
    cout << "Matriz de adyacencia " << endl;
    cout<< "    V1 V2 V3 V4 V5 V6 V7 V8"<< endl;
    cout << "   -------------------------" << endl;
    for (int j=0; j<8; j++){
        cout<< ar[j] << "| ";
        for(int k= 0; k <8; k++ ){
            cout << matriz[j][k]<< "  ";
        }
        cout<< endl;
    }
    cout << endl;
}

void desplegarIncidencia() {
    // imprimir la matriz de incidencia. Debe recibir como parámetro la matriz a imprimir.
}

void gradoVertice() {
    // debe desplegar el grado de un vértice entregado como parámetro a la función

}


int main(){
    const int aristas = 12;
    const int vertices = 8;

    int matrizad[vertices][vertices]= {0}; // Matriz de adyacencia 
    int matrizinc[vertices][aristas]= {0}; // Matriz de incidencia

    int listaristas[aristas][2]= {        // me gusta el nombre de esta matriz xd, es que lista termina en a y aristas empieza con a, creo que es chistoso :3
        {1,2}, {1,3}, {2,4}, {3,4}, {3,5}, {4,6}, 
        {5,7}, {7,8}, {5,5}, {2,3}, {6,8}, {3,6}
    };


    // Inicializar las matrices de adyacencia e incidencia
    for (int i=0; i < aristas; i++){
        int acaesta= listaristas[i][0];      // acaesta = acaesta está conectada, creo que el nombre si es descriptivo :)
        int acatambien= listaristas[i][1];   // acatambien = acaesta también está conectada, jsjsj creo que esta también

        matrizad[acaesta -1][acatambien -1]=1;
        matrizad[acatambien -1][acaesta -1]=1;

        matrizinc[acaesta -1][i]=1;
        matrizinc[acatambien -1][i]=1;
    }

    int matrizadDirigida[vertices][vertices] = {0}; // Matriz de adyacencia dirigida
    int matrizincDirigida[vertices][aristas] = {0}; // Matriz de incidencia dirigida

    int listaristasdirigida[5][2]= {                // si {x,y} es una arista dirigida, entonces x->y
        {3,2}, {3,6}, {6,4}, {5,7}, {7,5}
    };

    // Inicializar las matrices de adyacencia e incidencia dirigidas
    for (int i=0; i < 5; i++){
        int acaesta= listaristasdirigida[i][0];       // acaesta = acaesta está saliendo
        int acatambienbien= listaristasdirigida[i][1];    // acatambienbien = acaesta también está entrando

        matrizadDirigida[acaesta -1][acatambienbien -1]=1;

        matrizincDirigida[acaesta -1][i]=1;    // Salida
        matrizincDirigida[acatambienbien -1][i]=-1; // Entrada
    }




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

        cout << "         MENU      \n\n";

        for (int i = 0; i < total; i++) {
            if (i == seleccion){
                cout << "> " << opciones[i] << endl;
            }
            else{
                cout << "  " << opciones[i] << endl;
            }
        }

        int tecla = getch();               // getch() captura la tecla presionada
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
                    desplegarAdyacencia(matrizad);
                    break;
                case 1:
                    desplegarIncidencia();
                    break;
                case 2:
                    desplegarAdyacencia(matrizadDirigida);
                    break;
                case 3:
                    
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