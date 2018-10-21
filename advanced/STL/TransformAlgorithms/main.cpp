/*
 * Algoritmos  de transformacion de la STL
 * */
#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <cstdlib>
#include <ctime> // para usar un seed y desordenar un vector

void generate_letters(std::vector<char>*);

template <typename T>
void showingVectorC(std::vector<T>*);

// Funcion para desordenar el vector
template <typename T>
void messUpVector(std::vector<T>*);

// funcion que usa la funcion de arriba y la aplica
// a toddo el vector
template <typename T>
void upperCaseVector(std::vector<T>*);

//Funcion para determinar si un aletra es una vocal
template <typename T>
void vowelSearchInVector(std::vector<T>*, std::vector<T>*);

int main() {
    std::srand(std::time(NULL)); // seed para desordenar un vector

    std::vector<char> *letras = new std::vector<char>;
    generate_letters(letras);
    showingVectorC(letras);
    // desordenar un vector
    messUpVector(letras);
    // volviendo a mostrar el vector
    showingVectorC(letras);
    // pasando toddo el vector a mayusculas
    upperCaseVector(letras);
    // volviendo a mostrar el vector
    showingVectorC(letras);
    // buscando vocales dentro del vector y copiandolas a un nuevo vector
    std::vector<char> *vowels = new std::vector<char>;
    vowelSearchInVector(letras, vowels);
    // inmprimiendo el vector de vocales
    //vowels->push_back('a');
    showingVectorC(vowels);

    delete letras;
    return 0;
}

void generate_letters(std::vector<char> *v)
{
    // generamos las letras para el vector
    for(int i = 0; i < 10; i++)
    {
        // a b c d e f g  ...
        v->push_back('a'+ i);
    }
}

template <typename T>
void showingVectorC(std::vector<T> *v)
{
    // creando un iterador de salida
    std::ostream_iterator<T> salida(std::cout, " ");
    // usando copy de algorithm para usar el iterador
    std::copy(v->begin(), v->end(), salida);
    std::cout << std::endl;
}

template <typename T>
void messUpVector(std::vector<T> *v)
{
    std::cout << "Desordenar el vector: " << std::endl;
    // desordenar el vector
    std::random_shuffle(v->begin(), v->end());
}

template <typename T>
void upperCaseVector(std::vector<T> *v)
{
    std::cout << "Minusculas a mayusculas mediante un for_each..." << std::endl;
    // usando la funcion for_each de la libreria algorithm
    // esta funcion itera sobre el vector o el contenedor
    // completo y le aplica la funcion que le pasamos como
    // tercer argumento
    // aplicando una funcion lambda [](){}
    // ver https://thispointer.com/stdfor_each-tutorial-usage-details-with-examples/
    std::for_each(v->begin(), v->end(), [](T &letra){
        // aplicar el cambio de minuscula a mayuscula para cada letra referenciada
        if(letra >= 'a' && letra <= 'z') letra = letra - ('a' - 'A');
    });
}

template <typename T>
void vowelSearchInVector(std::vector<T>* v, std::vector<T>* nv)
{
    std::cout << "Imprimiendo solo las vocales: " << std::endl;
    // vamos a usr una funcion lambda
    //std::vector<char>::iterator *i = new std::vector<char>::iterator;
    std::transform(v->begin(), v->end(), std::copy(nv->begin(), nv->end(), std::back_inserter(*nv)), [](char letra){
        // regresa una vocal o un guion
        return (letra =='A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') ? letra : '-';
    });
}