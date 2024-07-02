/*
7. Invertir un arreglo e imprimirlo.
Es ambiguo , casi vuelo.
*/
#include <iostream>
using namespace std;
int main(){
	int n;
	cout <<"Digite la cantidad de numeros a digitar: "; cin>>n;
	int arreglo[n];
	
	for (int i=0;i<n;i++){
		cout<<"Digite un numero ("<<i+1<<"): "; cin >>arreglo[i];
	}
	for (int i=n-1;i>=0;i--){
		cout<<arreglo[i]<<" ";
	}
	return 0;
}