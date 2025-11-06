#include <iostream>
using namespace std;

struct nodo {                            
    int dato;
    nodo* izq;
    nodo* der;
};

nodo* nuevonodo(int dato){           
    nodo* nuevonodo= new nodo();
    nuevonodo->dato=dato;
    nuevonodo->izq=nullptr;
    nuevonodo->der=nullptr;
    return nuevonodo;
};

nodo* insertar(nodo* raiz, int dato){
    if (raiz==nullptr){
        return nuevonodo(dato);
    }
    if (dato<raiz->dato){
        raiz->izq=insertar(raiz->izq,dato);
    } else {
        raiz->der=insertar(raiz->der,dato);
    }
    return raiz;
}

void inorden(nodo* raiz){
    if(raiz!=nullptr){
        inorden(raiz->izq);
        cout<<raiz->dato<<" ";
        inorden(raiz->der);
    }
}


int main(){
    nodo* raiz=nullptr;
    int datos[]= {25, 13, 11, 16, 37, 38,31,15,32,29,23};
    for (int dato : datos) {
        raiz = insertar(raiz, dato);
    }
    cout<<"Elementos del arbol de mayor a menor: ";
    inorden(raiz);
    cout<<endl;

    return 0;
}