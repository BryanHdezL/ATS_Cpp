// Ejemplo #4.

/***********************************************************************
                        Recursividad vs Iteracion

Calcular la suma de los digitos de un numero N natural capturado por el 
usuario.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Prototipos de las funciones.
int sumaRecursiva(int);
int sumaIterativa(int);

//Funcion principal.
int main(){
    //Variables de la funcion.
    int n;
    //Acciones del programa.
    cout << "N: ";
    cin >> n;
    cout << "Suma recursiva: " << sumaRecursiva(n) << endl;
    cout << "Suma iterativa: " << sumaIterativa(n) << endl;
    //Fin del programa.
    return 0;
}

int sumaRecursiva(int n){
    //Caso base
    if (n <= 9) {   //Hasta que se tenga una sola cifra
        return n;
    }
    // Caso recursivo
    else {
        return (sumaRecursiva(n / 10) + (n % 10));  //Recorremos una pocicion el decimal.
    }
}

int sumaIterativa(int n){
    int suma = 0;
    while (n > 9){
        suma += (n % 10);
        n /= 10;
    }
    return (suma + n);
}