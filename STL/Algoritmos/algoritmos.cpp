// Algoritmos - Libreria algorithm

// Librerias
#include <bits/stdc++.h>
#include <algorithm>
#include <list>
using namespace std;

// Prototipos de funciones.
int numAleatorios();

// Funcion principal.
int main(){
    // Variables de la funcion
    list<int> valores(10);
    // Acciones del programa.
    // Generando numeros aleatorios en un ranfo de la lista.
    generate(valores.begin(), valores.end(), numAleatorios);
    // Mostrndo los elementos de la lista.
    ostream_iterator<int> salida(cout, "|");
    copy(valores.begin(), valores.end(), salida);
    cout << endl;
    // Buscamos la primera aparicion del numero 8 en la lista.
    list<int>::iterator i;
    i = find(valores.begin(), valores.end(), 8);
    // Analizamos si i no sobrepasa los rangos de la lista.
    if (i != valores.end()){
        cout << "El elemento " << *i << " si ha encontrado en la lista." << endl;
    }else{
        cout << "El elemento no ha encontrado en la lista." << endl;
    }
    // Fin del programa.
    return 0;
}

// Funcion que retorna numeros aleatorios.
int numAleatorios(){
    return (rand() % 10);
}