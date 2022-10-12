// STL - Set 

// Librerias
#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>
using namespace std;

// Variables globales.
set<int> valores;

// Funcion principal.
int main(){
    // Inserta elementos al final de la lista.
    valores.insert(5);
    valores.insert(3);
    valores.insert(10);
    valores.insert(1);
    valores.insert(15);
    // Mostramos set
    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, "|"));
    cout << endl;
    // Intentamos insertar elementos repetidos en el conjunto.
    valores.insert(3);
    valores.insert(10);
    // Mostramos set
    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, "|"));
    cout << endl;
    // Buscamos de un elemento.
    set<int>::iterator i = valores.find(3);
    if (i != valores.end()){
        cout << "El elemento " << *i << " si ha encontrado en la lista." << endl;
    }else{
        cout << "El elemento no ha encontrado en la lista." << endl;
    }
    // Elimina el primer elemento de la lista.
    valores.erase(1);
    // Mostramos set
    copy(valores.begin(), valores.end(), ostream_iterator<int>(cout, "|"));
    cout << endl;
    // Fin del programa.
    return 0;
}
