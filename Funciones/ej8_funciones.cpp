//Ejercicio #8.

/***********************************************************************
Escriba una funcion nombrada cambio() que tenga un parametro en numero
entero y seis parametros de referencia en numero entero nombradas cien,
cincuenta, veinte, diez, cinco y uno, respectivamente. La funcion tiene
que considerar el valor entero transmitido como una cantidad en
dolares y convertir el valor en el numero menor de billetes 
equivalentes.
***********************************************************************/

//Librerias
#include <iostream>
using namespace std;

//Pototipos de las funciones.
void cambio(int, int&, int&, int&, int&, int&, int&);

//Funcion principal.
int main(){
    //Variables de la funcion.
    int dolares, cien = 0, cincuenta = 0, veinte = 0, diez = 0, cinco = 0, uno = 0;
    //Solicitar datos al usuario.
    cout << "Dolares: ";
    cin >> dolares;
    //Acciones del programa.
    cambio(dolares, cien, cincuenta, veinte, diez, cinco, uno);
    cout << "\t- Cien: \t" << cien << endl;
    cout << "\t- Cincuenta: \t" << cincuenta << endl;
    cout << "\t- Veinte: \t" << veinte << endl;
    cout << "\t- Diez: \t" << diez << endl;
    cout << "\t- Cinco: \t" << cinco << endl;
    cout << "\t- Uno: \t\t" << uno << endl;
    return 0;
}

//Funcion de cambio.
void cambio(int dinero, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){
    int aux;
    cien = dinero / 100;
    dinero -= cien * 100;
    cincuenta = dinero / 50;
    dinero -= cincuenta * 50;
    veinte = dinero / 20;
    dinero -= veinte * 20;
    diez = dinero / 10;
    dinero -= diez * 10;
    cinco = dinero / 5;
    dinero -= cinco * 5;
    uno = dinero;
}