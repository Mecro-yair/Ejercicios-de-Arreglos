#include <iostream>
#include <cstring> 
#include <conio.h>
using namespace std;

bool verificaApellido(char nomCompleto[], char apellido[]) {
	int n,m;
	while(nomCompleto[n]!='\0'){
		n++;
	}
	while(apellido[m]!='\0'){
		m++;
	}

    int tamNombre = n;
    int tamApellido =m;

    
    for (int i = 0; i <= tamNombre - tamApellido; i++) {
        bool match = true;

        for (int j = 0; j < tamApellido; j++) {
            if (nomCompleto[i + j] != apellido[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return true;
        }
    }
    return false;
}

int main() {
    char nomCompleto[] = "Juan Perez";
    char apellido[] = "Perez";

    if (verificaApellido(nomCompleto, apellido)) {
        cout << "El apellido '" << apellido << "' pertenece al nombre completo '" << nomCompleto << "'." << endl;
    } else {
        cout << "El apellido '" << apellido << "' no pertenece al nombre completo '" << nomCompleto << "'." << endl;
    }
	getch();
    return 0;
}
