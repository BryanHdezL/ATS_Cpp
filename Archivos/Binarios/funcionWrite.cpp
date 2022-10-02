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

//Funcion principal.
int main(){
    // Variables de la funcion.
    //Acciones del programa.
    escribir();
    return 0;
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
