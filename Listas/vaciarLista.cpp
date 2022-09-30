//Eliminar todos los elementos de una lista.

/***********************************************************************
Para vaciar el contenido de una lista, solo hay que seguir 4 pasos:
    1. Crear un nodo *aux e igualarlo al inicio de la lista.
    2. Guardar el dato que queremos eliminar dentro de *aux.
    3. Pasar lista a siguiente nodo.
    4. Eliminar aux.
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
void vaciarLista(Nodo *&);

//Funcion principal.
int main(){
    //Variables de la funcion.
    Nodo *lista = NULL;
    //Acciones del programa.
    insertarLista(lista, 2);
    insertarLista(lista, 3);
    insertarLista(lista, 8);
    insertarLista(lista, 1);
    insertarLista(lista, 0);
    insertarLista(lista, 10);
    insertarLista(lista, 1);
    while (lista != NULL) {
        vaciarLista(lista);
        mostrarLista(lista);
    }
    return 0;
}

//Funcion para vaciar el contenido de la lista.
void vaciarLista(Nodo *&lista){
    int n;
    Nodo *aux = lista;  //1. Crear nodo e igualarlo al inicio de la lista.
    n = aux->dato;  // 2. Guardar el dato que se quiere borrar.
    lista = aux->siguiente; //3. Pasar lista al siguiente nodo.
    delete aux; // 4. Eliminar aux.
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
    cout << "\nElemento " << n << " agregado a la lista.";
}