#include <iostream>
using namespace std;

int main() {
    cout << "Hola" << endl;
    return 0;
}

"""
#include <iostream> → "Incluir librería" → agrega funciones de entrada/salida (cout, cin).

<iostream> significa input-output stream (flujo de entrada/salida).

using namespace std; → En C++ todo está organizado en "espacios de nombres". std es el espacio estándar que contiene cout, cin, string, etc.
Sin esto, tendrías que escribir std::cout cada vez.

int main() → Función principal: donde empieza el programa. int significa que devuelve un número entero (0 si todo salió bien).

{ ... } → Llaves → marcan el inicio y fin del bloque de código de la función.

cout << "Hola"; → cout = "character output" → muestra texto en pantalla.

<< envía datos hacia cout.

"Hola" → es una cadena de texto.

endl → salto de línea y vaciado del buffer.

return 0; → Indica que el programa terminó sin errores.
El 0 es un código de estado estándar para "éxito".
El punto y coma ; → indica el final de una instrucción. Cada instrucción debe terminar con ; en C++.
"""