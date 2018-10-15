#pragma once

#include <iostream>
#include "../Alumno/Alumno.h"
#include "../Deportista/Deportista.h"

namespace People
{
    class BecadoDeporte : public Alumno, Deportista
    {
        private:
            float montoBeca;

        public:
            BecadoDeporte(std::string nombreCarrera,
                          std::string nombreEntrenador,
                          float montoBeca)
                          : Alumno(nombreCarrera),
                          Deportista(nombreEntrenador)
            {
                this->montoBeca = montoBeca;
            }

            ~BecadoDeporte(){ } // Destructor

            // getters y setters
            float getMontoBeca();
            void setMontoBeca(float);

            void mostrarDatos();
    };
}