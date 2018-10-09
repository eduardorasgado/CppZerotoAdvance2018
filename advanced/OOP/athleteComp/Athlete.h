//
// Created by cheetos on 9/10/18.
//

#ifndef ATHLETECOMP_ATHLETE_H
#define ATHLETECOMP_ATHLETE_H

#include <iostream>

class Athlete
{
    private:
        int numeroAtleta;
        std::string nombre;
        float tiempoCarrera;
    public:
        Athlete(int numeroAtleta,
                std::string nombre,
                float t)
                : numeroAtleta{numeroAtleta},
                nombre {nombre},
                tiempoCarrera {t}
        {
            // CONSTRUCTOR
        }

        Athlete() {}  // DEFAULT CONSTRUCTOR
        ~Athlete() {}  // DESTRUCTOR

        float getTiempoCarrera();
        void mostrarDatosGanador();
        static int indexWinner(Athlete *atletas, int N);
};

#endif //ATHLETECOMP_ATHLETE_H
