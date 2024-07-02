/*
4. Leer una secuencia de nombres, ordenarlos alfabéticamente y presentarlos.
*/
#include <iostream>
using namespace std;

int main(){
	int n;
	int arreglo[20];
	int i,j,aux;
	
	cout<<"PROGRAMA PARA ORDENAR ELEMNTOS DE ARREGLO" <<endl;
	cout<<"ORDEN ASCENDENTE\n"<<endl;
	
	do{
		cout<<"Elementos del arreglo(max 20): ";
		cin >>n;
	}while(n<=0 || n>20);
	
	cout << "\nIngreso de los "<<n<<" elementos al arreglo "<<endl;
	for(n=0;i<n;i++){
		cout<<"Ingrese Elemento ("<<i+1<<"):";
		cin>>arreglo[i];
	}
	
	for (i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if (arreglo[i]>arreglo[j]){
				aux=arreglo[i];
				arreglo[i]= arreglo[j];
				arreglo[j] = aux;
			}
		}
	}
	cout<< "\n\nArreglo ya ordenado de forma ASCENDENTE" << endl;
	for
	 (i=0;i<n;i++){
		cout<<"Elemento ("<<i+1<<") = "<<arreglo[i]<<endl;
	}
	cout<<endl;
	return 0;
}     