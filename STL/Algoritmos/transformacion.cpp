// Algoritmos - Transformacion

// Librerias
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

// Prototipos de funciones.
void mayusculas(char &);
char vocales(char);

// Funcion principal.
int main(){
    // Variables de la funcion.
    vector<char> letras;
    // Acciones del programa.
    // Generamos las letras para el vector.
    for (int i = 0; i < 10; i++) {
        letras.push_back('a' + i);
    }
    // Mostramos el arreglo.
    cout << "Vector original: ";
    copy(letras.begin(), letras.end(), ostream_iterator<char>(cout, "|"));
    cout << endl;
    // Desordenamos el vector letras.
    random_shuffle(letras.begin(), letras.end());
    // Mostramos el arreglo.
    cout << "Vector Desordenado: ";
    copy(letras.begin(), letras.end(), ostream_iterator<char>(cout, "|"));
    cout << endl;
    // Pasamos a mayusculas las letras del vector.
    for_each(letras.begin(), letras.end(), mayusculas);
    // Mostramos el arreglo.
    cout << "Vector en Mayusculas: ";
    copy(letras.begin(), letras.end(), ostream_iterator<char>(cout, "|"));
    cout << endl;
    // Mostramos solo las vocales
    cout << "Vocales del vector: ";
    transform(letras.begin(), letras.end(), ostream_iterator<char>(cout, "|"), vocales);
    // Fin del programa.
    return 0;
}

// Duncion para pasar las letras a MAYUSCULA
void mayusculas(char &letra){
    if ((letra >= 'a') && (letra <= 'z')){
        letra -= ('a' - 'A');
    }
}

// Funcion unaria para determinar si una letra es una vocal.
char vocales(char letra){
    return (((letra == 'A') || (letra == 'E') || (letra == 'I') || (letra == 'O') || (letra == 'U')) ? letra : '-');
}

