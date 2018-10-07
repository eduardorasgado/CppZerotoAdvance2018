//
// Created by cheetos on 7/10/18.
//

#ifndef CHEAPESTCAR_VEHICLE_H
#define CHEAPESTCAR_VEHICLE_H

#include <iostream>
class Vehicle
{
    private:
        std::string marca;
        std::string modelo;
        double precio;

    public:
        Vehicle(std::string marca, std::string modelo, double precio)
        {
            this->marca = marca;
            this->modelo = modelo;
            this-> precio = precio;
        }
        Vehicle()
        {
            // DEFAULT VACIO
        }

        // STATIC METHODS
        static int indiceBarato(Vehicle *coches, int n);

        //GETTERS
        std::string getMarca();
        std::string getModelo();
        double getPrecio();

        void mostrarDatos();
};

#endif //CHEAPESTCAR_VEHICLE_H
