/*En C++, muchas funciones están dentro del espacio de nombres std.
Por ejemplo:
std::cout
std::cin
std::string

Puedes:
Usar using namespace std; → más corto, pero puede causar conflictos.
O usar el prefijo std:: → más seguro en proyectos grandes.
También puedes crear tus propios namespaces:
*/
#include <iostream>
using namespace std;
namespace Operaciones {
    int suma(int a, int b) { return a + b; }
}
int main() {
    cout << Operaciones::suma(5, 3); // 8
}
