//Ejercicio #1.

/***********************************************************************
Crear una lista que alamcene N numeros enteros y calcular el menor y
mayor de ellos.
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
void insertarNodo(Nodo *&, int);
void mostrarLista(Nodo *);
void calcularMayorMenor(Nodo *);

//Funcion principal.
int main(){
    //Variables de la funcion.
    int dato;
    char resp;
    Nodo *lista = NULL;
    //Acciones del programa.
    do{
        fflush(stdin);
        cout << "Dato: ";
        cin >> dato;
        insertarNodo(lista, dato);
        cout << "Otro? [S/N]: ";
        cin >> resp;
    } while ((resp == 'S')||(resp == 's'));
    mostrarLista(lista);
    calcularMayorMenor(lista);
    return 0;
}

//Funcion que calcula el mayor y menor numero de la lista.
void calcularMayorMenor(Nodo *lista){
    int mayor = 0, menor = 9999;
    while (lista != NULL){  //Miestras no lleguemos al final de la lista.
        if ((lista->dato) > mayor){
            mayor = lista->dato;    //Obtenemos el numero mayor de la lista.
        }
        if ((lista->dato) < menor){
            menor = lista->dato;    //Obtenemos el numero menor de la lista.
        }
        lista = lista->siguiente;   //Avanzamos una posicion en lista.
    }
    //Mostrando los resultados obtenidos.
    cout << "\n\t Valor menor de la lista: " << menor;
    cout << "\n\t Valor mayor de la lista: " << mayor;
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

//Funcion para insertar nodos a la lista.
void insertarNodo(Nodo *&lista, int n){
    Nodo *nuevoNodo = new Nodo();   //Creamos el nodo del nuevo elemento a agregar.
    Nodo *aux;  //Declaramos un puntero auxiliar.
    nuevoNodo->dato = n;    //Asignamos el valor del dato a agregar.
    nuevoNodo->siguiente=NULL;  //EL puntero del nodo apunta a Null en la declaracion.
    if (lista == NULL){ //Si la lista esta vacia.
        lista = nuevoNodo;  //Agregamos el primer elemento a la lista.
    }else{  //Ya existen elementos en la lista.
        aux = lista;    //Aux apunta al inicio de la lista.
        while (aux->siguiente != NULL) {    //Recorremos la lista.
            aux = aux->siguiente;   //Avanzamos posiciones en la lista.
        }
        aux->siguiente = nuevoNodo; //Agregamos el nuevo nodo a la lista
    }
}