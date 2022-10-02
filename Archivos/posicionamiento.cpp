// Funciones de posicionamiento.

/****************************************************************
ofstream : Escritura.
    * tellp() -> Funcion que te indica la posicon en la que se 
        encuentra el cursor en el archivo.
    * seekp(N) -> Funcion que posiciona el cursor en N para 
        escribir a partir de dicha posicoon N.

ifstream : Lectura.
    * tellg() -> Funcion que te indica la posicon en la que se 
        encuentra el cursor en el archivo.
    * seekg(N) -> Funcion que posiciona el cursor en N para 
        leer a partir de dicha posicoon N.
****************************************************************/

//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Prototipos de funciones.
void escribir();
void leer();

//Funcion principal.
int main(){
    // Variables de la funcion.
    //Acciones del programa.
    escribir();
    leer();
    return 0;
}

//Funcion para agregar contenido a un archivo de texto.
void leer(){
    //Variables de la funcion.
    ifstream archivo;
    string texto;
    //Abrimos el archivo de texto
    archivo.open("posicion.txt", ios::in);
    //Comprobando si el archivo se abrio de forma correcta.
    if (archivo.fail()){
        cout << "\n\t NO SE PUDO ABRIR EL ARCHIVO." << endl;
        exit(1);
    }
    //Leemos el contenido del archivo.
    archivo.seekg(5);
    cout << "Posicion actual: " << archivo.tellg() << endl; //Indicamos la posicon del cursor.
    getline(archivo, texto);
    cout << texto << endl;
    //Cerramos el archivo.
    archivo.close();
}

//Funcion para agregar contenido a un archivo de texto.
void escribir(){
    //Variables de la funcion.
    ofstream archivo;
    //Abrimos el archivo de texto
    archivo.open("posicion.txt", ios::out);
    //Comprobando si el archivo se abrio de forma correcta.
    if (archivo.fail()){
        cout << "\n\t NO SE PUDO ABRIR EL ARCHIVO." << endl;
        exit(1);
    }
    //Agregamos contenido al archivo de texto.
    cout << "Posicion actual: " << archivo.tellp() << endl; //Indicamos la posicon del cursor.
    archivo << "Hola, que tal?" << endl;    //Agregamos contenido en el archivo.
    archivo.seekp(5);   //A partir de la poscion 5 elimina el contenido y escribe uno nuevo.
    cout << "Posicion actual: " << archivo.tellp() << endl; //Indicamos la posicon del cursor.
    archivo << " como estas?" << endl;    //Agregamos contenido en el archivo.
    //Cerramos el archivo.
    archivo.close();
}