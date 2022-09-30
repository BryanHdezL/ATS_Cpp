//Ejercicio #2.

/***********************************************************************
Crear una lista que alamcene N numeros reales y calcular su suma y 
promedio de estos.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Estructura.
struct Nodo{
    float dato;
    Nodo *siguiente;
};

//Prototipos de las funciones.
void insertarNodo(Nodo *&, float);
void mostrarLista(Nodo *);
void calcularSumaPrmedio(Nodo *);

//Funcion principal.
int main(){
    //Variables de la funcion.
    float dato;
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
    calcularSumaPrmedio(lista);
    return 0;
}

//Funcion que calcula el mayor y menor numero de la lista.
void calcularSumaPrmedio(Nodo *lista){
    int cont=0;
    float suma = 0;
    while (lista != NULL){  //Miestras no lleguemos al final de la lista.
        suma += lista->dato;
        cont++;
        lista = lista->siguiente;   //Avanzamos una posicion en lista.
    }
    //Mostrando los resultados obtenidos.
    cout << "\n\t El valor de la suma es: " << suma;
    cout << "\n\t El valor del promedio es: " << suma/cont;
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
void insertarNodo(Nodo *&lista, float n){
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