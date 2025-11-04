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


nodo* eliminar(nodo* raiz, int numero){
    nodo* aux;
    if (raiz == nullptr){
        return raiz;
    }
    if (numero < raiz->dato){
        raiz->izq = eliminar(raiz->izq, numero);
    }
    else if (numero > raiz->dato){
        raiz->der = eliminar(raiz->der, numero);
    }
    else {
        if (raiz-> izq == nullptr && raiz->der == nullptr){
            delete raiz;
            return nullptr;
        }
        else if (raiz->izq == nullptr){
            aux = raiz->der;
            delete raiz;
            return aux;
        }
        else if(raiz->der == nullptr){
            aux = raiz->izq;
            delete raiz;
            return aux;
        }
        else {
            aux = raiz->der;
            while (aux->izq != nullptr){
                aux = aux->izq;
            }
            raiz->dato = aux->dato;
            raiz->der = eliminar(raiz->der, aux->dato);
        }
        
    }
    return raiz;
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

    int opcion;
    do{
        cout << "\n¿Qué quieres hacer?\n";
        cout << "1. Eliminar un nodo\n";
        cout << "2. Añadir un nodo\n";
        cout << "3. Calcular altura del árbol\n";
        cout << "4. Mostrar recorrido inorden\n";
        cout << "5. Salir\n";
        cin >> opcion;

        if (opcion == 1){
            int numero;
            cout << "Ingrese el número a eliminar: ";
            cin >> numero;
            raiz = eliminar(raiz, numero);
            cout << "Nodo eliminado.\n";
        }
        else if (opcion == 2){
            int numero;
            cout << "Ingrese el número a añadir: ";
            cin >> numero;
            raiz = insertar(raiz, numero);
            cout << "Nodo añadido.\n";
        }
        else if (opcion == 3){
            // Aquí podrías implementar la función para calcular la altura del árbol
            cout << "Funcionalidad no implementada aún.\n";
        }
        else if (opcion == 4){
            cout << "Recorrido en inorden: ";
            inorden(raiz);
            cout << endl;
        }
}
    while (opcion != 5);


    return 0;
}