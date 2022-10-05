//Librerias
#include <bits/stdc++.h>
using namespace std;

// Declaracion de la clase Atleta.
class Atleta{
    //Atributos
    private:
        int numeroAtleta;
        string nombreAtleta;
        float tiempoCarrera;
    //Metodos
    public:
        //Constructor #1.
        Atleta(int numeroAtleta, string nombreAtleta, float tiempoCarrera){
            this->numeroAtleta = numeroAtleta;
            this->nombreAtleta = nombreAtleta;
            this->tiempoCarrera = tiempoCarrera;
        }
        //Constructor por defecto.
        Atleta(){
            
        }
        //Desructor por defecto.
        ~Atleta(){
            
        }
        //Obtenemos el tiepo de la carrera.
        float getTiempoCarrera(){
            return tiempoCarrera;
        }
        //Mostramos los datos del atleta ganador
        void mostrarDatos(){
            cout << "\n * Datos del atleta ganandor *" << endl;
            cout << "\t No. de atleta: " << numeroAtleta << endl;
            cout << "\t Nombre del atleta: " << nombreAtleta << endl;
            cout << "\t Tiempo de carrera del atleta: " << tiempoCarrera << endl;
        }
        //Metodo para obtener el indice del atleta con menor tiempo.
        static int indiceMenor(Atleta* atletas, int n){
            //Variables de la funcion
            float menor = atletas[0].getTiempoCarrera();
            int indice = 0;
            //Obteniendo el indice del atleta de menor tiempo
            for (int i = 1; i < n; i++){
                if (atletas[i].getTiempoCarrera() < menor){
                    menor = atletas[i].getTiempoCarrera();
                    indice = i;
                }
            }
            //Retornamos el valor del indice de menor tiempo
            return indice;
        }
};