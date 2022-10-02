// Ejercicio #5.

/****************************************************************
Crear un archivo binario donde almacenar un registro que contenga
las pulsaciones de un atleta en una determinada hora, el 
programa debe tener un menu con las siguientes opciones:
    1. Comenzar a digitar las pulsaciones.
    2. Añadir mas pulsaciones.
    3. Mostrar las pulsaciones registradas.
    4. Salir.
****************************************************************/

//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Estructura para el registro
struct Registro{
    int pulsaciones;
    float hora;
};

//Prototipos de funciones.
void menu();
void mostrar();
void agregar();
void crear();

//Funcion principal.
int main(){
    // Variables de la funcion.
    //Acciones del programa.
    menu();
    return 0;
}

//Funcion para mostrar el contenido del archivo binario.
void mostrar(){
    //Variables de la funcion.
    ifstream archivoB;  //Archivo de modo lectura.
    Registro pulso; 
    //Abrimos el archivo.
    archivoB.open("Pulsos.dat", ios::in | ios::binary);
    //Comprobamos sis se abrio correctamente el archivo
    if (archivoB.fail()){
        cout << "\n\t NO SE PUDO ABRIR EL ARCHIVO." << endl;
        exit(1);
    }
    //Solicitamos el primer registro a escribir en el archivo binario.
    system("cls");
    cout << "\n * Contenido del archivo binario *" << endl;
    while (!archivoB.eof()){    //Mientras no se llegue al final del archivo.
        archivoB.read((char *)&pulso, sizeof(Registro));    //Leemos el contenido del archivo.
        if (!archivoB.eof()){
            cout << "\n\t - Hora: " << pulso.hora << endl;
            cout << "\t - Pulso: " << pulso.pulsaciones << endl;
        }
    }
    // Cerramos el archivo binario.
    archivoB.close();
}

//Funcion para escribir en el archivo binario.
void agregar(){
    //Variables de la funcion.
    ofstream archivoB;  //Archivo de tipo open.
    Registro pulso; 
    //Abrimos el archivo.
    archivoB.open("Pulsos.dat", ios::app | ios::binary);
    //Comprobamos sis se abrio correctamente el archivo
    if (archivoB.fail()){
        cout << "\n\t NO SE PUDO ABRIR EL ARCHIVO." << endl;
        exit(1);
    }
    //Solicitamos el primer registro a escribir en el archivo binario.
    cout << "\n * Capture el contenido a escribir en el archivo binario *" << endl;
    cout << " - Hora: ";
    cin >> pulso.hora;
    cout << " - Pulso: ";
    cin >> pulso.pulsaciones;
    //Escribimos contenido en el arhcivo binario.
    archivoB.write((char *)&pulso, sizeof(Registro)); //(Posicion de memoria donde se encuentra el registro, tamaño del registro)
    //Cerramos el archivo binario.
    archivoB.close();
}

//Funcion para crear el archivo binario.
void crear(){
    //Variables de la funcion.
    ofstream archivoB;  //Archivo de tipo open.
    Registro pulso; 
    //Abrimos el archivo.
    archivoB.open("Pulsos.dat", ios::out | ios::binary);
    //Comprobamos sis se abrio correctamente el archivo
    if (archivoB.fail()){
        cout << "\n\t NO SE PUDO CRAR EL ARCHIVO." << endl;
        exit(1);
    }
    //Solicitamos el primer registro a escribir en el archivo binario.
    cout << "\n * Capture el contenido a escribir en el archivo binario *" << endl;
    cout << " - Hora: ";
    cin >> pulso.hora;
    cout << " - Pulso: ";
    cin >> pulso.pulsaciones;
    //Escribimos contenido en el arhcivo binario.
    archivoB.write((char *)&pulso, sizeof(Registro)); //(Posicion de memoria donde se encuentra el registro, tamaño del registro)
    //Cerramos el archivo binario.
    archivoB.close();
}

// Funcion menu
void menu() {
    //Variables de la funcion.
    int opc;
    //Mostramos el menu.
    do{
        cout << "\n\t+-------------------------------------------------------+";
        cout << "\n\t|                    MENU DE OPCIONES                   |";
        cout << "\n\t+-------------------------------------------------------+";
        cout << "\n\t|     1) Comenzar a digitar las pulsaciones.            |";
        cout << "\n\t|     2) Agregar mas pulsaciones.                       |";
        cout << "\n\t|     3) Mostrar las pulsaciones registradas.           |";
        cout << "\n\t|     4) Salir del programa.                            |";
        cout << "\n\t+-------------------------------------------------------+";
        cout << "\n\nDigite la accion que desea realizar: ";
        cin >> opc;
        //Invocamos a la funcion deseada segun sea la opcion elegida.
        switch(opc){
            case 1:
                crear();
                break;
            case 2:
                agregar();
                break;
            case 3:
                mostrar();
                break;
        }
    } while (opc != 4);
}

