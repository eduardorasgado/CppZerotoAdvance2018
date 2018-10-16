#pragma once
#include <iostream>

/*
 * Headers de tipo function template
 *
 * Al lidiar con distintos tipos de datos en una funcion
 * de incertidumbre, podemos incluir mas objetos de template
 * */

//Definimos la funcion
template <typename T1, typename T2>
T2 greaterThanDiff(T1 dato1, T2 dato2);

template<typename T1, typename T2>
T2 greaterThanDiff(T1 dato1, T2 dato2)
{
    return (dato1>=dato2) ? dato1 : dato2;
}
