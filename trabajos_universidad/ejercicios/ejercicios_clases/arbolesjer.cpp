#include <iostream>
using namespace std;

struct nodo {                            // estructura del nodo
    int dato;
    nodo* izq;
    nodo* der;
};

nodo* nuevonodo(int dato){               // funcion para crear un nuevo nodo
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
    raiz=insertar(raiz,45);
    insertar(raiz,15);
    insertar(raiz,79);
    insertar(raiz,10);
    insertar(raiz,20);
    insertar(raiz,55);
    insertar(raiz,90);
    insertar(raiz,12);
    insertar(raiz,50);
    insertar(raiz,49);
    insertar(raiz,47);

    cout<<"Arbol creado"<<endl;
    cout<<"Recorrido en inorden: ";
    inorden(raiz);
    cout<<endl;

    

    return 0;
}