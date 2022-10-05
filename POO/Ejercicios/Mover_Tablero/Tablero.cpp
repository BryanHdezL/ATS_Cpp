//Ejercicio 3.

/***********************************************************************
Construir un programa que permita dirigir el movimiento de un objeto 
dentro de un tablero y actualice su posicion dentro del mismo. 
Los movimientos posibles sopn ARRIBA, ABAJO, IZQUIERDA y DERECHA. 
Tras cada movimiento el programa mostrar la nueva direccion elegida y 
las coordenadas de situacion del objeto dentro del tablero.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
#include "Tablero.h"
using namespace std;

//Prototipos de las funciones.
void menu(Tablero *&, int);

//Funcion principal.
int main(){
    //Variables de la funcion.
    Tablero* ob1;
    int opc;
    int x, y;
    //Acciones del programa.
    cout << "X: ";
    cin >> x;
    cout << "Y: ";
    cin >> y;
    //Inicializando el objeto.
    ob1 = new Tablero(x, y);
    //Opciones de movimiento segun decida el usuario.
    do{
        cout << "\n\t+--------------------------------+";
        cout << "\n\t|         MENU DE OPCIONES       |";
        cout << "\n\t+--------------------------------+";
        cout << "\n\t|     1) Mover Arriba.           |";
        cout << "\n\t|     2) Mover Abajo.            |";
        cout << "\n\t|     3) Mover Derecha.          |";
        cout << "\n\t|     4) Mover Izquierda.        |";
        cout << "\n\t|     5) Salir del programa.     |";
        cout << "\n\t+--------------------------------+";
        cout << "\n\nDigite la accion que desea realizar: ";
        cin >> opc;
        menu(ob1, opc);
    } while (opc != 5);
    //Destruimos el objeto.
    delete ob1;
    return 0;
}

// Funcion menu
void menu(Tablero *&ob,int opc) {
    //Variables de la funcion.
    int posiciones;
    //Invocamos a la funcion deseada segun sea la opcion elegida.
    if (opc >= 1 && opc <= 4){
        cout << "\n No. de posiciones: ";
        cin >> posiciones;
    }
    switch (opc) {
        case 1:
            ob->moverArriba(posiciones);
            break;
        case 2:
            ob->moverAbajo(posiciones);
            break;
        case 3:
            ob->moverDerecha(posiciones);
            break;
        case 4:
            ob->moverIzquierda(posiciones);
            break;
        case 5:
            break;
        default:
            cout << "\t Opcion no valida." << endl;
            break;
    }
    cout << "\n\t Posicion actual: " << ob->getX() << "," << ob->getY() << endl;
}

//Movimiento hacia abajo.
void Tablero::moverAbajo(int n){
    y -= n;
}
//Movimiento hacia arriba.
void Tablero::moverArriba(int n){
    y += n;
}
//Movimiento hacia la izquierda.
void Tablero::moverIzquierda(int n){
    x -= n;
}
//Movimiento hacia la derecha.
void Tablero::moverDerecha(int n){
    x += n;
}
//Obtenemos el valor de X.
int Tablero::getX(){
    return x;
}
//Obtenemos el valor de Y.
int Tablero::getY(){
    return y;
}