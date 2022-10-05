//Librerias
#include <bits/stdc++.h>
using namespace std;

// Declaracion de la clase Tablero.
class Tablero{
    //Atributos.
    private:
        int x;
        int y;
    //Metodos.
    public:
        //Constructor.
        Tablero(int x, int y) {
            this->x = x;
            this->y = y;
        }
        //Movimientos en el tablero
        void moverAbajo(int);
        void moverArriba(int);
        void moverIzquierda(int);
        void moverDerecha(int);
        int getX();
        int getY();
};