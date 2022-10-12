// Iteradores - Forward iterators

// Librerias
#include <iostream>
#include <vector>
#include <fstream>  // Archivos.
#include <iterator>             // streams_iterators.
using namespace std;

// Funcion principal.
int main(){
    //VAriables de la funcion
    ifstream archivo;
    vector<char> frase;
    // Abrimos el archvio
    archivo.open("documento.txt", ios::in);
    if (archivo.fail()){
        cout << "NO SE PUDO ABRIR EL ARCHIVO." << endl;
        exit(1);
    }
    //Asignamos la posicion 0 del archivo al puntero.
    istream_iterator<char> p(archivo);  //Iterador para char
    //Copiamos cada caractrer de archvio al vector frase.
    while (!archivo.eof()){ //Mientras no sea el final del archivo
        frase.push_back(*p);    //Almacenamos caracter por caracter
        p++;
    }
    // Mostramos el vector.
    for (int i = 0; i < frase.size(); i++){
        cout << frase[i];
    }
    //Cerramos el archivo.
    archivo.close();
    // Fin del programa.
    return 0;
}

