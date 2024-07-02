#include <iostream>
#include <string.h>
#include <conio.h>
#include <windows.h>
using namespace std;

string caracterMayuscula(string cadena){
	//Se calcula el tamaño del arreglo
	int tam= sizeof(cadena)/sizeof(cadena[0]);
	
	for (int i=0;i<tam;i++){
		if(i==0){
			cadena[i]=toupper(cadena[i]);
		}else if(cadena[i]==' '){
			cadena[i+1]=toupper(cadena[i+1]);
		}
	}
	return cadena;
}
int main(){
	SetConsoleOutputCP(CP_UTF8);
	cout<<"Palabra a convertir segun el ejercicio:\ncáceres patrimonio de la humanidad\n"<<endl;
	string palabra="cáceres patrimonio de la humanidad\n";
	cout<<caracterMayuscula(palabra);
	//defino una variable para una cadena para el usuario
	string cadenaDigitada;
	
	cout<<"\nAhora digite usted una cadena:\n"; getline(cin,cadenaDigitada);
	cout<<caracterMayuscula(cadenaDigitada);
	getch();
	return 0;
}

