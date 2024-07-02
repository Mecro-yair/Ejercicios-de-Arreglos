/*
2. Programa que haga "eco" de la entrada, poniendo cada palabra en una línea separada.
*/
#include <iostream>
#include <string.h>
#include <conio.h>
#include <windows.h>
using namespace std;

void ecoEco(string cadena){
	//Se calcula el tamaño del arreglo
	int n = 0;
	while (cadena[n]!='\0'){
		n++;
	}
	
	for (int i=0;i<n;i++){
      	if(cadena[i]!=' '){
			cout<<cadena[i];
	    }else{
	    	cout<<endl;
		}
	}

}
int main(){
	SetConsoleOutputCP(CP_UTF8);
	//defino una variable para una cadena para el usuario
	string cadenaDigitada;
	
	cout<<"\nDigite usted una cadena:\n"; getline(cin,cadenaDigitada);
	ecoEco(cadenaDigitada);
	getch();
	return 0;
}