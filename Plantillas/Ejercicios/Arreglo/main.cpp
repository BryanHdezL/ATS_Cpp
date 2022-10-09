//Librerias.
#include <bits/stdc++.h>
#include "Arreglo.h"
using namespace std;

/***********************************************************************
Defina una plantilla para la clase Arreglo, la cual podra definir 
valores de distinto tipo, el cual se definira en el momento de la 
instancia, el programa debera tener un menu con las siguientes opciones.

    1. Agregar un nuevo elememento al arreglo.
    2. Comprobar el espacio en el arreglo.
    3. Ver arreglo.
    4. Vaciar arreglo.
    5. Salir.
***********************************************************************/

//Prototipos de funciones
void menu();

//Variables globales.
Arreglo<char> arreglo1(5);

//Funcion principal.
int main(){
    //Acciones del programa.
    menu();
    //Fin del programa.
    return 0;
}

// Funcion menu
void menu() {
    //Variables de la funcion.
    int opc;
    char nuevoElemento;
    //Mostramos el menu.
    do{
        cout << "\n\t+--------------------------------------------------+";
        cout << "\n\t|                  MENU DE OPCIONES                |";
        cout << "\n\t+--------------------------------------------------+";
        cout << "\n\t|     1) Agregar un nuevo elemento al arreglo.     |";
        cout << "\n\t|     2) Comprobar el espacio en el arreglo.       |";
        cout << "\n\t|     3) Ver arreglo.                              |";
        cout << "\n\t|     4) Vaciar arreglo.                           |";
        cout << "\n\t|     5) Salir del programa.                       |";
        cout << "\n\t+--------------------------------------------------+";
        cout << "\n\nDigite la accion que desea realizar: ";
        cin >> opc;
        //Invocamos a la funcion deseada segun sea la opcion elegida.
        switch(opc){
            case 1: //Agregar elemento.
                cout << "\n * Agregar Elemento *" << endl;
                if (arreglo1.arregloLleno()){
                    cout << "\t - El arreglo esta lleno, no puede agregar mas elementos." << endl;
                }else{
                    cout << "\t - Elemento a agregar: ";
                    cin >> nuevoElemento;
                    arreglo1.agregar(nuevoElemento);
                }
                break;
            case 2: //Comprobar espacio.
                cout << "\n * Comprobando Espacio *" << endl;
                if (arreglo1.arregloLleno()){
                    cout << "\t - El arreglo esta lleno." << endl;
                }else{
                    cout << "\t - El arreglo aun no esta lleno." << endl;
                }
                break;
            case 3: //Mostrar arreglo.
                cout << "\n * Mostrar contenido *" << endl;
                arreglo1.mostrarArreglo();
                break;
            case 4: //Vaciar arreglo.
                cout << "\n * Vaciar arreglo *" << endl;
                arreglo1.vaciarArreglo();
                break;
            default:
                cout << "\t BYE" << endl;
                break;
        }
    } while (opc != 5);
}