//Buscar un elemento en un arbol binario.

/***********************************************************************
Para buscar un elemento en un arbol binario, solo hay que seguir 6 pasos:
    1. Se comprueba si el arbol esta vacio o si ya se llego a sus nodo
        hoja sin encontrar el valore deseado, se retorna FALSE.
    2. Se comprueba si el nodo analizado actual es igual al valor que
        deseamos, se retorna TRUE.
    3. Se analiza si el valor deseado es menor que el nodo actualmente
        analizado, se realiza la busqueda por la izqueirda.
    4. Se analiza si el valor deseado es mayor que el nodo actualmente
        analizado, se realiza la busqueda por la derecha.
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
void mostrarArbol(Nodo *, int);
bool buscarNodo(Nodo *, int);

//Funcion principal.
int main(){
    //Variables de la funcion.
    Nodo *arbol = NULL;  // Creamos la estructura del arbol, competamente vacio.
    // Acciones del programa.
    menu(arbol);
    return 0;
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
void insertarNodo(Nodo *&arbol, int n){ 
    if (arbol == NULL){ //Comprobar si el arbol esta vacio.
        Nodo *nuevoNodo = crearNodo(n); //Creamos un nodo raiz.
        arbol = nuevoNodo;     //Se agrega el nodo raiz al arbol.
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
        cout << "\n\t+------------------------------------------------------+";
        cout << "\n\t|                 MENU DE OPCIONES                     |";
        cout << "\n\t+------------------------------------------------------+";
        cout << "\n\t|     1) Insertar elemento al arbol.                   |";
        cout << "\n\t|     2) Mostra el arbol completo.                     |";
        cout << "\n\t|     3) Buscar un elemento en el arbol.               |";
        cout << "\n\t|     4) Salir del programa.                           |";
        cout << "\n\t+------------------------------------------------------+";
        cout << "\n\nDigite la accion que desea realizar: ";
        cin >> opc;
        //Invocamos a la funcion deseada segun sea la opcion elegida.
        switch(opc){
            case 1:
                cout << "Dato: ";
                cin >> dato;
                insertarNodo(arbol, dato);
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
        }
        system("cls");
    } while (opc != 4);
}