//Declaracion de una clase.

/***********************************************************************
Visibilidad de los miembros de la clase (Encapsulamiento)
    - Private:
        Solo pueden ser accedidos por miembros de la misma clase.
    - Public:
        Pueden ser accedidos por miembros de la clase a la que 
        pertenecen, heredadas o externas, puede manipular los datos.
    - Protected:
        Pueden ser accedidos por miembros de la misma clase o por clases
        hijas.
***********************************************************************/

class Punto{
    //Atributos.
    private:
        int x;
        int y;
    // Metodos.
    public:
        //Constructor #1
        Punto(int _x, int _y) {
            x = _x;
            y = _y;
        }
        //Constructor #2
        Punto() {
            x = y = 0;
        }
        //Set's & Get's
        void setX(int valorX);  // Establecemos el valor de X.
        void setY(int valorY);  // Establecemos el valor de Y.
        int getX(void); // Obtener el valor de X.
        int getY(void); // Obtener el valor de Y.
};