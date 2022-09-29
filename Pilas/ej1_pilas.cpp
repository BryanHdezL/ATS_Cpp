//Ejercicio #1.

/***********************************************************************
Hacer un programa para agregar numeros enteros a una pila, hasta que el
usuario lo decida, despues mostrar los numeros introducidos en la pila.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Estructura.
struct Nodo{
    int dato;
    Nodo *siguiente;
};

//Prototipos de las funciones.
void leer(Nodo *&);
void insertarPila(Nodo *&, int);
void mostrar(Nodo *);

//Funcion principal.
int main(){
    //Variables de la funcion.
    Nodo *pila = NULL;
    //Acciones del programa.
    leer(pila); //Leemos los elementos de la pila.
    mostrar(pila);  //Mostramos los elementos de la pila.
    return 0;
}

//Funcion para mostrar el contenido de la pila.
void mostrar(Nodo *pila){
    cout << "\t Pila: ";
    while(pila!=NULL){  //Miestras no se llegue al final de la pila...
        cout << pila->dato << " ";
        pila = pila->siguiente;
    }
}

//Leer los elementos de la pila capturados por el usuario.
void leer(Nodo *&pila){
    //Variables de la funcion.
    char band;
    int dato;
    //Acciones de la fucnion.
    cout << "\n* Ingresando los elementos de la pila *\n" << endl;
    do{ //Realizar hasta que el usuario decida.
        cout << "\t Dato: ";
        cin >> dato;
        insertarPila(pila,dato);
        cout << "\t Desea ingresar otro valor [S/N]: ";
        cin >> band;
    } while (band == 'S' || band == 's');
    cout << "\n* Mostrando los elementos de la pila *\n" << endl;
}

// Funcion para insertar elementos en la pila.
void insertarPila(Nodo *&pila, int n){
    Nodo *nuevoNodo = new Nodo();   //Resrvamos memoria para un nuevo nodo en la pila.
    nuevoNodo->dato = n;            //Guardamos el valor en el nuevo nodo.
    nuevoNodo->siguiente = pila;    //Guardamos el puntero del nodo en la pila.
    pila = nuevoNodo;               //Asignamos el nodo a la pila.
}