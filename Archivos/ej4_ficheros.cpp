// Ejercicio #4.

/****************************************************************
Hacer un programa en C++ para guardar numeros telefonicos que 
muestre un menu con las siguinetes opciones:
    1. Crear agenda telefonica (Nombre, apellidos, telefono).
    2. Agregar mas contactos (nombre, apellidos, telefono).
    3. Visualizar contactos existentes.
****************************************************************/

//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Estructura.
struct Contacto{
    string nombre;
    string apellido;
    string numero;
}contacto;

//Prototipos de funciones.
void menu();
void crearAgenda();
void agregarContacto();
void verAgenda();

//Funcion principal.
int main(){
    //Acciones del programa.
    menu();
    return 0;
}

// Funcion menu
void menu() {
    //Variables de la funcion.
    int opc;
    //Mostramos el menu.
    do{
        cout << "\n\t+----------------------------------------------------------------------+";
        cout << "\n\t|                            MENU DE OPCIONES                          |";
        cout << "\n\t+----------------------------------------------------------------------+";
        cout << "\n\t|     1) Crear agenda telefonia (nombre, apellidos, telefono).         |";
        cout << "\n\t|     2) Agregar mas contactos (nombre, apellidos, telefono).          |";
        cout << "\n\t|     3) Visualizar contactos existentes.                              |";
        cout << "\n\t|     4) Salir del programa.                                           |";
        cout << "\n\t+----------------------------------------------------------------------+";
        cout << "\n\nDigite la accion que desea realizar: ";
        cin >> opc;
        //Invocamos a la funcion deseada segun sea la opcion elegida.
        switch(opc){
            case 1:
                crearAgenda();
                break;
            case 2:
                agregarContacto();
                break;
            case 3:
                verAgenda();
                break;
        }
    } while (opc != 4);
}

//Funcion para visualizar la agendda de contactos.
void verAgenda(){
    //Variables de la funcion.
    ifstream archivo;
    string texto;
    //Abrimos el archivo.
    archivo.open("Agenda_Telefonica.txt", ios::in);
    //Comprobamos si el archivo se abrio correctamente.
    if (archivo.fail()){
        cout << "\n\t NO SE PUDO ABRIR CORRECTAMENTE EL ARCHIVO." << endl;
        exit(1);
    }
    //Mostramos el contenido del archivo de texto en consola.
    while (!archivo.eof()){ //Mientras no sea el final del archivo.
        getline(archivo, texto);
        cout << texto << endl;
    }
    //Cerramos el archivo.
    archivo.close();
}

//Funcion para agregar contacto a la agenda.
void agregarContacto(){
    //Variable de la funcion.
    ofstream archivo;
    //Abrimos el archivo.
    archivo.open("Agenda_Telefonica.txt", ios::app);
    //Comprobamos si el archivo se abrio correctamente
    if (archivo.fail()){
        cout << "\n\t NO SE PUDO ABRIR CORRECTAMENTE EL ARCHIVO." << endl;
        exit(1);
    }
    //Leemos los datos del contacto a agregar.
    cout << "\n * Nuevo contacto: * " << endl;
    fflush(stdin);
    cout << "\t - Nombre: "; 
    getline(cin, contacto.nombre);
    fflush(stdin);
    cout << "\t - Apellido: "; 
    getline(cin, contacto.apellido);
    fflush(stdin);
    cout << "\t - Numero: "; 
    getline(cin, contacto.numero);
    //Agregamos el contacto a la agenda.
    archivo << contacto.nombre << "\t\t\t\t" << contacto.apellido << "\t\t\t\t" << contacto.numero << endl;
    //Cerramos el archivo.
    archivo.close();
}

//Funcion para crear un nuevo contacto.
void crearAgenda(){
    //Variables de las funcion.
    ofstream archivo;
    //Creamos el archivo de texto.
    archivo.open("Agenda_Telefonica.txt", ios::out);
    //Comprobamos si el archivo se genero correctamente
    if (archivo.fail()){
        cout << "\n\t NO SE PUDO GENERAR CORRECTAMENTE EL ARCHIVO." << endl;
        exit(1);
    }
    //Generamos el primer contacto de la agenda.
    cout << "\n * Nuevo contacto: * " << endl;
    fflush(stdin);
    cout << "\t - Nombre: "; 
    getline(cin, contacto.nombre);
    fflush(stdin);
    cout << "\t - Apellido: "; 
    getline(cin, contacto.apellido);
    fflush(stdin);
    cout << "\t - Numero: "; 
    getline(cin, contacto.numero);
    //Agregamos el contacto a la agenda.
    archivo << contacto.nombre << "\t\t\t\t" << contacto.apellido << "\t\t\t\t" << contacto.numero << endl;
    //Cerramos el archivo.
    archivo.close();
}