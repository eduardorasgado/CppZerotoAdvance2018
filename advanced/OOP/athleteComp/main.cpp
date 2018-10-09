#include <iostream>
#include "Athlete.h"

void requestN(int&);
void requestParticipantData(Athlete *, int&,
                std::string&, float&, int&);
void getWinner(Athlete *, int&);

int main() {
    int N, numeroAtleta;
    std::string nombre;
    float tiempoCarrera;

    Athlete* atletas;

    requestN(N);

    atletas = new Athlete[N];

    requestParticipantData(atletas, numeroAtleta, nombre, tiempoCarrera, N);

    getWinner(atletas, N);

    // llamando al destructor dinamico
    delete[] atletas;
    return 0;
}

void requestN(int& N)
{
    std::cout << "Numero de atletas a competir: ";
    std::cin >> N;
}

void requestParticipantData(Athlete* atleta,
                int& numero, std::string& nombre,
                float& tiempo, int& N)
{
    for (int i = 0; i < N; ++i)
    {
        std::cout << "====ATLETA " << i+1 << std::endl;
        std::cout << "Número: ", std::cin >> numero;
        std::cout << "Nombre: ", std::cin >> nombre;
        std::cout << "Tiempo: ", std::cin >> tiempo;

        atleta[i] = Athlete(numero, nombre, tiempo);
    }
}

void getWinner(Athlete *atletas, int& N)
{
    int index = Athlete::indexWinner(atletas, N);
    std::cout << "===WINNER===" << std::endl;

    (atletas+index)->mostrarDatosGanador();
}