// STL - Vector

// Librerias
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Variables globales.
vector<int> numeros;

//Prototipos de funciones.
void mostrarVector();

// Funcion principal.
int main(){
    // Inserta elementos al final del vector.
    numeros.push_back(5);
    numeros.push_back(10);
    numeros.push_back(1);
    numeros.push_back(15);
    numeros.push_back(30);
    numeros.push_back(0);
    numeros.push_back(45);
    numeros.push_back(20);
    mostrarVector();
    // Elimina el ultimo elemento del vector.
    numeros.pop_back();
    mostrarVector();
    // Modifica un elemento en particular
    numeros[3] = 35;
    mostrarVector();
    // Ordena los elementos del vector
    sort(numeros.begin(), numeros.end());
    mostrarVector();
    // Vacea el contenido del vector
    numeros.erase(numeros.begin(), numeros.end());
    mostrarVector();
    // Fin del programa.
    return 0;
}

// Funcion que muestra el contenido del vector
void mostrarVector(){
    cout << "Vector: ";
    for (int i = 0; i < numeros.size(); i++){
        cout << numeros[i] << "|";
    }
    cout << "\n";
}