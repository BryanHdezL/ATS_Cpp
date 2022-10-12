// STL - List 

// Librerias
#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

// Variables globales.
list<int> datos;

//Prototipos de funciones.
void mostrarLista();

// Funcion principal.
int main(){
    // Inserta elementos al final de la lista.
    datos.push_back(5);
    datos.push_back(1);
    datos.push_back(6);
    mostrarLista();
    // Inserta elementos al inicio de la lista.
    datos.push_front(2);
    datos.push_front(7);
    datos.push_front(3);
    mostrarLista();
    // Elimina el primer elemento de la lista.
    datos.pop_front();
    mostrarLista();
    // Elimina el ultimo elemento de la lista.
    datos.pop_back();
    mostrarLista();
    // Ordena los elementos del Deque
    datos.sort();
    mostrarLista();
    // Vacea el contenido del Deque
    datos.erase(datos.begin(), datos.end());
    mostrarLista();
    // Fin del programa.
    return 0;
}

// Funcion que muestra el contenido de la lista
void mostrarLista(){
    list<int>::iterator i = datos.begin();
    cout << "Lista: ";
    while (i != datos.end()){
        cout << *i << "|";
        i++;
    }
    cout << "\n";
}