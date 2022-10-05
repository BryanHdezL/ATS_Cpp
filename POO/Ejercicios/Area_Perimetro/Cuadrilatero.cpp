//Ejercicio 2.

/***********************************************************************
Construir un programa que calcule el area y el perimetro de un 
cuadrilatero dada la longitud de sus dos lados. Los valores de la 
longitud deberan introducirse por linea de ordenes. (Sobrecarga)
Si es un cuadrdado, solo se proporcionara la longitud de uno de los 
lados del constructor.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
#include "Cuadrilatero.h"
using namespace std;

//Funcion principal.
int main(){
    //Variables de la funcion.
    Cuadrilatero* c1;
    float lado1;
    float lado2;
    //Acciones del programa.
    cout << "Lado #1: ";
    cin >> lado1;
    cout << "Lado #2: ";
    cin >> lado2;
    //Condicion de los lados para el calculo.
    if (lado1 == lado2){    //Es un cuadrado
        c1 = new Cuadrilatero(lado1);
    }else{  //Es un rectangulo
        c1 = new Cuadrilatero(lado1, lado2);
    }
    //Mostramos los resultados obtenidos.
    cout << "\n * Resultados * " << endl;
    cout << "\t - Perimetro: " << c1->obtenerPerimetro() << endl;
    cout << "\t - Area: " << c1->obtenerArea() << endl;
    //Destruimos el objeto.
    delete c1;
    return 0;
}

//Obtenemos el perimetro.
float Cuadrilatero::obtenerPerimetro(){
    return (2 * (lado1 + lado2));
}

//Obtenemos el area.
float Cuadrilatero::obtenerArea(){
    return (lado1 * lado2);
}