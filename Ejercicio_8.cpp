/*
8. Comprobar si un número de 10 cifras es capicúa usando un vector
*/
#include <iostream>
using namespace std;
int main(){
	string numero;
	cout<<"Digite el numero de 10 cifras: "; cin>>numero;
	if (numero[0]==numero[9]&&numero[1]==numero[8]&&numero[2]==numero[7]&&numero[3]==numero[6]&&numero[4]==numero[5]){
		cout<<"Si, es capicúa";
	}else{
		cout<<"No, no es capicúa";
	}
}