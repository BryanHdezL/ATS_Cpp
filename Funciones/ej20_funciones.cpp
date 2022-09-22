//Ejercicio #20.

/***********************************************************************
Realice una funcion recursiva para la serie Fibonacci.
Nota: La serie Fibonacci esta formada por la secuencia de numeros:
    0, 1, 1, 3, 5, 8, 13, 21, 34, ...

    fibonacci(n) =  n                               , si n<2
                    fibonacci(n-1)+fibonacci(n-2)   , si n>=2
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Pototipos de las funciones.
int fibonacci(int);

//Funcion principal.
int main(){
    //Variables de la funcion.
    int numElementos;
    //Solicitar datos al usuario.
    cout << "Elementos: ";
    cin >> numElementos;
    cout << "\n\t Serie Fibonacci: ";
    for (int i = 0; i < numElementos; i++){
        cout << fibonacci(i) << ", ";
    }
        // Acciones del programa.
        return 0;
}

//Funcion fibonacci
int fibonacci(int n){
    if(n<2){
        return n;
    }else{
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}