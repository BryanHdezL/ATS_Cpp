//Eliminar elementos de una lista.

/***********************************************************************
Para eliminar elementos de una lista, solo hay que seguir 5 pasos:
    1. Preguntar si la lista no esta vacia.
    2. Crear un puntero *auxBorrar y *anterior=NULL.
    3. Igualar *auxBorrar al inicio de la lista.
    4. Recorrer la lista.
    5. Elimnar el elemento.
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
void insertarNodo(Nodo *&, int);
void mostrarLista(Nodo *);
void eliminarNodo(Nodo *&, int);

//Funcion principal.
int main(){
    //Variables de la funcion.
    Nodo *lista = NULL;
    //Acciones del programa.
    insertarNodo(lista, 2);
    insertarNodo(lista, 4);
    insertarNodo(lista, 5);
    insertarNodo(lista, 7);
    mostrarLista(lista);
    eliminarNodo(lista,10);
    mostrarLista(lista);
    insertarNodo(lista, 1);
    mostrarLista(lista);
    eliminarNodo(lista,1);
    mostrarLista(lista);
    insertarNodo(lista, 0);
    insertarNodo(lista, 5);
    mostrarLista(lista);
    eliminarNodo(lista,5);
    mostrarLista(lista);
    insertarNodo(lista, 20);
    insertarNodo(lista, 5);
    insertarNodo(lista, 2);
    insertarNodo(lista, 3);
    mostrarLista(lista);
    eliminarNodo(lista,2);
    mostrarLista(lista);
    return 0;
}

//Funcion para eliminar elementos de una lista.
void eliminarNodo(Nodo *&lista, int n){
    if (lista != NULL){ // 1. Preguntamos si la lista esta vacia.
        Nodo *auxBorrar;    // 2. Creacion de nodo auxBorrar.
        Nodo *anterior = NULL;  // 2. Creacion de nodo anterior e igualarlo a NULL.
        auxBorrar = lista;  // 3. Igualar auxBorrar a la lista para realizar el recorrido.
        while ((auxBorrar != NULL) && (auxBorrar->dato != n)) {  // 4. Recorrer la lista.
            anterior = auxBorrar;
            auxBorrar = auxBorrar->siguiente;
        }
        if (auxBorrar == NULL){
            cout << "\n\t El elemento " << n << " no existe en la lista.";
        } else if (anterior == NULL){   //El elemento a borrar es el primero de la lista
            lista = lista->siguiente;   //La cabeza de la lista pasara a ser la segunda posicion.
            delete auxBorrar;   //Eliminamos el elemento.
            cout << "\n\t El elemento " << n << " a sido eliminado de la lista.";
        }else{  //El elemento a borrar eta en otra posicion diferente a la primera
            anterior->siguiente = auxBorrar->siguiente; //Saltamos el elemento a borrar y lo señalamos a la siguiente posicion del que sera borrado.
            delete auxBorrar;
            cout << "\n\t El elemento " << n << " a sido eliminado de la lista.";
        }
    }
}

//Funcion para mostrar el contenido de una lista.
void mostrarLista(Nodo *lista){
    Nodo *actual = new Nodo();
    actual = lista;
    cout << "\n\t Lista: ";
    while (actual != NULL){
        cout << actual->dato << " -> ";
        actual = actual->siguiente;
    }
}

//Funcion para insertar elementos en la lista.
void insertarNodo(Nodo *&lista, int n){
    Nodo *nuevoNodo = new Nodo();
    nuevoNodo->dato = n;
    Nodo *aux1 = lista;
    Nodo *aux2;
    while ((aux1 != NULL) && (aux1->dato < n)) {
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }
    if (lista == aux1){ //No entro al while anterior.
        lista = nuevoNodo;  //Agregamos el primer nodo a la lista.
    }else{
        aux2->siguiente = nuevoNodo; //Agregamos otro nodo a la lista.
    }
    nuevoNodo->siguiente = aux1;  // EL puntero siguiente apuntara al elemento agregado.
    cout << "\nElemento " << n << " agregado a la lista.";
}