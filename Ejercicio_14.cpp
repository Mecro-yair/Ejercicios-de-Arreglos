/*
14. Generar la función mistrcat(str1,str2) que agrega str2 al final de str1. No usar las funciones de 
String.h
*/
#include <iostream>
#include <conio.h>
using namespace std;

void mistrcat(char str1[], const char str2[]) {
    int tam1 = 0;
    int tam2 = 0;

    while (str1[tam1] != '\0') {
        tam1++;
    }
    while (str2[tam2] != '\0') {
        tam2++;
    }

    for (int i = 0; i < tam2; i++) {
        str1[tam1 + i] = str2[i];
    }
    str1[tam1 + tam2] = '\0'; 
}

int main() {
    char str1[100] = "Mecro";
    char str2[] = " Vo";
    
    mistrcat(str1, str2);
    
    cout << "str1 es: " << str1 << endl;
    getch();
    return 0;
}
