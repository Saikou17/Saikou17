//* Archivo main que contiene todos los ejercicios y las pruebas de los archivos Codewars.cpp y Exercism.cpp
using namespace std; //Usamos la libreria de codigo estandar(std) para manipular outputs e inputs
#include <iostream> 	//Para usar cout y cin
#include <vector> //Incluimos la libreria que trabaja con vectores
#include <stdlib.h>
//*Incluimos los archivos headers
#include "Codewars.hpp"
#include "Exercism.hpp"
//* Al momento de compilar nuestro codigo debemos de agregar el siguiente comando
//* g++ -D(namespace) main.cpp (archivo de ejercicios.cpp)

int main(){ //Funcion principal del archivo
    #ifdef Vector //directiva que me permite correr cierta parte del archvio siguiendo una condicion
        vector<int> lista={1,2,3,4,5}; //Defino mi vector
        calculate_average::calcAverage(lista); //LLamo a mi muncion de la seccion de codigo o libreria del promedio
    #endif
    #ifdef bisiesto
        leap_year::IsLeapYear(2010);
    #endif
    #ifdef anios_humanos
        Cat_years_Dog_years::human_cat_dog_years(19);
    #endif
    #ifdef anio_leap //El ifdef revisa o identifica si esta definido el identificador
        leap::anio(); //Codigo dentro del condicional
    #endif
    #ifdef reversa_string1
        string cadena = "Hola_Mundo!";
        reverse_string1::reversa(cadena);
    #endif
    #ifdef reversa_string2
        string cadena2 = "Adios_Mundo!";
        reverse_string2::reversa2(cadena2);
    #endif
    #ifdef lasagna
        lagsana_teory::ovenTime();
        lagsana_teory::remainingOvenTime(30);
        lagsana_teory::preparationTime(5);
        lagsana_teory::elapsedTime(2,28);
    #endif
    return 0;
    return 0;
}