// Ejercicio #3.

/****************************************************************
Realice un programa que pida al usuario el nombre o ubicacion de 
un fichero de texto y, a continuacion añada texto en el hasta 
que el usario decida.
****************************************************************/

//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Variables globales.
ofstream archivo;

//Prototipos de funciones.
void leer();
void agregarContenido();

//Funcion principal.
int main(){
    // Variables de la funcion.
    char respuesta;
    //Acciones del programa.
    leer(); //Leemos el archivo de texto
    do{
        fflush(stdin);
        agregarContenido();
        fflush(stdin);
        cout << "Desea agregar mas [S/N]: ";
        cin >> respuesta;
    } while ((respuesta == 's') || (respuesta == 'S'));
    archivo.close();    //Cerramos el archivo.
    return 0;
}

//Funcion para agregar contenido al archivo de texto.
void agregarContenido(){
    //Variables de la funcion.
    string texto;
    //Leemos el contenido a agregar.
    fflush(stdin);
    cout << "Texto: ";
    getline(cin, texto);
    archivo << texto << endl;
}

//Funcion para leer el archivo.
void leer(){
    //Variables de la funcion.
    string direccion;
    //Solicitamos el nombre/direccion del archivo.
    cout << "Nombre/Direccion del archivo: ";
    getline(cin, direccion);
    //Abrimos el archivo.
    archivo.open(direccion.c_str(), ios::app);    //Abrimos el archivo en modo añadir.
    //Comprobamos si el archivo se abrio correctamente
    if(archivo.fail()){
        cout << "\n\t NO SE PUDO ABRIR EL ARCHIVO.";
        exit(1);
    }
}