//Ejercicio #9 transformar numero arabigo a numero romano

/***********************************************************************
Cambiar un numero entero con el mismo valor pero en romanos.
    M=1000
    D=500
    C=100
    L=50
    X=10
    V=5
    I=1
***********************************************************************/

//Librerias.
#include <iostream>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        int num,a;
        int uni,dec,cent,mil;
    //Solciitar datos al usaurio
        cout<<"Digite un numero entero: "; cin>>num;
    //Acciones del programa.
        a=num;          //Guardamos una copia del numero capturado.
        uni=num%10;     //Obtenemos unidades (res 4).
        num/=10;        //El numero 1234 -> 123.
        dec=num%10;     //Obtenemos decenas (res 3).
        num/=10;        //El numero 123 -> 12.
        cent=num%10;    //Obtenemos centenas (res 2).
        num/=10;        //El numero 12 -> 1.
        mil=num%10;     //Obtenemos millar (res 1).
        num/=10;        //El numero 1 -> 0.
    //Mostrar resultados.
        cout<<"El numero "<<a<<" en notacion romana es: ";
        switch(mil){
            case 1: cout<<"M"; break;
            case 2: cout<<"MM"; break;
            case 3: cout<<"MMM"; break;
        }
        switch(cent){
            case 1: cout<<"C"; break;
            case 2: cout<<"CC"; break;
            case 3: cout<<"CCC"; break;
            case 4: cout<<"CD"; break;
            case 5: cout<<"D"; break;
            case 6: cout<<"DC"; break;
            case 7: cout<<"DCC"; break;
            case 8: cout<<"DCCC"; break;
            case 9: cout<<"CM"; break;
        }
        switch(dec){
            case 1: cout<<"X"; break;
            case 2: cout<<"XX"; break;
            case 3: cout<<"XXX"; break;
            case 4: cout<<"XL"; break;
            case 5: cout<<"L"; break;
            case 6: cout<<"LX"; break;
            case 7: cout<<"LXX"; break;
            case 8: cout<<"LXXX"; break;
            case 9: cout<<"XC"; break;
        }
        switch(uni){
            case 1: cout<<"I"; break;
            case 2: cout<<"II"; break;
            case 3: cout<<"III"; break;
            case 4: cout<<"IV"; break;
            case 5: cout<<"V"; break;
            case 6: cout<<"VI"; break;
            case 7: cout<<"VII"; break;
            case 8: cout<<"VIII"; break;
            case 9: cout<<"IX"; break;
        }
    return 0;
}