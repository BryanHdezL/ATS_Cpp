// STL - Deque (Doble Deque)

// Librerias
#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

// Variables globales.
deque<char> letras;

//Prototipos de funciones.
void mostrarDeque();

// Funcion principal.
int main(){
    // Inserta elementos al inicio del Deque.
    letras.push_front('C');
    letras.push_front('B');
    letras.push_front('A');
    mostrarDeque();
    // Inserta elementos al final del Deque.
    letras.push_back('D');
    letras.push_back('E');
    letras.push_back('F');
    mostrarDeque();
    // Elimina el primer elemento del Deque.
    letras.pop_front();
    mostrarDeque();
    // Elimina el ultimo elemento del Deque.
    letras.pop_back();
    mostrarDeque();
    // Modifica un elemento en particular
    letras[0] = 'Z';
    mostrarDeque();
    // Ordena los elementos del Deque
    sort(letras.begin(), letras.end());
    mostrarDeque();
    // Vacea el contenido del Deque
    letras.erase(letras.begin(), letras.end());
    mostrarDeque();
    // Fin del programa.
    return 0;
}

// Funcion que muestra el contenido del Deque
void mostrarDeque(){
    cout << "Deque: ";
    for (int i = 0; i < letras.size(); i++){
        cout << letras[i] << "|";
    }
    cout << "\n";
}