using namespace std; //Usamos la libreria de codigo estandar(std) para manipular outputs e inputs
#include <iostream> 	//Para usar cout y cin
#include <vector> //Incluimos la libreria que trabaja con vectores

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

int main(){ //Funcion principal del archivo
    #ifdef Vector //directiva que me permite correr cierta parte del archvio siguiendo una condicion
        vector<int> lista={1,2,3,4,5}; //Defino mi vector
        calculate_average::calcAverage(lista); //LLamo a mi muncion de la seccion de codigo o libreria del promedio
    #endif
    return 0;
}