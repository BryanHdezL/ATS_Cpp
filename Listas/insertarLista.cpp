//Insertar elementos en una lista.

/***********************************************************************
Para insertar elementos en una lista, solo hay que seguir 4 pasos:
    1. Crear un nuevo nodo.
    2. Asignar el nuevo nodo en dato al valor que se quiere agregar.
    3. Crear dos nodos auxiliares y asignar la lista al primer nodo.
    4. Insertar el elemento a la lista.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Estructura del nodo.
struct Nodo{
    int dato;
    Nodo *siguiente;
};

//Prototipos de las funciones.
void insertarLista(Nodo *&, int);

//Funcion principal.
int main(){
    //Variables de la funcion.
    Nodo *lista = NULL;
    //Acciones del programa.
    insertarLista(lista, 2);
    insertarLista(lista, 4);
    insertarLista(lista, 5);
    insertarLista(lista, 9);
    insertarLista(lista, 1);
    return 0;
}

//Funcion para insertar elementos en la lista.
void insertarLista(Nodo *&lista, int n){
    // 1. Crear un nuevo nodo.
    Nodo *nuevoNodo = new Nodo();
    // 2. Asignar el nuevo nodo al elemento a insertar.
    nuevoNodo->dato = n;
    // 3. Crear nodos auxiliares, el primer nodo es igual a lista.
    Nodo *aux1 = lista;
    Nodo *aux2;
    // 4. Insertar elementos a la lista.
    while ((aux1 != NULL) && (aux1->dato < n)) {  // Mientras la lista no este vacia, se comprueba si el elemento a insertar es mayor al ultimo en la lista.
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }
    //Comprobaciones para conocer le orden en el que se ingresarion a la lista.
    if (lista == aux1){ //No entro al while anterior.
        lista = nuevoNodo;  //Agregamos el primer nodo a la lista.
    }else{
        aux2->siguiente = aux1; //Agregamos otro nodo a la lista.
    }
    nuevoNodo->siguiente = aux1;  // EL puntero siguiente apuntara al elemento agregado.
    cout << "Elemento " << n << " agregado a la lista." << endl;
}