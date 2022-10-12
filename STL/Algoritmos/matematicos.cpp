// Algoritmos - Matemaricos

// Librerias
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

// Prototipos de funciones.
template <typename T>
bool esPositivo(T valor);

// Funcion principal.
int main(){
    // Variables de la funcion
    vector<float> numeros;
    // Acciones del programa.
    //Abrimos el archivo en modo lectura
    ifstream archivo("archivoNumerico.txt", ios::in);  
    // Copiamos todos los elementos del arechivo hacia el vector numeros.
    copy(istream_iterator<float>(archivo), istream_iterator<float>(), back_inserter(numeros));
    // Calculamos el maximo y minimo de los elementos del vector
    cout << "Maximo: " << *max_element(numeros.begin(), numeros.end()) << endl;
    cout << "Minimo: " << *min_element(numeros.begin(), numeros.end()) << endl;
    // Calculamos el valor promedio de los elementos del vector
    cout << "Promedio: " << (accumulate(numeros.begin(), numeros.end(), 0.0) / numeros.size()) << endl;
    // Calculamos el numero de numeros positivos del arreglo.
    cout << "Positivos: " << count_if(numeros.begin(), numeros.end(), esPositivo<float>) << endl;
    // Fin del programa.
    return 0;
}


// Funcion logica para calcular si un numero es positivo
template <typename T>
bool esPositivo(T valor){
    return (valor >= 0);
}