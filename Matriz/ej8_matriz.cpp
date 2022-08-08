
//Ejercicio #8 Producto de 2 matrices 3x3. 

/****************************************************************
Realice un programa que calcule el producto de dos matrices 
cuadradas de 3x3.
****************************************************************/

//Librerias.
#include <iostream>
#include <conio.h>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        int A[3][3],B[3][3],C[3][3];
    //Acciones del programa.
        //Solciitar valroes al usuario.
            //Valores de la matriz 1.
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<"A["<<i<<"]["<<j<<"]: "; cin>>A[i][j];
                }
            }
            //Valores de la matriz 2.
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<"B["<<i<<"]["<<j<<"]: "; cin>>B[i][j];
                }
            }
            //Multiplicando las matrices.  
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){          
                    C[i][j]=0;
                    for(int k=0;k<3;k++){
                        C[i][j]+=A[i][k]*B[k][j];
                    }
                }
            }
    //Mostrar resultados del programa.
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<C[i][j]<<" ";
            }
            cout<<"\n";
        }
    getch();
    return 0;
}