#include <iostream>
using namespace std;


class lista {
    public:
    int dato;
    lista* siguiente;
    lista* anterior;
};

void leer(lista* imprimir, string dir){
    if (dir == "a"){
        for (int i=1; i<4; i++){
            cout << imprimir->dato << endl;
            imprimir = imprimir->siguiente;
        }
    }
    else if (dir == "b"){
        for (int i=1; i<4; i++){
            cout << imprimir->dato << endl;
            imprimir = imprimir->anterior;
        }
    }
    else{
        cout << "direccion no valida" << endl;
    }
     return;
}

int main() {
    string direccion;
    lista* nodo1 = new lista();
    lista* nodo2 = new lista();
    lista* nodo3 = new lista();

    nodo1->dato = 1;
    nodo1->siguiente = nodo2;
    nodo1->anterior = nullptr;
    nodo2->dato = 2;
    nodo2->siguiente = nodo3;
    nodo2->anterior = nodo1;
    nodo3->dato = 3;
    nodo3->siguiente = nullptr;
    nodo3->anterior = nodo2;

    cout << "introduce la direccion del nodo que quieres ver (nodo1, nodo2, nodo3): ";
    cin >> direccion;

    if (direccion == "a"){
        leer(nodo1, direccion);
    }else if (direccion == "b"){
        leer(nodo3, direccion);}
    
    // Liberar memoria
    delete nodo1;
    delete nodo2;
    delete nodo3;
    return 0;
}