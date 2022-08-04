//Ejercicio de calculo de precio con IVA.

/************************************************************************
 Escribe un programa que lea de la entrada estandar el precio de un 
 producto y muestre en la salida estandar el precio del producto al 
 aplicarle el IVA
 ***********************************************************************/

//Librerias.
#include <iostream>
using namespace std;

//Funcion principal.
int main(){
    //Declacion de variales;
        float precio,resultado,iva=0.16;
    //Solicitando datos.
        cout<<"Digite el precio del producto: ";
        cin>>precio;
    //Acciones del programa.
        resultado=precio+precio*iva;
    //Mostrar resultado del programa.
        cout<<"El precio final del producto es: $"<<resultado<<endl;
    return 0;
}