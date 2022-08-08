//Ejercicio #5 Mostrar en pantalla una matriz traspuesta.

/****************************************************************
Realice un programa que lea una matriz de 3x3 y cree su matriz
traspuesta. La matriz traspuesta es aquella en la que la columna
i era la fila i de la matriz original.

                1 2 3           1 4 7
                4 5 6     →     2 5 8
                7 8 9           3 6 9
****************************************************************/

//Librerias.
#include <iostream>
#include <conio.h>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        int A[3][3];
    //Acciones del programa.
        //Solicitar al usuario los datos.
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<"Dgite un numero: ["<<i<<"]["<<j<<"]: "; cin>>A[i][j];
                }
            }
    //Mostrar resultados del programa.
        //Mostrar matriz original.
            cout<<"\nLa matriz original es: "<<endl;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<A[i][j]<<" ";
                }
                cout<<"\n";
            }
        //Mostrar matriz traspuesta.
            cout<<"\nLa matriz traspuesta es: "<<endl;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<A[j][i]<<" ";
                }
                cout<<"\n";
            }
    getch();
    return 0;
}