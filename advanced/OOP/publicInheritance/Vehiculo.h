//
// Created by cheetos on 10/10/18.
//

#ifndef PUBLICINHERITANCE_VEHICULO_H
#define PUBLICINHERITANCE_VEHICULO_H

#include <iostream>

class Vehiculo
{
    private:
        std::string marca;
        std::string color;

    protected:
        std::string modelo;
        std::string getModelo();

    public:
        Vehiculo(std::string marca, std::string color, std::string modelo)
        : marca{marca}, color{color}, modelo{modelo}{}  // Constructor

        ~Vehiculo(){} // Destructor

        std::string getMarca();
        std::string getColor();
        void setColor(std::string color);
};

#endif //PUBLICINHERITANCE_VEHICULO_H
