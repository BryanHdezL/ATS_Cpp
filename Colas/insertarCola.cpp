//Insertar elementos en una cola.

/***********************************************************************
Para insertar elementos en una cola, solo hay que seguir 3 pasos:
    1. Crear espacio en memoria para almacenar un nodo.
    2. Asignar ese nuevo nodo al dato que queremos insertar.
    3. Asignar los punteros frente y fin hacia el nuevo nodo.
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
    return 0;
}

//Funcion para mostrar el contenido de la pila.
void mostrarCola(Nodo *frente){
    while (frente != NULL){
        cout << frente->dato << " ";
        frente = frente->siguiente;
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