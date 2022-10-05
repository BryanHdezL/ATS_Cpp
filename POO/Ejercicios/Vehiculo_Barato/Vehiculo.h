//Librerias
#include <bits/stdc++.h>
using namespace std;

// Declaracion de la clase Vehiculo
class Vehiculo{
    //Atributos
    private:
        string marca;
        string modelo;
        float precio;
        // Metodos
    public:
        //Constructor por defecto. (Para el uso del arreglo de objetos)
        Vehiculo(){
        }
        //Constructor de cada vehiculo.
        Vehiculo(string marca, string modelo, float precio) {
            this->marca = marca;
            this->modelo = modelo;
            this->precio = precio;
        }
        float getPrecio(){
            return precio;
        }
        void mostrarDatos(){
            cout << "\n * Datos del vehiculo mas barato *" << endl;
            cout << "\t - Marca: " << marca << endl;
            cout << "\t - Modelo: " << modelo << endl;
            cout << "\t - Precio: " << precio << endl;
        }
        static int indiceMasBarato(Vehiculo *coches,int n){
            //Variables de la funcion.
            float precio = coches[0].getPrecio();
            int indice = 0; 
            //Recorremos el arreglo bucando el auto mas barato.
            for (int i = 1; i < n; i++) {
                if (coches[i].getPrecio() < precio) {
                    precio = coches[i].getPrecio();
                    indice = i;
                }
            }
            //Retornamos la posicion que contiene al vehiculo mas barato
            return indice;
        }
};