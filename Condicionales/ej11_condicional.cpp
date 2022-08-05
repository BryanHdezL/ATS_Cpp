//Ejercicio #11 cajero automatico con menu

/***********************************************************************
Hacer un programa que simule un cajero automatico con un saldo inciial
de 100 dolares.
***********************************************************************/

//Librerias.
#include <iostream>
using namespace std;

//Funcion principal.
int main(){
    //Declaracion de variables.
        int saldo=1000,monto,opc;
    //Solicitar datos al usuario.
        //Mostrar un menu
        cout<<"----------------------------------------"<<endl;
        cout<<"\t Bienvenido a tu Cajero "<<endl;
        cout<<"----------------------------------------"<<endl;
        cout<<"  1. Ingresar saldo a la cuenta."<<endl;
        cout<<"  2. Retirar dinero de la cuenta."<<endl;
        cout<<"  3. Salir del programa."<<endl;
        cout<<"----------------------------------------"<<endl;
        //Capturar opcion;
        cout<<"Opcion que deasea realizar: "; cin>>opc;
    //Acciones del prorama (Mostrar resultados).
        switch (opc){
        case 1: 
                cout<<"Digite la cantidad a ingresar a la cuenta: $"; cin>>monto;
                saldo+=monto;
                cout<<"Dinero total de la cuenta: $"<<saldo<<endl;
            break;
        case 2: 
                cout<<"Digite la cantidad a retirar de la cuenta: $"; cin>>monto;
                if(monto>saldo){
                    cout<<"No cuentas con el dinero disponible."<<endl;
                    cout<<"Dinero total de la cuenta: $"<<saldo<<endl;
                }else{
                    saldo-=monto;
                    cout<<"Dinero total de la cuenta: $"<<saldo<<endl;
                }             
            break;
        default:
                cout<<"Hasta la proxima, bye."<<endl;
            break;
        }
    return 0;
}