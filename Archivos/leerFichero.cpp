// Lectura de archivos/Ficheros.

//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Prototipos de funciones.
void lectura();

//Funcion principal.
int main(){
    // Variables de la funcion.
    //Acciones del programa.
    lectura();
    return 0;
}

//Funcion para leer el archivo de texto.
void lectura(){
    //Variables de la funcion.
    ifstream archivo;
    string texto;
    //Algoritmo para leer el archivo de texto.
    archivo.open("./textoEjemplo.txt", ios::in);    //Abrimos el archivo en modo lectura.
    if (archivo.fail()){
        cout << "\n\t NO SE PUDO ABRIR EL ARCHIVO." << endl;
        exit(1);
    }
    //Guardamos el contenido del archivo en nuestra variable texto.
    while (!archivo.eof()){ //Miestras no sea el final del archivo.
        getline(archivo, texto);
        cout << texto << endl;
    }
    archivo.close();    //Cerramos el archivo.
}