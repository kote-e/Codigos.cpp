#include <iostream>
using namespace std;

main(){
    int amigos, piesas_roll, rolls;
    cout << "ingrese la cantidad de amigos: ";
    cin >> amigos;

    cout << "ingrese la cantidad de piezas por roll: ";
    cin >> piesas_roll;
    cout << "ingrese la cantidad de rolls: ";
    cin >> rolls;

    cout << "a cada amigo le toca " << (piesas_roll * rolls)/ amigos << " piezas" << endl;
    return 0;

}