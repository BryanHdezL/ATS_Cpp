//Mostrar elementos de una lista.

/***********************************************************************
Para mostrar elementos de una lista, solo hay que seguir 3 pasos:
    1. Crear un nuevo nodo (actual).
    2. Igualar el puntero actual a lista.
    3. Recorrer la lista de inicio a fin.
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
void mostrarLista(Nodo *);

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
    mostrarLista(lista);
    return 0;
}

//Funcion para mostrar el contenido de una lista.
void mostrarLista(Nodo *lista){
    Nodo *actual = new Nodo();
    actual = lista;
    cout << "\t Lista: ";
    while (actual != NULL){
        cout << actual->dato << " -> ";
        actual = actual->siguiente;
    }
}


//Funcion para insertar elementos en la lista.
void insertarLista(Nodo *&lista, int n){
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
    cout << "Elemento " << n << " agregado a la lista." << endl;
}