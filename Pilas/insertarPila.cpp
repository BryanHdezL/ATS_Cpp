//Insertar elementos a Pila.

/***********************************************************************
Para insertar elementos en la pila, solo hay que seguir 4 pasos:
    1. Crear el espacio en memoria para almacenar un nodo.
    2. Cargar el valor dentro del nodo (dato).
    3. Cargar el puntero pila dentro del nodo (*siguiente).
    4. Asignar el nuevo nodo a la pila.
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
void insertarPila(Nodo *&, int);
void mostrarPila(Nodo *);

//Funcion principal.
int main(){
    //Variables de la funcion.
    Nodo *pila = NULL;
    int dato;
    //Acciones del programa.
    cout << "Elementos a insertar:" << endl;
    for (int i = 0; i < 5; i++){
        cout << "\tDato: ";
        cin >> dato;
        insertarPila(pila, dato);
    }
    cout << "\nPila: ";
    mostrarPila(pila);
    return 0;
}

//Funcion para mostrar el contenido de la pila.
void mostrarPila(Nodo *pila){
    while (pila != NULL){
        cout << pila->dato << " ";
        pila = pila->siguiente;
    }
}

//Funcion para insertar elementos en una pila.
void insertarPila(Nodo *&pila, int n) {
    Nodo *nuevoNodo = new Nodo();   //1. Creamos el espacio de memoria.
    nuevoNodo->dato = n;            //2. Guardammos el valor del dato en el nuevo nodo.
    nuevoNodo->siguiente = pila;    //3. Guardando el puntero del nodo en la pila.
    pila = nuevoNodo;               //4. Asignamos el nodo a la pila.
}