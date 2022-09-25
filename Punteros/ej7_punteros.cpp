//Ejercicio #7.

/***********************************************************************
Pedir si nombre al usuaio y devolver el numero de vocales que hay

Nota: Recuerda que debes utilizar punteros.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Prototipos delas funciones.
int contarVocales(char *);

//Funcion principal.
int main(){
    //Variables de la funcion.
    char nombre[30];
    int vocales;
    //Acciones del programa.
    cout << "Nombre: ";
    cin.getline(nombre, 30, '\n');
    strupr(nombre); //Convertimos a mayusculas la frase.
    vocales = contarVocales(nombre);
    cout << "\t El numero de vocales en el nombre es: " << vocales << endl;
    return 0;
}

//Funcion para contar las vocales del nombre.
int contarVocales(char *A){
    int cont=0;
    while(*A){  //Miestras no se llegue al caracter nulo '\0'
        switch(*A){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                cont++;
        }
        A++;
    }
    return cont;
}