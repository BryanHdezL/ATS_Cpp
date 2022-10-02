// Archivos Binarios, funcione escribir (write).

//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Estructura.
struct Registro{
    char nombre[20];
    char apellido[20];
};

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

//Fncion para leer el contenido de un archivo binario.
void leer(){
    //Variables de la funcion.
    ifstream archivoB;  //Archivo de tipo entrada.
    Registro persona;   //Variable de tipo persona.
    //Abrimos el archivo.
    archivoB.open("Prueba.dat", ios::in | ios::binary);
    //Comprobamos sis se abrio correctamente el archivo
    if (archivoB.fail()){
        cout << "\n\t NO SE PUDO ABRIR EL ARCHIVO." << endl;
        exit(1);
    }
    //Leemos el contenido del archivo binario.
    archivoB.read((char *)&persona, sizeof(Registro)); //(Posicion de memoria donde se encuentra el registro, tamaño del registro)
    //Mostramos los datos leidos del archivo binario.
    cout << "\n * Contenido del archivo binario *" << endl;
    cout << "\t - Nombre: " << persona.nombre << endl;
    cout << "\t - Apellido: " << persona.apellido << endl;
    //Cerramos el archivo binario.
    archivoB.close();
}

//Fncion para escribir contenido en un archivo binario.
void escribir(){
    //Variables de la funcion.
    ofstream archivoB;  //Archivo de tipo open.
    Registro persona;   //Variable de tipo persona.
    //Abrimos el archivo.
    archivoB.open("Prueba.dat", ios::out | ios::binary);
    //Comprobamos sis se abrio correctamente el archivo
    if (archivoB.fail()){
        cout << "\n\t NO SE PUDO ABRIR EL ARCHIVO." << endl;
        exit(1);
    }
    //Solicitamos los registros a escribir en el archivo binario.
    fflush(stdin);
    cout << "\n * Capture el contenido a escribir en el archivo binario *" << endl;
    cout << " - Nombre: ";
    cin.getline(persona.nombre, 20, '\n');
    fflush(stdin);
    cout << " - Apellido: ";
    cin.getline(persona.apellido, 20, '\n');
    //Escribimos contenido en el arhcivo binario.
    archivoB.write((char *)&persona, sizeof(Registro)); //(Posicion de memoria donde se encuentra el registro, tamaño del registro)
    //Cerramos el archivo binario.
    archivoB.close();
}
