#include <iostream>
#include "Map.h"
#include "Lumian.h"
#include "Okasan.h"

int requestRace(std::string&);

int main() {
    std::cout << "=====FOGATA=====" << std::endl;

    std::cout << "Creando mapa..." << std::endl;
    Map *mainMap = new Map();
    mainMap->create();
    std::cout << "Mostrando mapa..." << std::endl;
    mainMap->showMap();

    std::cout << "Creando Personaje..." << std::endl;
    std::string myName;

    int race = requestRace(myName);
    if(race == 1)
    {
        Lumian* me = new Lumian(myName);
        if(me->isAlive()) std::cout << "Esta vivo!";
        delete me;
    }

    else
    {
        Okasan* me = new Okasan(myName);
        if(me->isAlive()) std::cout << "Esta vivo!";
        delete me;
    }

    std::cout << std::endl;

    mainMap->destroy();
    delete mainMap;

    return 0;
}

int requestRace(std::string& nombre)
{
    int race;
    std::cout << "Cual será tu raza?" << std::endl;
    std::cout << "1. Lumian." << std::endl;
    std::cout << "2. Okasan." << std::endl;
    std::cin >> race;

    std::cout << "Cual será tu nombre?" << std::endl;
    std::cin >> nombre;
    std::cout << std::endl;
    return race;
}