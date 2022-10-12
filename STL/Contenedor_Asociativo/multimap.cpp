// STL - Multimap

// Librerias
#include <iostream>
#include <map>
#include <iterator>
#include <algorithm>
using namespace std;

// Variables globales.
typedef pair<int, string> par;
multimap<int, string> valores;   // Mapa <clave, valor>

// Funcion principal.
int main(){
    // Variables de la funcion.
    multimap<int, string>::iterator i;
    int clave = 1;
    // Inserta elementos al final de la lista.
    valores.insert(par(5, "Alejandro"));
    valores.insert(par(2, "Fatima"));
    valores.insert(par(1, "Juan"));
    valores.insert(par(7, "Bryan"));
    // Mostramos multimap
    cout << "\n * Mapa * " << endl;
    for (i = valores.begin(); i != valores.end(); i++){
        cout << "Clave: " << i->first << " | Valor: " << i->second << endl;
    }
    // Insertar claves duplicadas.
    valores.insert(par(1, "Luis"));
    valores.insert(par(1, "Fernando"));
    valores.insert(par(1, "Karla"));
    // Mostramos multimap
    cout << "\n * Mapa * " << endl;
    for (i = valores.begin(); i != valores.end(); i++){
        cout << "Clave: " << i->first << " | Valor: " << i->second << endl;
    }
    // Conteo de las claves
    cout << "\n Conteo de la clave " << clave << ": " << valores.count(clave) << endl;
    for (i = valores.lower_bound(clave); i != valores.upper_bound(clave); i++){
        cout << "\t" << i->second << endl;
    }
    // Fin del programa.
    return 0;
}
