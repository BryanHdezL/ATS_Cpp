//Ejercicio #1 Rellenado de una matriz.

/****************************************************************
Hacer un programa para rellenar una matriz, pidianeod al usuario
el numero de filas y columnas. Posteriormente mostrar la matriz en
pantalla.
****************************************************************/

//Librerias.
#include <iostream>
#include <conio.h>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        int fil,col,num[100][100];
    //Solicitar datos al usuario.
        //Capturra el numero de filas y columnas.
        cout<<"Digite el numero de filas: "; cin>>fil;
        cout<<"Digite el numero de columnas: "; cin>>col;
        //Acciones del programa (llenar).
        for(int i=0;i<fil;i++){
            for(int j=0;j<col;j++){
                cout<<"Digite el numero en: ["<<i<<"]["<<j<<"]: "; cin>>num[i][j];
            }
        }
    //Mostrar resultados del programa.
        cout<<"La matriz queda de la siguinete manera: "<<endl;
        for(int i=0;i<fil;i++){
            for(int j=0;j<col;j++){
                cout<<num[i][j]<<" ";
            }
            cout<<"\n";
        }
    getch();
    return 0;
}