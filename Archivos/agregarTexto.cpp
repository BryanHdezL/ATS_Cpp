// Añadir texto al final de un archivos/Ficheros.

//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Prototipos de funciones.
void agregarContenido();

//Funcion principal.
int main(){
    // Variables de la funcion.
    //Acciones del programa.
    agregarContenido();
    return 0;
}

//Funcion para agregar contenido a un archivo de texto.
void agregarContenido(){
    //Variables de la funcion.
    ofstream archivo;
    string texto;
    //Abrimos el archivo de texto
    archivo.open("./textoEjemplo2.txt", ios::app);   //Abrimos el archivo en modo añadir.
    //Comprobando si el archivo se abrio de forma correcta.
    if (archivo.fail()){
        cout << "\n\t NO SE PUDO ABRIR EL ARCHIVO." << endl;
        exit(1);
    }
    //Agregamos contenido al archivo de texto.
    cout << "Texto a agregar: ";
    getline(cin, texto);
    archivo << texto << endl;
    //Cerramos el archivo.
    archivo.close();
}