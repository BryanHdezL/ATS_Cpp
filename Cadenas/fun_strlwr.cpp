// Funcion strlwr() -> Transforma una cadena a minusculas.

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char cad[] = "Bryan";
    strlwr(cad);
    cout << cad << endl;
    return 0;
}