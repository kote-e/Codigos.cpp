#include <iostream>
using namespace std;

int mcd(int a, int b){
    int mayor;
    if (a<b){
        mayor=b;
        b=a;
        a= mayor;
    }
    if (b==0){
        return a;
    }else{
        return mcd(b, a%b);
    }
}
int main(){
    int numero1, numero2;
    cout<< "escribe 2 numeros: ";
    cin >> numero1 >> numero2;
    cout << "el MCD de " << numero1 << " y " << numero2 << " es " << mcd(numero1, numero2);
}
