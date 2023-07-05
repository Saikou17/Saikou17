using namespace std; //Usamos la libreria de codigo estandar(std) para manipular outputs e inputs
#include <iostream> 	//Para usar cout y cin
#include <vector> //Incluimos la libreria que trabaja con vectores
#include <stdlib.h>

//29 Junio
namespace calculate_average{
    double calcAverage(const vector<int>& lista ){ //FUncion que devuelve un doble y recibe un vector constante por referencia
        double suma = 0; //Suma de todos los numeros
        for(int i=0; i<lista.size(); i++){ //For que reccore todos los elemntos del vector
            suma += lista[i]; //La suma va guardando y sumando cada elemento
        }
        cout << "El promedio de la lista es " << suma/lista.size(); //Imprime el promedio
        return suma/lista.size(); //Realiza y retorna el promedio de los valores
    }
}

//4 Julio
namespace leap_year{
    bool IsLeapYear(int year){ //*Funcion que regresa un booleano
        //? Se podra con un switch
        if(year%4==0 && year%100!=0){ //* Verifica si el anio es divisible entre 4 y no entre 100
            return true; //* Retornar booleano
        }
        else if(year%400==0){ //* Verifica si el anio es divisible entre 400
            return true; //* Retornar booleano
        }
        else{
            return false; //* Retornar booleano
        }
    }
}

namespace Cat_years_Dog_years{
    vector<int> human_cat_dog_years(int humanYears){ //* Funcion que regresa un vecotor de enteros y recibe un numero de anios en humano
        switch(humanYears){ //* Switch para evaluar los diferentes casos
            case 1: //* Caso cuando el anio del humano es 1
                return {1,15,15}; //* Retornamos un vector
                break;
            case 2: //* Caso cuando el anio del humano es 2
                return {2,24,24};  //* Retornamos un vector
                break;
            default: //* Caso cuando el anio del humano es mayor a 2
                return {humanYears,((humanYears-2)*4)+24,((humanYears-2)*5)+24};  //* Retornamos un vector
                break;

         }
    }
}

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
    return 0;
}