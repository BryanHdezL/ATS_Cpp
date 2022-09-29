//Sacar elementos en una cola.

/***********************************************************************
Para sacar elementos en una cola, solo hay que seguir 3 pasos:
    1. Obtener el valor del nodo.
    2. Crear un nodo aux y asignarle el frente de la cola.
    3. Eliminar el nodo del frende de la cola.
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
void insertarCola(Nodo *&, Nodo *&, int);
void sacarCola(Nodo *&, Nodo *&, int &);
bool colaVacia(Nodo *);
void mostrarCola(Nodo *);

//Funcion principal.
int main(){
    //Variables de la funcion.
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    int dato;
    //Acciones del programa.
    cout << "Elementos a insertar:" << endl;
    for (int i = 0; i < 5; i++){
        cout << "\tDato: ";
        cin >> dato;
        insertarCola(frente, fin, dato);
    }
    cout << "\nCola: ";
    mostrarCola(frente);
    cout << "\n\nVaciando cola: ";
    while (frente != NULL){
        cout<<"\n\t Cola: ";
        mostrarCola(frente);
        sacarCola(frente, fin, dato);
    }
    return 0;
}

//Funcion para mostrar el contenido de la pila.
void mostrarCola(Nodo *frente){
    while (frente != NULL){
        cout << frente->dato << " ";
        frente = frente->siguiente;
    }
}

//Funcion para eliminar elementos en la cola.
void sacarCola(Nodo *&frente, Nodo *&fin, int &n){
    //1. Obtener el valor del nodo.
    n = frente->dato;
    //2. Crear nodo auxiliar y asignarle el frente de la cola.
    Nodo *aux = frente;
    //3. Eliminar nodo de la cola, pero comporbando si solo existe un solo elemento en la cola.
    if(frente==fin){    //Solo existe un solo elemento en la cola.
        frente = NULL;
        fin = NULL;
        delete aux;     // Eliminando el puntero auxiliar.
    }else{  //Existen mas de 1 elemento en la cola.
        frente = frente->siguiente; //La cabeza de la cola pasara a la siguiente posicion.
    }
}

//Funcion para insertar elementos en la cola.
void insertarCola(Nodo *&frente, Nodo *&fin, int n){
    //1. Reservando memoria para un nuevo nodo el la cola.
    Nodo *nuevoNodo = new Nodo();       
    //2. Asignamos el nuevo nodo al dato a insertar.
    nuevoNodo->dato = n;
    nuevoNodo->siguiente = NULL;
    //3. Comprobar si la cola esta vacia y asignar punteros frente y fin.
    if(colaVacia(frente)){
        frente = nuevoNodo;
    }else{
        fin->siguiente = nuevoNodo;
    }
    fin = nuevoNodo;
}

//Funcion para determinar si la cola esta vacia o no.
bool colaVacia(Nodo *frente){
    return (frente == NULL) ? true : false;
}