//Ejercicio #3.

/****************************************************************
Realizar un programa que lea un arreglo de estructuras los datos
N empleados de la empresa y que imprima los datos del empleado
con mayor y menor salario.
****************************************************************/

//Librerias.
#include <iostream>
using namespace std;

//Estructura Empleados
struct empleados{
    char nombre[20];
    double salario;
}empleado[100];

//Funcion principal.
int main(){
    //Variables de la funcion.
    int numEmpleados, mayor = 0, menor = 0, posMayor, posMenor;
    //Solicitando datos al usuario.
    cout << "Digite la cantidad de empleados a registrar: ";
    cin >> numEmpleados;
    cout << "\n Capture los siguientes datos de cada empleado:" << endl;
    for (int i = 0; i < numEmpleados; i++){
        fflush(stdin);
        cout << "\n * Empleado #" << i + 1 << " *\n" << endl;
        cout << "\t - Nombre: ";
        cin.getline(empleado[i].nombre, 20, '\n');
        fflush(stdin);
        cout << "\t - Salario: ";
        cin>>empleado[i].salario;
        fflush(stdin);
        cout << "\n";
    }
    // Obteniendo los empleados con el menor y mayor salario
    menor = empleado[0].salario;    //Inicializamos con los valores del primer empleado.
    mayor = empleado[0].salario;    //Inicializamos con los valores del primer empleado.
    for (int i = 0; i < numEmpleados; i++){
        if (empleado[i].salario < menor){   //Iremos cambiando el valor de menor hasta realmente encontralo.
            menor = empleado[i].salario;
            posMenor = i;
        }else if (empleado[i].salario > mayor){ //Iremos cambiando el valor de mayor hasta realmente encontralo.
            mayor = empleado[i].salario;
            posMayor = i;
        }
    }
    //  Mostrar resultados en consola.
    cout << "Resultados: " << endl;
    cout << "\n Empleado con menor salario -> Empleado #" << posMenor + 1 << endl;
    cout << "\t - Nombre: " << empleado[posMenor].nombre << endl;
    cout << "\t - Salario: " << empleado[posMenor].salario << endl;
    cout << "\n";
    cout << "\n Empleado con mayor salario -> Empleado #" << posMayor + 1 << endl;
    cout << "\t - Nombre: " << empleado[posMayor].nombre << endl;
    cout << "\t - Salario: " << empleado[posMayor].salario << endl;
    return 0;
}