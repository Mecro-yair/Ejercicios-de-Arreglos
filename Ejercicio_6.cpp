/*
6. Calcular la suma de componentes de índice par e impar en un arreglo.
*/
#include <iostream>
using namespace std;
int main(){
	int sumaPar=0,sumaImpar=0,n;

	cout<<"Cantidad de numeros del arreglo : ";
	cin>>n;	

	
	int arreglo[n];
	
	for (int i=0;i<n;i++) {
		cout<<"Ingrese un Numero en el indice ("<<i<<"): ";
		cin>>arreglo[i];
		if(i%2==0){
			sumaPar+=arreglo[i];
		}else{
			sumaImpar+=arreglo[i];
		}
    }
    cout<<"La suma de los componentes de los indices pares es "<<sumaPar;
    cout<<"\nLa suma de los componentes de los indices impares es "<<sumaImpar;
	return 0;
}
