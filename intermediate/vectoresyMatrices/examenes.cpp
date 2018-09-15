#include <iostream>

using namespace std;

int main(){
    cout << "***CALCULO DE EXAMENES***\n";
    float examen1, examen2, examen3;
    int aprobadosTodos = 0;
    int aprobaronUnExamen = 0;
    int aprobadoUltimo = 0;
    // datos para 5 alumnos
    for(int i = 1; i <= 5; i++){
        cout << i << ". Digite la nota del primer examen: ";
        cin >> examen1;
        cout << i << ". Digite la nota del segundo examen: ";
        cin >> examen2;
        cout << i << ". Digite la nota del tercer examen: ";
        cin >> examen3;

        // calculo de los condicionales
        //aprobaron el ultimo examen
        if (examen3 > 5){
            aprobadoUltimo++;
        }
        //aprobaron los tres examenes
        if (examen1 > 5 && examen1 > 5 && examen3 > 5){
            aprobadosTodos++;
        }
        //aprobaron solo un examen
        else if (examen1 > 5 || examen2 > 5 || examen3 > 5){
            aprobaronUnExamen++;
        }

        cout << "\n";
    }

    cout << "Los alumnos que aprobaron todos los examenes fueron: " << aprobadosTodos << endl;
    cout << "Los alumnos que aprobaron al menos un examen fueron: " << aprobaronUnExamen << endl;
    cout << "Los alumnos que aprobaron el ultimo examen fueron: " << aprobadoUltimo << endl;
    return 0;
}
