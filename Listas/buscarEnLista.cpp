//Buscar elementos en una lista.

/***********************************************************************
Para buscar elementos en una lista, solo hay que seguir 4 pasos:
    1. Crear un nuevo nodo (actual).
    2. Igualar el puntero actual a lista.
    3. Recorrer la lista de inicio a fin.
    4. Determinar si el elemento existe o no.
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
void buscarLista(Nodo *, int);

//Funcion principal.
int main(){
    //Variables de la funcion.
    Nodo *lista = NULL;
    //Acciones del programa.
    insertarNodo(lista, 2);
    insertarNodo(lista, 4);
    insertarNodo(lista, 5);
    insertarNodo(lista, 9);
    insertarNodo(lista, 1);
    mostrarLista(lista);
    buscarLista(lista, 9);
    buscarLista(lista, 0);
    return 0;
}

//Funcion para buscar elemento en una lista.
void buscarLista(Nodo *lista, int n){
    bool band = false;
    cout << "\nElemento " << n << " a buscar en la lista." << endl;
    Nodo *actual = new Nodo();
    actual = lista;
    while ((actual != NULL) && (actual->dato <= n)) {
        if (actual->dato == n){
            band = true;
            break;  //Una vez encontrado ya no es necesario recorrer el resto de la lista
        }
        actual = actual->siguiente; //Recorremos al siguinete nodo.
    }
    //Mostrando el resultado de la busqueda.
    if(band){
        cout << "\t El elemento " << n << " SI fue encontrado." << endl;
    }else{
        cout << "\t El elemento " << n << " NO fue encontrado." << endl;
    }
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
    cout << "Elemento " << n << " agregado a la lista." << endl;
}