# include <iostream>
using namespace std;

int intercambio(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
    return 0;
}

int main(){
    int i, j;
    cout << "Ingrese dos numeros: ";
    cin >> i >> j;
    intercambio(&i, &j);
    cout << "Los numeros intercambiados son: " << i << " y " << j << endl;
    return 0;
}