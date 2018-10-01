// Declarando una clase

class Punto
{
    private:
        // ATRIBUTOS DE LA CLASE
        // privada: solo pueden acceder los metodos de esta clase
        int x, y;

    public:
        //METODOS DE LA CLASE
        //publica: pueden acceder toodo aquello ajeno a la clase
        //CONSTRUCTOR DE LA CLASE
        Punto(int _x, int _y) // CONSTRUCTOR 1
        {
            x = _x;
            y = _y;
        }

        Punto() // CONSTRUCTOR 2: VALORES DEFAULT
        {
            x = y= 0;
        }

        // PROTOTIPOS DE METODOS

        // METODOS SETTERS
        void setX(int valorX);
        void setY(int valorY);
        // METODOS GETTERS
        int getX();
        int getY();

};