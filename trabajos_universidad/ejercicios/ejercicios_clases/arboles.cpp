#include <iostream>
using namespace std;

struct nodo {
    int dato;
    nodo* izq;
    nodo* der;
};

nodo* vrearnodo(int dato){
    nodo* nuevonodo= new nodo();
    nuevonodo->dato=dato;
    nuevonodo->izq=nullptr;
    nuevonodo->der=nullptr;
    return nuevonodo;
};

void preorden(nodo* raiz){
    if(raiz!=nullptr){
        cout<<raiz->dato<<" ";
        preorden(raiz->izq);
        preorden(raiz->der);
    }
}

void inorden(nodo* raiz){
    if(raiz!=nullptr){
        inorden(raiz->izq);
        cout<<raiz->dato<<" ";
        inorden(raiz->der);
    }
}

void postorden(nodo* raiz){
    if (raiz!=nullptr){
        postorden(raiz->izq);
        postorden(raiz->der);
        cout<<raiz->dato<<" ";
    }
}

// SI ESTA ORDENADO COMO ARBOL BINARIO DE BUSQUEDA
void max( nodo* raiz){
    if (raiz!=nullptr){
        max(raiz->der);
        cout<<raiz->dato<<" ";
        max(raiz->izq);
        
    }
}


int main(){
    nodo* raiz=vrearnodo(1);
    raiz->izq=vrearnodo(2);
    raiz->der=vrearnodo(3);
    raiz->izq->izq=vrearnodo(4);
    raiz->izq->der=vrearnodo(5);

    cout<<"Recorrido en preorden: ";
    preorden(raiz);
    cout<<endl;

    cout<<"Recorrido en inorden: ";
    inorden(raiz);
    cout<<endl;

    cout<<"Recorrido en postorden: ";
    postorden(raiz);
    cout<<endl;

    cout<<"Elementos del arbol de mayor a menor: ";
    max(raiz);
    cout<<endl;

    return 0;
}