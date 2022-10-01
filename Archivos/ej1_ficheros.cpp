// Ejercicio #1.

/****************************************************************
Realice un programa que pida al usuario el nombre de un fichero 
de texto y, a continuacion permita almacenar al usario tantas 
frases como el usario desee.
****************************************************************/

//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Variables globales.
ofstream archivo;

//Prototipos de funciones.
void crearArchivo();
void agregarContenido();

//Funcion principal.
int main(){
    // Variables de la funcion.
    char resp;
    //Acciones del programa.
    crearArchivo();
    do{
        fflush(stdin);
        agregarContenido();
        cout << "Desea agregar mas [S/N]: ";
        cin >> resp;
    } while ((resp == 'S') || (resp == 's'));
    archivo.close();    //Cerramos el archivo.
    return 0;
}

//Funcion para agregar contenido al archivo de texto.
void agregarContenido(){
    string contenido;
    fflush(stdin);
    cout << "Contenido: ";
    getline(cin, contenido);
    archivo << contenido << endl;
}

//Funcion que crea el archivo de texto.
void crearArchivo(){
    string nombre;
    //Solicitamos el nombre que tendra el archivo.
    cout << "Nombre del archivo: ";
    getline(cin, nombre);
    //Creamos el archivo.
    archivo.open(nombre.c_str(), ios::out);
    //Mensaje en caso de que no se halla generado bien el archivo
    if (archivo.fail()){
        cout << "\n\t NO SE PUDO ABRIR EL ARCHIVO" << endl;
        exit (1);
    }
}

