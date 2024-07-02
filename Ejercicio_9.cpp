/*
9. Rotar las componentes de un arreglo una posición hacia la derecha
    12345    51234
*/
#include <iostream>
using namespace std;
int main(){
	int n=0;
	string numero;
	cout<<"Digite un numero:\n"; cin>>numero;
	while(numero[n]!='\0'){
		n++;
	}
	
	for(int i=0;i<=n;i++){
		cout<<numero[n-i];
	}
	return 0;
}
