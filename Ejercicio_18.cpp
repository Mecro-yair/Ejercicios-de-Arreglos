
#include <conio.h>
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

bool balanceoParentesis(const string& frase) {
    int contador = 0;
    int longitu = 0;
    
    while (frase[longitu]!='\0'){
    	longitu++;
	}


    for (int i = 0; i < longitu; i++) {
        if (frase[i] == '(') {
            contador++; 
        } else if (frase[i] == ')') {
            contador--;

            if (contador < 0) {
                return false;
            }
        }
    }

    return contador == 0;
}
int main() {
	SetConsoleOutputCP(CP_UTF8);
    string frase1 = "(ccc(ccc)cc((ccc(c))))";
    string frase2 = ")ccc(ccc)cc((ccc(c)))((";

    if (balanceoParentesis(frase1)) {
        cout << "En la frase \"" << frase1 << "\" si tiene un correcto balanceo de parentesis" << endl;
    } else {
        cout << "En la frase \"" << frase1 << "\" no tiene un balanceo correcto de parentesis." << endl;
    }

    if (balanceoParentesis(frase2)) {
        cout << "En la frase \"" << frase2 << "\" si tiene un correcto balanceo de parentesis" << endl;
    } else {
        cout << "En la frase \"" << frase2 << "\" no tiene un balanceo correcto de parentesis." << endl;
    }
	getch();
    return 0;
}
