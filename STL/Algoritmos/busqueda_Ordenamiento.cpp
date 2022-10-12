// Algoritmos - Busqueda y Ordenamiento

// Librerias
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

// Prototipos de funciones.
template <typename T>
bool esPar(T valor);
int numAleatorios();

// Funcion principal.
int main(){
    // Variables de la funcion
    vector<int> valores(10);
    vector<int> pares;
    // Acciones del programa.
    // Generamos numeros aleatorios y los guardamos dentro de vector.
    generate(valores.begin(), valores.end(), numAleatorios);
    // Mostramos el vector valores.
    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, "|"));
    cout << endl;
    // Iterador para recorrer el vector valores.
    vector<int>::iterator i = valores.begin();
    while ((i = find_if(i, valores.end(), esPar<int>)) != valores.end()){
        pares.push_back(*i);
        i++;
    }
    // Ordenamos el arreglo de pares.
    sort(pares.begin(), pares.end());
    // Mostramos el vector pares.
    copy(pares.begin(), pares.end(), ostream_iterator<int>(cout, "|"));
    // Fin del programa.
    return 0;
}

// Funcion que retorna numeros aleatorios.
int numAleatorios(){
    return (rand() % 10);
}

// Funcion logica para calcular si un numero es par
template <typename T>
bool esPar(T valor){
    return ((valor % 2) == 0);
}