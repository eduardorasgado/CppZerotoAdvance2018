//
// Created by cheetos on 14/10/18.
//

#include "Medico.h"

namespace Soccer
{
    void Medico::curarLesion()
    {
        std::cout << "Al parecer hay alguien lesionado, hora de trabajar" << std::endl;
    }

    void Medico::partido()
    {
        std::cout << "Ya estamos en el partido, asistencia médica de primera lista" << std::endl;
    }

    void Medico::entrenamiento()
    {
        std::cout << "El medico mira atentamente el entrenamiento, cuaquier cosa puede suceder" << std::endl;
    }
}