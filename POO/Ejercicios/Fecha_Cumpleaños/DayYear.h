//Implementacion de la clase DayYear solicitada en el ejercicio
class DayYear{
    //Atributos
    private:
        int mes;
        int dia;
    //Metodos.
    public:
        DayYear(int _dia, int _mes){    //Constructor.
            mes = _mes;
            dia = _dia;
        }
        bool igual(DayYear& d);
        void visualizar();
};