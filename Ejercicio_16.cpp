/*
16. Leer una línea de entrada. Descartar todos los símbolos excepto los dígitos. Convertir la cadena de 
dígitos en un entero y fijar el valor del entero a la variable n y finalmente sumarle 2 (las funciones 
atoi y isdigit te pueden ayudar para este propósito) Ejemplo: “En aproximadamente 120 días 
llegaremos al año 2022 y festejaremos” 1202022 -> 1202024
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string linea;
    cout << "Ingresa una línea de texto: ";
    getline(cin, linea);
        
    int n = 0;
    int suma = 2;


    for (int i = 0; i < linea.length(); i++) {
        if (isdigit(linea[i])) { 
            n = n * 10 + (linea[i] - '0'); 
        }
    }


    n += suma;
    cout << "El número encontrado en la línea es: " << n << endl;

    return 0;
}

