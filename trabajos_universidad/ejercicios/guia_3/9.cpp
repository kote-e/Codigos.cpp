# include <iostream>
using namespace std;

int main(){
    double a= 5.5;
    void *p;
    p = &a;
    cout << "El valor de a es: " << *(static_cast<double*>(p)) << endl;
    return 0;
}