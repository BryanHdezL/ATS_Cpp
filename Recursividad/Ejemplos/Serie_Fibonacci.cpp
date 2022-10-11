// Ejemplo #2.

/***********************************************************************
Definir la naturaleza recursiba de la serie Fibonacci:
    0 1 1 2 3 5 8 13 21
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Prototipos de las funciones.
int fibonacci(int);

//Funcion principal.
int main(){
    //Variables de la funcion.
    int n;
    //Acciones del programa.
    cout << "N: ";
    cin >> n;
    cout << "Fibonacci: 0 1 ";
    for (int i = 2; i < n + 1; i++){
        cout << fibonacci(i) << " ";
    }
    //Fin del programa.
    return 0;
}

int fibonacci(int n){
    //Caso base
    if ((n == 0) || (n == 1)) {
        return n;
    }
    // Caso recursivo
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

