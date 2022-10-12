// Iteradores - Random acces iterators

// Librerias
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Variables globales.
vector<char> letras(10);

//Prototipos de funciones.
template <class Iter>
void mostrar(Iter , Iter);

// Funcion principal.
int main(){
    // Agregando elementos aleatorios al vector.
    for (int i = 0; i < 10; i++){
        letras[i] = ('A' + (rand() % 26));
    }
    // Visualizar los elementos del vector en orden ascendente.
    mostrar(letras.begin(), letras.end());
    // Visualizar los elementos del vector en orden descendente.
    mostrar(letras.rbegin(), letras.rend());
    // Visualizar los elementos del medio del vector en orden ascendente (1-8).
    mostrar(letras.begin() + 1, letras.end() - 1);
    // Fin del programa.
    return 0;
}

// Funcion template para mostrar los elementos de un contenedor
template <class Iter>
void mostrar(Iter inicio, Iter final){
    while (inicio != final){
        cout << *inicio << "|";
        inicio++;
    }
    cout << "\n";
}