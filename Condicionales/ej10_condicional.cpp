//Ejercicio #10 mostrar mes del año segun el numero capturado

/***********************************************************************
Mostarra los medes del año, pidiendole al usuario un numero entre (1-12),
y mostrara el mes al que corresponde
***********************************************************************/

//Librerias.
#include <iostream>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        int num;
    //Solicitar datos al usuario.
        cout<<"Digite un numero del 0-12: "; cin>>num;
    //Acciones del programa (Mostrar resultados).
        switch(num){
            case 1: cout<<"Enero"; break;
            case 2: cout<<"Febrero"; break;
            case 3: cout<<"Marzo"; break;
            case 4: cout<<"Abril"; break;
            case 5: cout<<"Mayo"; break;
            case 6: cout<<"Junio"; break;
            case 7: cout<<"Julio"; break;
            case 8: cout<<"Agosto"; break;
            case 9: cout<<"Septiembre"; break;
            case 10: cout<<"Octubre"; break;
            case 11: cout<<"Noviembre"; break;
            case 12: cout<<"Diciembre"; break;
            default: cout<<"Valor no valido"; break;
        }
    return 0;
}