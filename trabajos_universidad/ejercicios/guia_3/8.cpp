# include <iostream>
using namespace std;


int suma(int *a, int *b, int *resultado){
    *resultado = *a + *b;
    return *resultado;
}

int main(){
    int num1, num2, res;
    cout << "Ingrese dos numeros: ";
    cin >> num1 >> num2;
    res = suma(&num1, &num2, &res);
    cout << "La suma es: " << res << endl;
    return 0;

}