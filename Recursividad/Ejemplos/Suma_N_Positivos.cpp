// Ejemplo #1.

/***********************************************************************
Hacer un programa que calcule la suma de los primeros N numeros 
positivos, N capturado por el usuario, resolviendolo mediante funciones 
recursivas.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Prototipos de las funciones.
int suma(int);
//Funcion principal.
int main(){
    //Variables de la funcion.
    int n;
    //Acciones del programa.
    cout << "N: ";
    cin >> n;
    cout << "Suma: " << suma(n) << endl;
    //Fin del programa.
    return 0;
}

int suma(int n){
    //Caso base
    if (n == 1){
        return 1;
    }
    // Caso recursivo
    else{
        return n + suma(n - 1);
    }
}