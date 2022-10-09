//Librerias.
#include <bits/stdc++.h>
#include "Mayor.h"
using namespace std;

//Funcion Principal.
int main(){
    cout << "\t - El mayor de dos datos de tipo entero (3 , 8): " << mayor(3, 8) << endl;
    cout << "\t - El mayor de dos datos de tipo real (3.14 , 1.5): " << mayor(3.14, 1.5) << endl;
    cout << "\t - El mayor de dos datos de tipo caracter (b , z): " << mayor('b', 'z') << endl;
    cout << "\t - El mayor de dos datos de tipo cadena (Bryan , Hernanadez): " << mayor("Bryan", "Hernandez") << endl;
    cout << "\t - El mayor de dos datos de tipo diferente (5 , 9.78): " << mayor(5, 9.78) << endl;
    return 0;
}