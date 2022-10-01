//Elimnar nodos de un arbol bianrio.

/***********************************************************************
Al elimianr un nodo en un arbol binario existen 3 casos:
    1. El nodo tiene 2 hijos.
    2. El nodo tiene 1 hijo.
        2.1 Puede ser un nodo hijo izquierdo.
        2.1 Puede ser un nodo hijo derecho.
    3. El nodo no tiene hijos.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Estructura del nodo.
struct Nodo{
    int dato;
    Nodo *der;
    Nodo *izq;
    Nodo *padre;
};

//Prototipos de las funciones.
void menu(Nodo *&);
Nodo *crearNodo(int, Nodo *);
void insertarNodo(Nodo *&, int, Nodo *);
void mostrarArbol(Nodo *, int);
bool buscarNodo(Nodo *, int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminar(Nodo *, int);
void eliminarNodo(Nodo *);
Nodo *izqPosible(Nodo *);
void reemplazar(Nodo *, Nodo *);
void destruirNodo(Nodo *);

// Funcion principal.
int main() {
    //Variables de la funcion.
    Nodo *arbol = NULL;  // Creamos la estructura del arbol, competamente vacio.
    // Acciones del programa.
    menu(arbol);
    return 0;
}

// Funcion para eliminar elementos de un arbol.
void eliminar(Nodo *arbol, int n){
    if (arbol == NULL){ //Si el arbol esta vacio o se llega hasta el final del mismo.
        return; 
    } else if (n < arbol->dato) {   //Si el valor es menor que raiz analizada actualmente.
        eliminar(arbol->izq, n);    //Busca por la izqueirda.   
    } else if (n > arbol->dato){    //Si el valor es mayor que raiz analizada actualmente.
        eliminar(arbol->der, n);    //Busca por la derecha.
    }else{
        eliminarNodo(arbol);
    }
}

//Funcion para destruir el nodo eliminado.
void destruirNodo(Nodo *nodo){
    nodo->izq = NULL;   //Si nodo tenia un hijo izquierdo, ahora no.
    nodo->der = NULL;   //Si nodo tenia un hijo derecho, ahora no.
    delete nodo;    //Liberamos el espacio de memoria que tenia el nodo
}

//Funcion para elimianr nodos de un arbol.
void eliminarNodo(Nodo *nodoEliminar){
    if (nodoEliminar->izq && nodoEliminar->der){    //Algoritmo para eliminar un nodo que tenga 2 hijos.
        Nodo *menor = izqPosible(nodoEliminar->der);
        nodoEliminar->dato = menor->dato;
        eliminarNodo(menor);
    } else if (nodoEliminar->izq) {  // Algoritmo para eliminar un nodo que tenga 1 hijo izquierdo.
        reemplazar(nodoEliminar, nodoEliminar->izq);
        destruirNodo(nodoEliminar);
    } else if (nodoEliminar->der) {  // Algoritmo para eliminar un nodo que tenga 1 hijo izquierdo.
        reemplazar(nodoEliminar, nodoEliminar->der);
        destruirNodo(nodoEliminar);
    }else{  // Algoritmo para eliminar un nodo que no tenga hijos
        reemplazar(nodoEliminar, NULL);
        destruirNodo(nodoEliminar);
    }
}

//Funcion para reemplazar el valor de 2 nodos.
void reemplazar(Nodo *arbol, Nodo *nuevoNodo){
    if (arbol->padre){  //Comprobar si el nodo a eliminar tiene nodo padre.
        //arbol->padre hay que asignarle su nuevo hijo.
        if (arbol->dato == arbol->padre->izq->dato){
            arbol->padre->izq = nuevoNodo;
        } else if (arbol->dato == arbol->padre->der->dato){
            arbol->padre->der = nuevoNodo;
        }
    }
    if(nuevoNodo){
        //Procedemos a asignarle su nuevo padre.
        nuevoNodo->padre = arbol->padre;
    }
}

//Funcion para encontrar l aparte mas izquierda posible de un arbol.
Nodo *izqPosible(Nodo *arbol){
    if (arbol == NULL){ //Si el arbol esta vacio.
        return NULL;    //Retornamos nulo.
    }
    if (arbol->izq){    //Si el nodo tiene un hijo izquierdo.
        return izqPosible(arbol->izq);  //Buscamos la parte mas izquierda posible.
    }else{  //Si no tiene hijo izquierdo.
        return arbol;   //Retornamos el mismos nodo.
    }
}

// Funcion para recorrer el arbol en forma de postOrden (mostramos subarbol izquierdo, despues el subarbol derecho y despues la raiz)
void postOrden(Nodo *arbol){
    if (arbol == NULL){ //Si el arbol esta vacio o se llego al fin de los nodos hojas.
        return;
    }else{  //Miestras no se llegue al fin del arbol
        postOrden(arbol->izq);   //Se mostraran los elementos de los subarboles izqueirdos.
        postOrden(arbol->der);   //Se mostraran los elementos de los subarboles derechos.
        cout << arbol->dato << " - ";   //Mostramos el contenido del arbol.
    }
}

// Funcion para recorrer el arbol en forma de inOrden (mostramos subarbol izquierdo, despues la raiz y despues el subarbol derecho)
void inOrden(Nodo *arbol){
    if (arbol == NULL){ //Si el arbol esta vacio o se llego al fin de los nodos hojas.
        return;
    }else{  //Miestras no se llegue al fin del arbol
        inOrden(arbol->izq);   //Se mostraran los elementos de los subarboles izqueirdos.
        cout << arbol->dato << " - ";   //Mostramos el contenido del arbol.
        inOrden(arbol->der);   //Se mostraran los elementos de los subarboles derechos.
    }
}

// Funcion para recorrer el arbol en forma de preOrden (mostramos subarbol izquierdo y despues el subarbol derecho)
void preOrden(Nodo *arbol){
    if (arbol == NULL){ //Si el arbol esta vacio o se llego al fin de los nodos hojas.
        return;
    }else{  //Miestras no se llegue al fin del arbol
        cout << arbol->dato << " - ";   //Mostramos el contenido del arbol.
        preOrden(arbol->izq);   //Se mostraran los elementos de los subarboles izqueirdos.
        preOrden(arbol->der);   //Se mostraran los elementos de los subarboles derechos.
    }
}

//Funcion para mostrar el contenido del arbol.
void mostrarArbol(Nodo *arbol, int contador){
    if (arbol == NULL){ //Comprobamos si el arbol esta vacio o si se llega a las hojas del mismo.
        return; //En dado caso retornamos y no mostramos nada.
    }else{  //El arbol si contiene nodos.
        mostrarArbol(arbol->der, contador + 1); //Recorremos los nodos hasta llegar al ultimo extremo derecho.
        for (int i = 0; i < contador; i++){
            cout << "\t";
        }
        cout << arbol->dato << endl;
        mostrarArbol(arbol->izq, contador + 1); //Recorremos los nodos hasta llegar al ultimo extremo izquierdo.
    }
}

//Funcion para buscar un elemento en el arbol.
bool buscarNodo(Nodo *arbol, int n){
    if (arbol == NULL){ //Si el arbol llego a su fin y no se encontro.
        return false;
    } else if (arbol->dato == n){   //Si se recorrio el arbol y se encontro el elemento.
        return true;
    } else if (n < arbol->dato){    //Si el elemento a buscar es menor que el nodo que se analiza actual, busca por la izquierda.
        return buscarNodo(arbol->izq, n);   
    }else{  //Si el elemento a buscar es mayor que el nodo que se analzia actual, busca por la derecha.
        return buscarNodo(arbol->der, n);   
    }
}

//Funcion para insertar un nuevo nodo en el arbol.
void insertarNodo(Nodo *&arbol, int n, Nodo *padre){ 
    if (arbol == NULL){ //Comprobar si el arbol esta vacio.
        Nodo *nuevoNodo = crearNodo(n,padre); //Creamos un nodo raiz.
        arbol = nuevoNodo;     //Se agrega el nodo raiz al arbol.
    }else{  //Ya existen nodos en el arbol.
        int valorRaiz = arbol->dato;    //Se obtiene le valor del nodo raiz.
        if (n < valorRaiz){ //El valor a insertar es menor que raiz, insertamos en izquierda.
            insertarNodo(arbol->izq, n, arbol);    //Volvemos a invocar a la funcion indicando que  se debe insertar a la izquierda.
        }else{  //El valor a insertar es mayor que raiz, insertamos en derecha.
            insertarNodo(arbol->der, n, arbol);    //volvemos a invocar a la funcion indicando que se debe insertra a la derecha.
        }
    }
}

//Funcion para crear un nuevo nodo en el arbol.
Nodo *crearNodo(int n, Nodo *padre){
    //Resrvamos memoria para el nuevo nodo.
    Nodo *nuevoNodo = new Nodo();
    //Asignamos los valores del nuevo nodo.
    nuevoNodo->dato = n;    //Valor a aagregar.
    nuevoNodo->izq = NULL;  //Puntero hacia el nodo hijo izquierdo.
    nuevoNodo->der = NULL;  //Puntero hacia el nodo hijo derecho.
    nuevoNodo->padre = padre;
    //Retornamos el nuevo nodo del arbol.
    return nuevoNodo;
}

// Funcion menu
void menu(Nodo *&arbol) {
    //Variables de la funcion.
    int opc, dato;
    //Mostramos el menu.
    do{
        cout << "\n\t+------------------------------------------------------+";
        cout << "\n\t|                 MENU DE OPCIONES                     |";
        cout << "\n\t+------------------------------------------------------+";
        cout << "\n\t|     1) Insertar elemento al arbol.                   |";
        cout << "\n\t|     2) Mostra el arbol completo.                     |";
        cout << "\n\t|     3) Buscar un elemento en el arbol.               |";
        cout << "\n\t|     4) Recorrer el arbol en preOrden.                |";
        cout << "\n\t|     5) Recorrer el arbol en inOrden.                 |";
        cout << "\n\t|     6) Recorrer el arbol en postOrden.               |";
        cout << "\n\t|     7) Eliminar nodo del arbol.                      |";
        cout << "\n\t|     8) Salir del programa.                           |";
        cout << "\n\t+------------------------------------------------------+";
        cout << "\n\nDigite la accion que desea realizar: ";
        cin >> opc;
        //Invocamos a la funcion deseada segun sea la opcion elegida.
        switch(opc){
            case 1:
                cout << "Dato: ";
                cin >> dato;
                insertarNodo(arbol, dato, NULL);
                cout << "\n";
                break;
            case 2:
                cout << "\n Arbol: " << endl;
                mostrarArbol(arbol, 0);
                cout << "\n";
                system("pause");
                break;
            case 3:
                cout << "Dato a buscar: ";
                cin >> dato;
                if (buscarNodo(arbol, dato)){   //Dependiendo de si se encuentra o no el numero en el arreglo
                    cout << "\n\t El valor " << dato << " SI se encuentra en el arbol.\n" << endl;
                }else{
                    cout << "\n\t El valor " << dato << " NO se encuentra en el arbol.\n" << endl;
                }
                system("pause");
                break;
            case 4:
                cout << "\n Recorrido preOden del arbol: ";
                preOrden(arbol);
                cout << "\n";
                system("pause");
                break;
            case 5:
                cout << "\n Recorrido inOden del arbol: ";
                inOrden(arbol);
                cout << "\n";
                system("pause");
                break;
            case 6:
                cout << "\n Recorrido postOden del arbol: ";
                postOrden(arbol);
                cout << "\n";
                system("pause");
                break;
            case 7:
                cout << "Nodo a eliminar: ";
                cin >> dato;
                eliminar(arbol, dato);
                cout << "\n";
                break;
        }
        system("cls");
    } while (opc != 8);
}