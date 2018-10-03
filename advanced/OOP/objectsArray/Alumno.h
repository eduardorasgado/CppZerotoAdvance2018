//
// Created by cheetos on 3/10/18.
//

class Alumno
{
    private:
        float calMate,
                calProg,
                promedio;

    public:
        // Hay un constructor por defecto
        Alumno()
        {
            // PARA CREAR OBJECTOS EN ARREGLOS
            // ES NECESARIO QUE NUESTRO CONSTRUCTOR
            // POR DEFAULT ESTE VACIO
        }
        Alumno(float _calMate, float _calProg)
        {
            calMate = _calMate;
            calProg = _calProg;
        }

        void requestData();
        void showNotes();
};