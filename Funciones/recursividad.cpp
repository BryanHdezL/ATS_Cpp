//Ejemplo de Funciones recursivas (Numero Factorial).

/*
Factorial de un numero  3! = 3 * 2!
    0! = 1
    factorial(n) =  1                   , si n=0
                    n*factorial(n-1)    , si n>0
*/

//Librerias
#include <iostream>
using namespace std;

//Pototipos de las funciones.
int factorial(int);

//Funcion principal.
int main(){
    //Variables de la funcion.
    int num;
    //Leer valores capturados por el ususario.
    cout<<"Numero: ";
    cin >> num;
    //Acciones del programa.
    cout << "El factorial es: " << factorial(num) << endl;
    return 0;
}

//Funcion para calcular el factorial
int factorial(int n){
    if(n==0){
        n = 1;
    }else{
        n *= factorial(n - 1);
    }
    return n;
}