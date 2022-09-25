//Ejercicio #8.

/***********************************************************************
Pedir una cadena de caracteres (string) al usuario, e indicar cuantas
veces aparece la vocal a,e,i,o,u; en la cadena de carcateres.

Nota: Usar punteros.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Prototipos delas funciones.
void contarVocales(char *, int *, int *, int *, int *, int *);

//Funcion principal.
int main(){
    //Variables de la funcion.
    char palabra[30];
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    //Acciones del programa.
    cout << "Palabra: ";
    cin.getline(palabra, 30, '\n');
    strupr(palabra); //Convertimos a mayusculas la frase.
    contarVocales(palabra, &a, &e, &i, &o, &u);
    cout << "\t El numero de veces que se repite cada vocal es la siguiente: " << endl;
    cout << "\t\t a: " << a << endl;
    cout << "\t\t e: " << e << endl;
    cout << "\t\t i: " << i << endl;
    cout << "\t\t o: " << o << endl;
    cout << "\t\t u: " << u << endl;
}

//Funcion para contar las vocales del palabra.
void contarVocales(char *A, int *a, int *e, int *i, int *o, int *u){
    while(*A){  //Miestras no se llegue al caracter nulo '\0'
        switch(*A){
            case 'A':
                (*a)++;
                break;
            case 'E':
                (*e)++;
                break;
            case 'I':
                (*i)++;
                break;
            case 'O':
                (*o)++;
                break;
            case 'U':
                (*u)++;
                break;
        }
        A++;
    }
}