//Ejercicio #2.

/***********************************************************************
Hacer un programa en C++, utilizando pilas que contenga el siguiente
menu:
    1. Insertar un caracter a la pila.
    2. Mostrar tosos los elementos de la pila.
    3. Salir.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Estructura
struct Nodo{
    char dato;
    Nodo *siguiente;
};

//Pototipos de las funciones.
void menu(Nodo *&);
void insertarPila(Nodo *&, char);
void mostrarPila(Nodo *);

//Funcion principal.
int main(){
    //Variables de la funcion.
    Nodo *pila = NULL;
    //Acciones del programa.
    menu(pila);
    return 0;
}

// Funcion menu
void menu(Nodo *&pila) {
    //Variables de la funcion.
    int opc;
    char dato;
    //Mostramos el menu.
    system("cls");
    cout << "\n\t+------------------------------------------------------+";
    cout << "\n\t|                 MENU DE OPCIONES                     |";
    cout << "\n\t+------------------------------------------------------+";
    cout << "\n\t|     1) Insertar un caracter a la pila.               |";
    cout << "\n\t|     2) Mostrar todos los elementos de la pila.       |";
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
            insertarPila(pila, dato);
            menu(pila);
            break;
        case 2:
            cout << "\t Pila: ";
            mostrarPila(pila);
            system("pause");
            menu(pila);
            break;
        default:
            cout << "\t BYE" << endl;
            break;
    }
}

//Funcion para mostrar el contenido de la pila.
void mostrarPila(Nodo *pila){
    while(pila!=NULL){  //Miestras no se llegue al final de la pila...
        cout << pila->dato << " ";
        pila = pila->siguiente;
    }
    cout << "\n";
}

//Funcion para insertar valores a la pila.
void insertarPila(Nodo *&pila, char n){
    Nodo *nuevoNodo = new Nodo();   //Reservamos memoria para el nuevo nodo.
    nuevoNodo->dato = n;            //Guardamos el valor recibido en el nodo.
    nuevoNodo->siguiente = pila;    //Guardamos el puntero del nodo en la pila.
    pila = nuevoNodo;               //Agregamos el nodo a la pila.
}
