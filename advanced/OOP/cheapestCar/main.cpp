#include <iostream>
#include "Vehicle.h"

// PROTOTIPOS
void requestN(int&);
void requestData(Vehicle *, int&,
                std::string&, std::string&,
                double&);
void getCheapest(Vehicle *, int&);

int main() {
    std::string marca, modelo;
    double precio;
    int N;

    Vehicle* vehicles;

    requestN(N);
    vehicles = new Vehicle[N];

    requestData(vehicles, N, marca, modelo, precio);
    getCheapest(vehicles, N);

    delete[] vehicles;
    return 0;
}

void requestN(int& N)
{
    std::cout << "Núero de vehículos: ", std::cin >> N;
}

void requestData(Vehicle *vehicles, int& N,
                    std::string& marca, std::string& modelo,
                    double& precio)
{
    for (int i = 0; i < N; ++i)
    {
        std::cout << "====VEHICULO " << i+1 << "====" << std::endl;
        std::cout << "Marca: ", std::cin >> marca;
        std::cout << "Modelo: ", std::cin >> modelo;
        std::cout << "Precio: ", std::cin >> precio;

        vehicles[i] = Vehicle(marca, modelo, precio);
    }
}

void getCheapest(Vehicle *vehicles, int& N)
{
    int indiceBarato = Vehicle::indiceBarato(vehicles, N);

    std::cout << "==MOST CHEAPEST VEHICLE===" << std::endl;
    // accediendo dinamicamente por puntero
    (vehicles+indiceBarato)->mostrarDatos();
}