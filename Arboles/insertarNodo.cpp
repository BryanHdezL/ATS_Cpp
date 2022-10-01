//Insertar nodo en un arbol binario.

/***********************************************************************
Para insertar elementos en una lista, solo hay que seguir 4 pasos:
    1. Creamos un nodo.
    2. Asignar los valores de la estructura nodo.
    3. Comprobar si el subarbol esta vacio, en dado caso crear una raiz.
    4. Una vez que se tiene la raiz analizar si es menor o mayor el
        elemento a insertar que la raiz.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Estructura del nodo.
struct Nodo{
    int dato;
    Nodo *der;
    Nodo *izq;
};

//Prototipos de las funciones.
void menu(Nodo *&);
Nodo *crearNodo(int);
void insertarNodo(Nodo *&, int);

//Funcion principal.
int main(){
    //Variables de la funcion.
    Nodo *arbol = NULL;  // Creamos la estructura del arbol, competamente vacio.
    // Acciones del programa.
    menu(arbol);
    return 0;
}

void insertarNodo(Nodo *&arbol, int n){ 
    if (arbol == NULL){ //Comprobar si el arbol esta vacio.
        Nodo *nuevoNodo = crearNodo(n); //Creamos un nodo raiz.
        arbol = nuevoNodo;     //Se agrega el nodo raiz al arbol.
        // cout << "Elemento " << n << " insertado" << endl;
    }else{  //Ya existen nodos en el arbol.
        int valorRaiz = arbol->dato;    //Se obtiene le valor del nodo raiz.
        if (n < valorRaiz){ //El valor a insertar es menor que raiz, insertamos en izquierda.
            insertarNodo(arbol->izq, n);    //Volvemos a invocar a la funcion indicando que  se debe insertar a la izquierda.
        }else{  //El valor a insertar es mayor que raiz, insertamos en derecha.
            insertarNodo(arbol->der, n);    //volvemos a invocar a la funcion indicando que se debe insertra a la derecha.
        }
    }
}

//Funcion para crear un nuevo nodo en el arbol.
Nodo *crearNodo(int n){
    //Resrvamos memoria para el nuevo nodo.
    Nodo *nuevoNodo = new Nodo();
    //Asignamos los valores del nuevo nodo.
    nuevoNodo->dato = n;    //Valor a aagregar.
    nuevoNodo->izq = NULL;  //Puntero hacia el nodo hijo izquierdo.
    nuevoNodo->der = NULL;  //Puntero hacia el nodo hijo derecho.
    //Retornamos el nuevo nodo del arbol.
    return nuevoNodo;
}

// Funcion menu
void menu(Nodo *&arbol) {
    //Variables de la funcion.
    int opc, dato;
    //Mostramos el menu.
    do{
        system("cls");
        cout << "\n\t+------------------------------------------------------+";
        cout << "\n\t|                 MENU DE OPCIONES                     |";
        cout << "\n\t+------------------------------------------------------+";
        cout << "\n\t|     1) Insertar elemento al arbol.                   |";
        cout << "\n\t|     2) Salir del programa.                           |";
        cout << "\n\t+------------------------------------------------------+";
        cout << "\n\nDigite la accion que desea realizar: ";
        cin >> opc;
        //Invocamos a la funcion deseada segun sea la opcion elegida.
        switch(opc){
            case 1:
                cout << "Dato: ";
                cin >> dato;
                insertarNodo(arbol, dato);
                // cout << "\n";
                // system("pause");
                break;
        }
    } while (opc != 2);
}