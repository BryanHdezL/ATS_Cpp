//Ejercicio #2.

/***********************************************************************
Hacer un programa que guarde datos de clientes de un banco, los almacene
en cola, y por ultimo muestre los clientes en el orden correcto.
***********************************************************************/

//Librerias
#include <bits/stdc++.h>
using namespace std;

//Estructura de cada uno de los clientes que se almacenara en la cola.
struct Cliente{
    char nombre[30];
    char clave[10];
    int edad;
};
//Estructura de cada nodo de la cola.
struct Nodo{
    Cliente c;
    Nodo *siguiente;
};

//Prototipos de las funciones.
void cargarCliente(Cliente &);
void insertarCola(Nodo *&, Nodo *&, Cliente);
void sacarCola(Nodo *&, Nodo *&, Cliente &);
void mostrarCola(Nodo *);
bool colaVacia(Nodo *);

//Funcion principal.
int main(){
    //Variables de la funcion.
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    Cliente c;
    char opc;
    //Acciones del programa.
    do{
        cargarCliente(c);               //Cargando los datos para el cliente.
        insertarCola(frente, fin, c);   //Agregamos un nuevo cliente a la cola.
        fflush(stdin);
        cout << "\nDesea agregar un nuevo cliente [S/N]: ";
        cin >> opc;
    } while (opc == 's' || opc == 'S');
    cout << "\n * Mostrando el orden de los clientes: *" << endl;
    cout<<"\t Cola: ";
    mostrarCola(frente);
    cout << "\n * Eliminando clientes: *" << endl;
    while (frente != NULL){
        cout<<"\t Cola: ";
        mostrarCola(frente);
        sacarCola(frente, fin, c);
    }
    return 0;
}

//Funcion para eliminar elementos de la cola.
void sacarCola(Nodo *&frente, Nodo *&fin, Cliente &c){
    //1. Obtener el valor del nodo.
    c = frente->c;
    //2. Crar nodo auxiliar y verificar los elementos de la cola hasta que sea 1 solo.
    Nodo *aux = frente;
    if (frente == fin){
        frente = NULL;  //Indicamos que la cola esta vacia.
        fin = NULL;     //Indicamos que la cola esta vacia.
    }else{
        frente = frente->siguiente; //Asignamos la nueva cabeza de la cola.
    }
    // 3. Eliminar el puntero aux;
    delete aux;
}

//Funcion para mostrar el contenido de la cola.
void mostrarCola(Nodo *frente){
    while (frente != NULL){
        cout << frente->c.nombre << " ";
        frente = frente->siguiente;
    }
    cout << "\n";
}

//Funcion para insertar el cliente capturado a la cola.
void insertarCola(Nodo *&frente, Nodo *&fin, Cliente c){
    // 1. Reservar memoria para un nuevo nodo en la cola.
    Nodo *nuevoNodo = new Nodo();
    // 2. Asignar los punteros al nuevo nodo.
    nuevoNodo->c = c;
    nuevoNodo->siguiente = NULL;
    // 3. Comprobar si la cola esta vacia, y asignar el puntero siguiente.
    if(colaVacia(frente)){
        frente = nuevoNodo;
    }else{
        fin->siguiente = nuevoNodo;
    }
    fin = nuevoNodo;
}

//Funcion para comprobar si la cola esta vacia.
bool colaVacia(Nodo *frente){
    return (frente == NULL) ? true : false;
}

//Funcion para carga cliente a la cola.
void cargarCliente(Cliente &c){
    cout << "\n * Agregando nuevo cliente: *" << endl;
    fflush(stdin);
    cout << "\t Nombre: ";
    cin.getline(c.nombre, 30, '\n');
    fflush(stdin);
    cout << "\t Clave: ";
    cin.getline(c.clave, 30, '\n');
    fflush(stdin);
    cout << "\t Edad: ";
    cin >> c.edad;
}