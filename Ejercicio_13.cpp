#include <iostream>
#include <conio.h>
using namespace std;

void mistrcpy(char str1[], const char str2[]) {
    int i = 0;
    while(str2[i] != '\0') {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
}

int main() {
    char str1[100]; 
    char str2[] = "Hola mundo";
    
    mistrcpy(str1, str2);
    
    cout << "str1 es: " << str1 << endl;
    getch();
    return 0;
}


