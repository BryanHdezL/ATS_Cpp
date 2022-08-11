// Busqueda Secuencial.

// A[5] = {3,4,2,1,5}; dato → 4.

#include <iostream>
using namespace std;

int main(){
    int A[] = {3, 4, 2, 1, 5};
    int dato, i = 0;
    char band = 'F';
    dato = 10;
    //Busqueda secuancial.
    while ((band == 'F') && (i < 5)){
        if (A[i] == dato){
            band = 'V';
        }
        i++;
    }
    //Resultado de la busqueda.
    if (band == 'F'){
        cout << "El numero a buscar no existe en el arreglo." << endl;
    } else if (band = 'V'){
        cout << "El numero a sido encontrado en la posicion #" << i - 1 << endl;
    }
    return 0;
}