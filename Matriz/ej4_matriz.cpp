//Ejercicio #4 Rellenar una matriz con una funcion aleatoria.

/****************************************************************
Hacer una matriz preguntando al usuario el numero de filas y
columnas, llenqarla de numeros aleatorio, copuar el contenido a
otra matriz y por ultimo mostrarla en pantalla.
****************************************************************/

//Librerias.
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        int fil,col,A[50][50],B[50][50];
    //Acciones del programa.
        //Solicitar datos al usuario.
            cout<<"Digite el numero de filas: "; cin>>fil;
            cout<<"Digite el numero de columnas: "; cin>>col;
            srand(time(NULL));  //Funcion para generar numeros aleatorios.
            for(int i=0;i<fil;i++){
                for(int j=0;j<col;j++){
                    A[i][j] = (1+rand()%(100));
                }
            }
        //Copeando a otra matriz.
            for(int i=0;i<fil;i++){
                for(int j=0;j<col;j++){
                    B[i][j]=A[i][j];
                }
            }
    //Mostrar resultados del programa.
            for(int i=0;i<fil;i++){
                for(int j=0;j<col;j++){
                    cout<<B[i][j]<<" ";
                }
                cout<<"\n";
            }
    getch();
    return 0;
}