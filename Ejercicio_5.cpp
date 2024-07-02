/*
5. Programa que lee n números, encuentra el mayor y el menor, y cuenta sus repeticiones.
*/

#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int n;
	int aux;
	int i,j,contMen,contMay;

	cout<<"Cantidad de numeros del arreglo : ";
	cin>>n;	

	
	int arreglo[n];
	
	for (i=0;i<n;i++) {
		cout<<"Ingrese un Numero ("<<i+1<<"): ";
		cin>>arreglo[i];
	}	
	for (i=0;i<n-1;i++) {
		for (j=i+1;j<n;j++){
			if (arreglo[i]>arreglo[j]) {
				aux=arreglo[i];
				arreglo[i]=arreglo[j];
				arreglo[j]=aux;
			}
		}
	}
	for (i=0;i<n;i++){
		if (arreglo[i]==arreglo[0]){
			contMen++;
		}else if(arreglo[i]==arreglo[n-1]){
			contMay++;
		}
	}
	cout<<"El mayor de los numeros dados es: "<<arreglo[n-1]<<" y se repite "<<contMay<<" veces\n";
	cout<<"El menor de los numeros dados es: "<<arreglo[0]<<" y se repite "<<contMen<<" veces";;
	getch();
	return 0;
}