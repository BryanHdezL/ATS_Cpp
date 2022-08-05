//Ejercicio #7 determinar si una edad pertenece a un rango especifico

/***********************************************************************
Escriba un programa que solicite una edad (un entero) e indique en la
salida estandar si la edad introducida esta ene l rango de [18-25].
***********************************************************************/

//Librerias.
#include <iostream>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        int edad;
    //Solicitar datos al usuario.
        cout<<"Digite una edad: "; cin>>edad;
    //Acciones del programa (Mostrar resultados).
        if(edad>=18 && edad<=25){
            cout<<"La edad capturada si se encuentra en el rango de [18-25]."<<endl;
        }else{
            cout<<"La edad capturada no se encuentra en el rango de [18-25]."<<endl;
        }
    return 0;
}