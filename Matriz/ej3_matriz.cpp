//Ejercicio #3 Copear contenido de una matriz a otra.

/****************************************************************
Compear el contenido de la matriz A en la matriz B.
****************************************************************/

//Librerias.
#include <iostream>
#include <conio.h>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        int A[2][2],B[2][2];
    //Solicitar valores al usuaurio.
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cout<<"Valor A["<<i<<"]["<<j<<"]: "; cin>>A[i][j];
            }
        }
    //Acciones del programa.
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                B[i][j]=A[i][j];
            }
        }
    //Mostrar resultados del programa.
        cout<<"\nLa matriz B queda de la siguiente manera: \n";
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cout<<B[i][j]<<" ";
            }
            cout<<"\n";
        }
    getch();
    return 0;
}