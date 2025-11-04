#include <iostream>
using namespace std;

struct nodo {
    int dato;
    nodo* izq;
    nodo* der;
};
nodo* vrearnodo(int dato){               // funcion para crear un nuevo nodo
    nodo* nuevonodo= new nodo();
    nuevonodo->dato=dato;
    nuevonodo->izq=nullptr;
    nuevonodo->der=nullptr;
    return nuevonodo;
};

void inorden(nodo* raiz){
    if(raiz!=nullptr){
        inorden(raiz->izq);
        cout<<raiz->dato<<" ";
        inorden(raiz->der);
    }
}

nodo* eliminar(nodo* raiz){
    if (raiz==nullptr){
        return raiz;
    }
    
}

int main(){
    nodo* raiz=vrearnodo(45);
    raiz->izq=vrearnodo(15);
    raiz->der=vrearnodo(79);
    raiz->izq->izq=vrearnodo(10);
    raiz->izq->der=vrearnodo(20);
    raiz->der->izq=vrearnodo(55);
    raiz->der->der=vrearnodo(90);
    raiz->izq->izq->der=vrearnodo(12);
    raiz->der->izq->izq=vrearnodo(50);
    raiz->der->izq->izq->izq=vrearnodo(49);
    raiz->der->izq->izq->izq->izq=vrearnodo(47);

    cout<<"Arbol creado"<<endl;
    cout<<"Recorrido en inorden: ";
    inorden(raiz);


    return 0;
    

}