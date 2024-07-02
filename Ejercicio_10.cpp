/*
10. Generar 30 números aleatorios entre 100 y 1000 guardarlos en un arreglo y calcular estadísticas de 
tendencia central media, mediana y moda.

moda: lo  que se repite:bucle: arreglo[i]==arreglo[j]-->contModa++;

rand() % (max - min + 1) + min
rand() % (1000 - 100 + 1) + 100

*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int longitud = 30;

void numAleatorio(int arreglo[], int tam, int min, int max) {
    for (int i = 0; i < tam; i++) {
        arreglo[i] = rand() % (max - min + 1) + min;
    }
}

double calcularMedia(int arreglo[], int tam) {
    int suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += arreglo[i];
    }
    return suma / (double)tam;
}

void ordenarArreglo(int arreglo[], int tam) {
    for (int i = 0; i < tam - 1; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (arreglo[i] > arreglo[j]) {
                int temp = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = temp;
            }
        }
    }
}

double calcularMediana(int arreglo[], int tam) {
    ordenarArreglo(arreglo, tam);
    if (tam % 2 == 0) {
        return (arreglo[tam / 2 - 1] + arreglo[tam / 2]) / 2.0;
    } else {
        return arreglo[tam / 2];
    }
}

int calcularModa(int arreglo[], int tam) {
    int maxContador = 0, moda = arreglo[0];
    for (int i = 0; i < tam; i++) {
        int contador = 0;
        for (int j = 0; j < tam; j++) {
            if (arreglo[j] == arreglo[i]) {
                contador++;
            }
        }
        if (contador > maxContador) {
            maxContador = contador;
            moda = arreglo[i];
        }
    }
    return moda;
}

int main() {
    srand(time(0));

    int numeros[longitud];

    numAleatorio(numeros, longitud, 100, 1000);

    cout << "Los numeros aleatorios son :" << endl;
    for (int i = 0; i < longitud; i++) {
        cout << numeros[i] << " ";
        cout << endl;
    }
    

    double media = calcularMedia(numeros, longitud);
    cout << "La Media en este caso es: " << media << endl;

    double mediana = calcularMediana(numeros, longitud);
    cout << "La Mediana en este caso es: " << mediana << endl;

    int moda = calcularModa(numeros, longitud);
    cout << "La Moda en este caso es: " << moda << endl;

    return 0;
}


