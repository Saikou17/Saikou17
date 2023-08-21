using namespace std; //Usamos la libreria de codigo estandar(std) para manipular outputs e inputs
#include <iostream> 	//Para usar cout y cin
#include <vector> //Incluimos la libreria que trabaja con vectores
#include <stdlib.h>
#include <algorithm> //Usamos la biblioteca para usar algortimos genericos
#include <bits/stdc++.h>

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
                cout << "El vector de los anios del humano, gato y perro es: 1,15,15";
                return {1,15,15}; //* Retornamos un vector
                break;
            case 2: //* Caso cuando el anio del humano es 2
                cout << "El vector de los anios del humano, gato y perro es: 2,24,24";
                return {2,24,24};  //* Retornamos un vector
                break;
            default: //* Caso cuando el anio del humano es mayor a 2
                cout << "El vector de los anios del humano, gato y perro es: " << humanYears << "," <<((humanYears-2)*4)+24 << "," << ((humanYears-2)*5)+24;
                return {humanYears,((humanYears-2)*4)+24,((humanYears-2)*5)+24};  //* Retornamos un vector
                break;

         }
    }
}

namespace Let_Me_in{
    vector<int> sorted_vector(vector<int> arreglo = {0,8,2,1,4,2,12,3,2}){ //*Esta funcion se encarga de organizar un arreglo de acuerdo al contexto del ejercicio
        for(int i=0; i < arreglo.size(); i++){
            if(arreglo[i]==0){
                arreglo[i]=100;
            }
        }
        for(int i=0; i < arreglo.size(); i++){ //*Usamos un for para recorrer el arreglo (Bubble Sort)
            int valor;
            for(int j=0; j < arreglo.size()-1; j++){ //*Este for realiza el cambio de las posiciones de los elementos
                if(arreglo[j]>arreglo[j+1]&&(arreglo[j+1]==1||arreglo[j+1]==2)){
                    valor = arreglo[j];
                    arreglo[j]=arreglo[j+1];
                    arreglo[j+1]=valor;
                }
            }
        for(int i = 0; i < arreglo.size(); i++){
            cout << arreglo[i];
        }
            
        }
        return arreglo;
    }
    //  int get_in_line(vector<int> fila){} //* Funcion que devuelve el tiempo en minutos y recibe una lista o vector
}

namespace Modulo-3_Sequence {
    int sequence(int n){
        
    }
}
