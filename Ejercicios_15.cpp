/*
15. Generar la función mistrcmp(str1,str2) que compara dos cadenas y retorna los resultados 0 si las 
cadenas son iguales, 1 si la cadena str1 >str2, -1 si la cadena str2>str1. No usar las funciones de 
String.h
*/

#include <iostream>
#include <conio.h>
using namespace std;

int mistrcmp(const char str1[], const char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] > str2[i]) {
            return 1;
        } else if (str1[i] < str2[i]) {
            return -1;
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0;
    } else if (str1[i] == '\0') { 
        return -1;
    } else {
        return 1;
    }
}

int main() {
    char str1[] = "Hola";
    char str2[] = "Prof";
    
    if (mistrcmp(str1, str2) == 0) {
        cout <<"En la cadena "<<str1<<" y "<<str2<<" las cadenas son iguales" << endl;
    } else if (mistrcmp(str1, str2) == 1) {
        cout << "En la cadena "<<str1<<" y "<<str2<<" str1 es mayor que str2" << endl;
    } else {
        cout << "En la cadena "<<str1<<" y "<<str2<<" str2 es mayor que str1" << endl;
    }

    getch();
    return 0;
}

