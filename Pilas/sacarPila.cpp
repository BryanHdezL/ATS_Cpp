//Eliminar elementos a Pila.

/***********************************************************************
Para quitar elementos en la pila, solo hay que seguir 4 pasos:
    1. Crear una variable *aux de tipo Nodo.
    2. Igualar el n a aux->dato.
    3. Pasar pila a siguiente nodo.
    4. Eliminar aux.
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
void sacarPila(Nodo *&, int &);
void mostrarPila(Nodo *);

//Funcion principal.
int main(){
    //Variables de la funcion.
    Nodo *pila = NULL;
    int dato;
    //Acciones del programa.
    cout << "Elementos a insertar:" << endl;
    for (int i = 0; i < 5; i++){
        cout << "\t Dato: ";
        cin >> dato;
        insertarPila(pila, dato);
    }
    cout << "\nPila llena: ";
    mostrarPila(pila);
    
    cout << "\n\nVaciando pila: ";
    while (pila != NULL){
        cout<<"\n\t Pila: ";
        mostrarPila(pila);
        sacarPila(pila,dato);
    }
    return 0;
}

//Funcion para eliminar los elementos de la pila
void sacarPila(Nodo *&pila, int &n) {
    Nodo *aux = pila;               // 1. Crear una variable *aux de tipo Nodo igualado a la pila.
    n = aux->dato;                  // 2. Igualar el n a aux->dato.
    pila = aux->siguiente;          // 3. Pasar el puntero auxiliar a siguiente nodo.
    delete aux;                     // 4. Eliminar aux.
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