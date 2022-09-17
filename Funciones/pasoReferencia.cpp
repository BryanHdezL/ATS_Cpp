//Paso por referencia.


//Librerias
#include <iostream>
using namespace std;

//Pototipos de las funciones.
void valoresNuevos(int&, int&);

//Funcion principal.
int main(){
    //Variables de la funcion.
    int num1, num2;
    //Solicitar datos al usuario.
    cout<<"Digite 2 numeros: ";
    cin >> num1, num2;
    //Acciones del programa.
    valoresNuevos(num1, num2);
    cout << "Valor nuevo de num1: " << num1 << endl;
    cout << "Valor nuevo de num2: " << num2 << endl;
    return 0;
}

//Funcion de valoresNuevos
void valoresNuevos(int& x, int& y){
    cout << "Valor de num1: " << x << endl;
    cout << "Valor de num2: " << y << endl;
    x = 100;
    y = 200;
}