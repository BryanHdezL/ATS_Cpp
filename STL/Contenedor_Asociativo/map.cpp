// STL - Map

// Librerias
#include <iostream>
#include <map>
#include <iterator>
#include <algorithm>
using namespace std;

// Variables globales.
typedef pair<int, string> par;
map<int, string> valores;   // Mapa <clave, valor>

// Funcion principal.
int main(){
    // Variables de la funcion.
    map<int, string>::iterator i;
    // Inserta elementos al final de la lista.
    valores.insert(par(5, "Alejandro"));
    valores.insert(par(2, "Fatima"));
    valores.insert(par(1, "Juan"));
    valores.insert(par(7, "Bryan"));
    // Mostramos map
    cout << "\n * Mapa * " << endl;
    for (i = valores.begin(); i != valores.end(); i++){
        cout << "Clave: " << i->first << " | Valor: " << i->second << endl;
    }
    // Insertar claves duplicadas.
    valores.insert(par(1, "Luis"));
    // Mostramos map
    cout << "\n * Mapa * " << endl;
    for (i = valores.begin(); i != valores.end(); i++){
        cout << "Clave: " << i->first << " | Valor: " << i->second << endl;
    }
    // Modificar un valor de una clave existente
    valores[5] = "Andres";
    // Mostramos map
    cout << "\n * Mapa * " << endl;
    for (i = valores.begin(); i != valores.end(); i++){
        cout << "Clave: " << i->first << " | Valor: " << i->second << endl;
    }
    // Buscamos de un elemento.
    i = valores.find(2);
    if (i != valores.end()){
        cout << "\n Valor encontrado " << i->second <<  endl;
    }else{
        cout << "\n Valor no encontrado" << endl;
    }
    // Fin del programa.
    return 0;
}
