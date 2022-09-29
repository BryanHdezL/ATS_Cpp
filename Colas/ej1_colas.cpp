//Ejercicio #1.

/***********************************************************************
Hacer un programa en C++, utilizando colas que contemgan el siguiente 
menu:
    1. Insertar un cracater a una cola.
    2. Mostrar todos los elementos de la cola.
    3. Salir.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Estructura.
struct Nodo{
    char dato;
    Nodo *siguiente;
};

//Prototipos de las funciones.
void menu(Nodo *&, Nodo *&);
bool colaVacia(Nodo *);
void mostrarCola(Nodo *);
void insertarCola(Nodo *&, Nodo *&, char);

//Funcion principal.
int main(){
    //Variables de la funcion.
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    //Acciones del programa.
    menu(frente, fin);
    return 0;
}

//Funcion para mostrar el contenido de la cola.
void mostrarCola(Nodo *frente){
    cout << "\t Cola: ";
    while (frente != NULL){
        cout << frente->dato << " ";
        frente = frente->siguiente;
    }
    cout << "\n";
}

//Funcion para insertar elementos en la cola,
void insertarCola(Nodo *&frente, Nodo *&fin, char n){
    //Resrvando memoria para le nodo.
    Nodo *nuevoNodo = new Nodo();   
    //Asignando los nodos
    nuevoNodo->dato = n;
    nuevoNodo->siguiente = NULL;
    //Comprobar si la cola esta vacia y asignar los punteros frente y fin hacia el nuevo nodo.
    if(colaVacia(frente)){  //Si la cola esta vacia...
        frente = nuevoNodo;
    }else{  //En caso de que la cola no este vacia...
        fin->siguiente = nuevoNodo;
    }
    fin = nuevoNodo;
}

//Funcion para comprobar si la cola esta vacia.
bool colaVacia(Nodo *frente){
    return (frente == NULL) ? true : false;
}

// Funcion menu
void menu(Nodo *&frente, Nodo *&fin) {
    //Variables de la funcion.
    int opc;
    char dato;
    //Mostramos el menu.
    system("cls");
    cout << "\n\t+------------------------------------------------------+";
    cout << "\n\t|                 MENU DE OPCIONES                     |";
    cout << "\n\t+------------------------------------------------------+";
    cout << "\n\t|     1) Insertar un caracter a la cola.               |";
    cout << "\n\t|     2) Mostrar todos los elementos de la cola.       |";
    cout << "\n\t|     3) Salir del programa.                           |";
    cout << "\n\t+------------------------------------------------------+";
    cout << "\n\nDigite la accion que desea realizar: ";
    cin >> opc;
    //Invocamos a la funcion deseada segun sea la opcion elegida.
    switch(opc){
        case 1:
            fflush(stdin);  //Liberamos el buffer.
            cout << "\t Caracter: ";
            cin >> dato;
            insertarCola(frente, fin, dato);
            menu(frente, fin);
            break;
        case 2:
            mostrarCola(frente);
            system("pause");
            menu(frente, fin);
            break;
        default:
            cout << "\t BYE" << endl;
            break;
    }
}
