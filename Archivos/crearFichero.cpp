// Creacion y escritura de un archivos/Ficheros.

//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Prototipos de funciones.
void escribir();

//Funcion principal.
int main(){
    // Variables de la funcion.
    //Acciones del programa.
    escribir();
    return 0;
}

//Funcion para escribir en el archivo de texto.
void escribir(){
    //Variables de la funcion.
    ofstream archivo;   //Variable de tipo file.
    string nombreArchivo;
    //Algoritmo para escribir en el archivo de texto.
    cout << "Nombre que tendra el archivo: ";
    getline(cin, nombreArchivo);    //Leemos el nombre que tendra el archivo
    archivo.open(nombreArchivo.c_str(), ios::out); //Abrimos el archivo.
    if (archivo.fail()){
        cout << "\n\t NO SE PUDO ABRIR EL ARCHIVO." << endl;
        exit(1);
    }
    archivo << "Hola que tal?, mi nombre es Bryan." << endl;    //Contenido que agregamos al archivo de texto.
    archivo.close();    //Cerramos el archivo.
}