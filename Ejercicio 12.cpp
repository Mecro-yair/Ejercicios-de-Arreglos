/*
12.Implementar una función que reciba un arreglo, su longitud y retorne true si el mismo se encuentra 
ordenado, false en caso contrario.
AMBIGUO,NO ESPECIFICA SI DEBE SER DE MAYOR A MENOR O DE MENOR A MAYOR.
*/
#include <iostream>
#include <windows.h>
using namespace std;

bool ordenado(int arreglo[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        if (arreglo[i] > arreglo[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int tam;
    cout << "Digite la longitud del arreglo: ";
    cin >> tam;
    int arreglo[tam];
    cout << "Digite los Numeros del arreglo:" << endl;
    for (int i = 0; i < tam; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> arreglo[i];
    }
    
    if (ordenado(arreglo, tam)) {
        cout << "El arreglo Digitado está ordenado." << endl;
    } else {
        cout << "El arreglo Digitado no está ordenado." << endl;
    }

    return 0;
}
