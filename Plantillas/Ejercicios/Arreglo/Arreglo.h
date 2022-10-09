//Librerias.
#include <bits/stdc++.h>
using namespace std;

//Delcracion de la plantilla.
template <class T>
class Arreglo{
    private:
        T* arreglo;
        int indice;
        int nElementos;
    public:
        //Constructor
        Arreglo(int n){
            arreglo = new T[n];
            indice = 0;
            nElementos = n;
        }
        //Destructor
        ~Arreglo(){
            delete[] arreglo;
        }
        //Agregamos elementos al arreglo
        void agregar(T elemento){
            arreglo[indice++] = elemento;
        }
        //Verificamos el espacio en el arreglo
        bool arregloLleno(){
            if (indice >= nElementos){
                return true;
            }else{
                return false;
            }
        }
        //Mostramos el contenido del arreglo
        void mostrarArreglo(){
            cout << "\t Arreglo: ";
            for (int i = 0; i < indice; i++){
                cout << arreglo[i] << " ";
            }
        }
        //Vaciamos el arreglo
        void vaciarArreglo(){
            for (int i = 0; i < indice; i++){
                arreglo[i] = '\0';
            }
            indice = 0;
        }
};