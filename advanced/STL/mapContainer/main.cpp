/*
 * MAPS
 * Maps are associative containers that store elements in a mapped fashion.
 * Each element has a key value and a mapped value.
 * No two mapped values can have same key values.
 * */
#include <iostream>
#include <iterator>
#include <map> // para poder usar el map y multimap

template <typename T1, typename T2>
void addingValues(std::map<T1, T2>*);

template <typename T1, typename T2>
void showwingMap(std::map<T1, T2>*);

template <typename T1, typename T2>
void updateValue(std::map<T1, T2>*);

template <typename T1, typename T2>
void insertingNewData(std::map<T1, T2>*);

template <typename T1, typename T2>
void searchElement(std::map<T1, T2>*);
// definimos una estructura que define un alias
typedef std::pair<int, std::string> par;

int main() {
    // clave, valor
    // se ordenan segun la clave
    // creando un map dinamicamente alojado
    std::map<int, std::string> *values = new std::map<int, std::string>;

    //insertando elementos dentro del mapa
    // OJO: No podemos insertar claves duplicadas
    addingValues(values);
    showwingMap(values);
    // actualizar o modificar un valoe de una clave
    updateValue(values);
    showwingMap(values);
    //
    insertingNewData(values);
    showwingMap(values);
    searchElement(values);

    delete values;
    return 0;
}

template <typename T1, typename T2>
void addingValues(std::map<T1, T2>* values)
{
    int N;
    std::string word; // para guardar el valor del mapa
    std::cout << "Ingresar la longitud del mapa: ", std::cin >> N;

    for (int i = 0; i < N; ++i) {
        // Introducimos el valor de nuestro string: (clave, valor(el string))
        std::cout << "[" << i << "]-> valor: ", std::cin >> word;

        // utilizamos una estructura de tipo pair para guardar elementos en el mapa
        // values->insert(std::pair<T1, T2>(i, word));
        // Usando el typedef definido antes del main:
        values->insert(par(i, word));
    }
}

template <typename T1, typename T2>
void showwingMap(std::map<T1, T2>* values)
{
    std::cout << "--Mostrando los elementos del mapa--" << std::endl;
    // mostrando los elementos del mapa
    std::map<int, std::string>::iterator i;
    // le pasamos el iterador al ciclo for
    // con el iterador no podemos comparar con < o > debemos usar !=
    for (i = values->begin(); i != values->end(); ++i)
    {
        //
        std::cout << "Key: " << i->first << " | Value: " << i->second << std::endl;
    }
    std::cout << std::endl;
}

template <typename T1, typename T2>
void updateValue(std::map<T1, T2>* values)
{
    // modificando el valor de un elementro dentro del map
    T1 key;
    T2 word = "";
    std::cout << "Insertar la clave del valor a modificar: ", std::cin >> key;

    // en el map creado dinamicamente accedemos al valor de una clave deseada con map->at(key)
    std::cout << "Mostrando el valor de la clave a modificar: " << values->at(key) << std::endl;

    // pedirle al usuario el nuevo valor del elemento del map
    std::cout << "Insertar el nuevo valor de la clave: ", std::cin >> word;

    // insertando el nuevo valor de la clave deseada dentro del map
    values->at(key) = word;

    std::cout << std::endl;
}

template <typename T1, typename T2>
void insertingNewData(std::map<T1, T2>* values)
{
    int nKey;
    std::string value;
    std::cout << "--Insertar nueva data al mapa--" << std::endl;
    // mostrar al usuario lo que se tiene
    std::cout << "Llaves existentes: ";
    std::map<int, std::string>::iterator i;
    for (i = values->begin(); i != values->end(); ++i) std::cout << i->first << " ";
    std::cout << std::endl;

    // ingresando el nuevo valor
    std::cout << "Nueva clave: ", std::cin >> nKey;
    std::cout << "Ingresa tu valor: ", std::cin >> value;
    values->insert(std::pair<int, std::string>(nKey, value));
}

template <typename T1, typename T2>
void searchElement(std::map<T1, T2>* values)
{
    int N;
    std::cout << "Elemento a buscar por clave: ", std::cin >> N;

    // buscando un elemento dentro del map
    std::map<int, std::string>::iterator i;
    i = values->find(N);
    if (i != values->end()) std::cout << "[" << i->first << "]: " << i->second << std::endl;
    else std::cout << "El valor no fue encontrado." << std::endl;
}