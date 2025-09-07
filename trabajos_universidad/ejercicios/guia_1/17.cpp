#include <iostream>
#include <string>
#include <cmath>
using namespace std;

main(){
    string num1, num2;
    cout << "ingrese dos puntos del tipo x,y: ";
    cin >> num1 >> num2;
    
    int x1 = stoi(num1.substr(0, num1.find(',')));
    int y1 = stoi(num1.substr(num1.find(',') + 1, num1.length() - 1));
    int x2 = stoi(num2.substr(0, num2.find(',')));
    int y2 = stoi(num2.substr(num2.find(',') + 1, num2.length() - 1));
    cout << "la distancia entre los puntos es: " << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) << endl;
    return 0;
        
}