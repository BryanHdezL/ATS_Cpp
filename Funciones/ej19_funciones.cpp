//Ejercicio #19.

/***********************************************************************
Realice una funcion recursiva que sume los primeros n enteros positivos

Nota: Para plantear la funcion recursiva, tenga en cuenta que la suma
puede expresarse mediante la siguiente recurrencia:
    suma(n) =   1               , si n=1
                n+suma(n-1)     , si n>1
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Pototipos de las funciones.
int suma(int);

//Funcion principal.
int main(){
    //Variables de la funcion.
    int num=0;
    //Solicitar datos al usuario.
    do{
        cout << "Numero: ";
        cin >> num;
    } while (num <= 0);
    //Acciones del programa.
    cout << "Suma: " << suma(num) << endl;
    return 0;
}

//Funcion de la suma recursiva.
int suma(int n){
    if(n==1){
        n = 1;
    }else{
        n += suma(n - 1);
    }
    return n;
}