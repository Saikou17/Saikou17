//* Este archivo contiene las declaraciones de los namespace y de las funciones para que nuestro codigo sea mas organizado y legible
//? Puedo usar la misma tactica de llamar a con "using namespace", para no declararlos aca
using namespace std;
#include <vector>
#include <algorithm> //Usamos la biblioteca para usar algortimos genericos
#include <bits/stdc++.h>


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

