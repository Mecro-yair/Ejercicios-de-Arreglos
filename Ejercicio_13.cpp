/*
13. Generar la función mistrcpy(str1,str2) que copia str2 en str1. No usar la funciones de String.h 
*/
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
void mistrcpy(char *str1, const char *str2) {
    while(*str2) {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}

int main() {
    char str1[100]; 
    char str2[] = "Hola mundo";
    
    
    mistrcpy(str1, str2);
    
    cout<<"str1 es: "<<str1;
    
    return 0;
}



