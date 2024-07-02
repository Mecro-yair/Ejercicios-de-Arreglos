/*
4. Leer una secuencia de nombres, ordenarlos alfabéticamente y presentarlos.
*/
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int n;
	
	string aux;
	int i,j;

	cout<<"PROGRAMA PARA ORDENAR NOMBRES DEL ARREGLO"<<endl;
	cout<<"ORDEN ASCENDENTE"<<endl<<endl;
	
	do {
		cout<<"Cantidad de nombres del arreglo : ";
		cin>>n;
		
	} while (n<=0 ||n>20);
	string arreglo[n];
	for (i=0;i<n;i++) {
		cout<<"Ingrese un Nombre ("<<i+1<<"): ";
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
	
	cout<<"\n\nLos Nombres ya ordenados de forma ASCENDENTE"<<endl;
	for (i=0;i<n;i++) {
		cout<<"Nombre ("<<i+1<<") = "<<arreglo[i]<<endl;
	}
	getch();
	return 0;
}   