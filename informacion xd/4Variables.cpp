/*
"Tipos de datos básicos en C++:"
Tipo	Ejemplo	       Descripción	               Rango
int	    42	           Enteros	                   -2.147.483.648 a 2.147.483.647
float	3.14	       Decimal (precisión simple)  ±3.4e±38
double	3.141592       Decimal (alta precisión)    ±1.7e±308
char	'A'	           Carácter	                   1 byte
bool	true / false   Lógico	                   1 byte
string	"hola"	       Texto                       variable


"Operadores"

Aritméticos:
+, -, *, /, %, ++, --
Relacionales:
==, !=, <, >, <=, >=
Lógicos:
&& (y), || (o), ! (no)


"Funciones matemáticas (<cmath>):"

#include <cmath>
pow(2,3);    // 8 (2 elevado a 3)
sqrt(9);     // 3 (raíz cuadrada)
abs(-5);     // 5 (valor absoluto)
ceil(2.1);   // 3 (redondea hacia arriba)
floor(2.9);  // 2 (redondea hacia abajo)
round(2.5);  // 3 (redondea al entero más cercano)
log10(100);  // 2 (logaritmo base 10)

 */



#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int edad = 20;               // Número entero
    float altura = 1.85;         // Número decimal (coma flotante)
    char letra = 'A';            // Un solo carácter
    string nombre = "Camilo";    // Texto (requiere <string>)
    bool estudiante = true;      // true o false

    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Altura: " << altura << endl;
    cout << "Letra: " << letra << endl;
    cout << "Estudiante: " << estudiante << endl;

    // Uso de operadores
    int suma = 6 + 5;
    int producto = 7 * 2;
    bool esMayor = edad > 18;
    

    // Uso de funciones matemáticas
    pow(2,3);    
    sqrt(9);     
    abs(-5);     
    ceil(2.1);   
    floor(2.9);  
    log10(100);  
    cout << "Edad más 5: " << suma << endl;
    cout << "Raíz cuadrada de 9: " << sqrt(9) << endl;

    return 0;
}