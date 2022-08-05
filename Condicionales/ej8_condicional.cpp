//Ejercicio #8 determinar si dos numeros coinciden

/***********************************************************************
Escribe un programa que lea de la entrada etsandar tres numeros. Despues
debe leer un cuarto numero e indicar si el numero coincide con alguno de
los introducidos con anterioridad.
***********************************************************************/

//Librerias.
#include <iostream>
using namespace std;

//Funcion principal.
int main(){
    //Declaraion de variables.
        int n1,n2,n3,n4;
    //Solciitar valores al usuario.
        cout<<"Digite el primer numero: "; cin>>n1;
        cout<<"Digite el segundo numero: "; cin>>n2;
        cout<<"Digite el tercer numero: "; cin>>n3;
        cout<<"Digite el cuarto numero: "; cin>>n4;
    //Acciones del programa (Mostrar resultados).
        if(n4==n1||n4==n2||n4==n3){
            cout<<"El numero SI coincide con los capturados anteriormente."<<endl;
        }else{
            cout<<"El numero NO coincide con los capturados anteriormente."<<endl;
        }
    return 0;
}