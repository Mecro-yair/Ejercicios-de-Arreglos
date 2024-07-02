/*
11. Calcular la suma de elementos positivos y negativos en un arreglo.
*/
#include <iostream>
using namespace std;
int main(){
	int sumP=0;
	int sumN=0;
	int n;
	
	cout<<"Digite la cantidad de numeros a Digitar;\n";cin>>n;
	int numeros[n];
	for(int i=0;i<n;i++){
		cout<<"Digite un numero :\n"; cin>>numeros[i];
		if (numeros[i]<0){
			sumN+=numeros[i];
		}else if(numeros[i]>0){
			sumP+=numeros[i];
		}		
	}

	
	cout<<"La suma de los elementos positivos es : "<<sumP;
	cout<<"\nLa suma de los elementos negativos es : "<<sumN;
	return 0;
}