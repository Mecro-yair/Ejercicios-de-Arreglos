/*
3. Contar la ocurrencia de una letra específica en una cadena de entrada
*/
#include <iostream>
#include <string.h>
#include <windows.h>
using namespace std;
char letraEspecifica;
void comparar(string texto,char letraEspecifica){
	SetConsoleOutputCP(CP_UTF8);
	int n=0,contRep=0;
	while(texto[n]!='\0'){
		n++;
	}
	for(int i = 0;i<n;i++){
		if(texto[i]==letraEspecifica){
			contRep++;
		}
	}
	cout<<"La numero de repeticion dado por la letra especifica es "<<contRep;
}
int main(){
	
	string texto;
	cout<<"Digite un texto: "; getline(cin,texto);
	cout<<"Digite una letra especifica: "; cin>>letraEspecifica;
	comparar(texto,letraEspecifica);
	return 0;
}