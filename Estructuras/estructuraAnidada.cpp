//Estrctura anidada en C++.

#include <iostream>
using namespace std;

struct infoDireccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};

struct empleado{
    char nombre[20];
    struct infoDireccion dirEmpleado;
    double salario;
}empleados[2];

int main(){
    //Solicitar datos al usuario
    for (int i = 0; i < 2; i++){
        fflush(stdin);  //Vaciar el buffer.
        cout << "Nombre: ";
        cin.getline(empleados[i].nombre, 20, '\n');
        cout << "Direccion: ";
        cin.getline(empleados[i].dirEmpleado.direccion, 30, '\n');
        cout << "Ciudad: ";
        cin.getline(empleados[i].dirEmpleado.ciudad, 20, '\n');
        cout << "Provincia: ";
        cin.getline(empleados[i].dirEmpleado.provincia, 20, '\n');
        cout << "Salario: ";
        cin >> empleados[i].salario;
        cout << "\n";
    }

    //Mostrando los datos en consola.
    for (int i = 0; i < 2; i++){
        cout << "Nombre: " << empleados[i].nombre << endl;
        cout << "Direccion: " << empleados[i].dirEmpleado.direccion << endl;
        cout << "Ciudad: " << empleados[i].dirEmpleado.ciudad << endl;
        cout << "Provincia: " << empleados[i].dirEmpleado.provincia << endl;
        cout << "Salario: " << empleados[i].salario << endl;
        cout << "\n";
    }
        return 0;
}
