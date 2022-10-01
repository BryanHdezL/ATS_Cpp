// Ejercicio #2.

/****************************************************************
Realice un programa que pida al usuario el nombre o ubicacion de 
un fichero de texto y, a continuacion de lectura a todo el 
fichero.
****************************************************************/

//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Prototipos de funciones.
void leer();

//Funcion principal.
int main(){
    // Variables de la funcion.
    //Acciones del programa.
    leer();
    return 0;
}

//Funcion para leer y comtrar el contenido de un archivo de texto.
void leer(){
    // Variables de la funcion.
    ifstream archivo;
    string texto, direccion;
    //Leemos el nombre/direccion del archivo a leer y mostrar su contenido.
    fflush(stdin);
    cout << "Nombre/Direccion del archivo a leer: ";
    getline(cin, direccion);
    //Abrimos el archivo.
    archivo.open(direccion.c_str(), ios::in);
    if (archivo.fail()){
        cout<<" \n\t NO SE PUDO ABRIR EL ARCHIVO"<<endl;
        exit(1);
    }
    //Mostramos el contenido del archivo.
    while (!archivo.eof()){
        fflush(stdin);
        getline(archivo, texto);
        cout << texto << endl;
    }
    // Cerramos el archivo.
    archivo.close();
}