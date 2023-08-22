//* Incluimos las librerias
using namespace std;
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <vector>

//* Tarea de Algormitmos

//*Algormitos de Kruskal

//*Primero leemos el archivo de texto

vector <vector<string>> leerArchivo(string archivo){
    vector <vector<string>> contenido; //* Vector que guarda el vectores de enteros completo
    ifstream csv(archivo); //* El ifstream es una clase que permite el modo lectura del archivo
    if(csv.is_open()){ //* Revisa si el archivo esta abierto
        string linea; //* Linea del documento (conexion entre nodos y su peso)
        vector <string> nodos;//* Creamos un vector para guardar dos nodos
        while(getline(csv,linea)){ //* Bucle que recorre todas las lineas
            nodos.push_back(linea);
            contenido.push_back(nodos);//* Agregamos los valores al final del arreglo principal
        }
        
        csv.close(); //* Cerramos la lectura
    }else{
        cout << "No se pudo leer el archivo" << endl;
    }
    for(int i=0; i<contenido.size(); i++){ //* Imprimimos los elemntos del vector
        for(int j=0; j<contenido[i].size(); j++){
            cout << contenido[i][j];
        }
        cout << "\n";
    }
    return contenido; //* Regresamos el vector de vectores
}

//* Segundo Algoritmo de Kruskal

int main(){
    leerArchivo("Archivo de pruebas.txt");
}


