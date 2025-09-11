#include <iostream>
#include  <string>
using namespace std;

int binarrio(int num){
    int resto= num%2;
    if (num> 0){
        return binarrio( num/2)*10 + resto;
    }
    else{
        return 0;
    }
}

int main(){
    int numero, bin;
    string result;
    cout << "ingresa un numero: ";
    cin >> numero;
    bin = binarrio(numero);
    result= to_string(bin);

    if(result.length()%4 != 0){
        while(result.length()%4 != 0){
            result.insert(0,"0");
        }
    }
    cout << "el numero "<< numero << " en binaario es: "<< result << endl;
    return 0;
}