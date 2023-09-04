//* Este archivo contiene las declaraciones de los namespace y de las funciones para que nuestro codigo sea mas organizado y legible
//? Puedo usar la misma tactica de llamar a con "using namespace", para no declararlos aca
using namespace std;
#include <vector>
#include <algorithm> //Usamos la biblioteca para usar algortimos genericos
#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
#include <stdlib.h>


namespace calculate_average{
    double calcAverage(const vector<int>& lista); //* Declaraciones de las funciones del archivo Codewars.cpp
}

namespace leap_year{
    bool IsLeapYear(int year); //* Declaraciones de las funciones del archivo Codewars.cpp
}

namespace Cat_years_Dog_years{
    vector<int> human_cat_dog_years(int humanYears); //* Declaraciones de las funciones del archivo Codewars.cpp
}

namespace Let_Me_in{
    vector<int> sorted_vector(vector<int> arreglo = {0,8,2,1,4,2,12,3,2}); //* Declaraciones de las funciones del archivo Codewars.cpp
}

namespace subsets{

    unsigned long long powerOf2(std::size_t exponent) { //*Usamos una operacion bitshift para operar con los bits y no valores numericos. La razon de esto es para no perder presicion en los resultados.
    return 1ULL << exponent; //* ULL es un sufijo que se utiliza para especificar que un número literal debe ser interpretado como un unsigned long long en C++.
}
    //*Usamos una funcion template para recibir cualquier tipos de datos
    template <typename T> //* Inicializamos el template
    unsigned long long estSubsets(vector<T>conjunto){ //* Funcion que devuelve un ULL y recibe un vector de cualquier tipo de valores.
        if(conjunto.size()==0){ //* Si el conjunto no tiene elementos
            return 0;
        }
        vector<T>subconjuntos; //* Vector que guarda los elementos sin repetir del conjunto
        for(typename std::vector<T>::size_type i = 0; i < conjunto.size(); i++){ //* Recorremos el vector 
            if(find(subconjuntos.begin(),subconjuntos.end(),conjunto[i]) == subconjuntos.end()){ //* Si un elemento del conjunto no esta en el vector (Subconjuntos) lo agrega
                subconjuntos.push_back(conjunto[i]);
            }
        }
        return powerOf2(subconjuntos.size())-1; //* Devuelve los subconjuntos del conjunto (No se cuenta el vacio)
    }
}
