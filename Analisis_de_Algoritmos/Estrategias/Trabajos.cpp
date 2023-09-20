//* Incluimos las librerias
using namespace std;
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <stdio.h>
#include <cstdlib>
#include <cstring>

//* Tarea de Algormitmos

//*Algormitos de Kruskal

//*Primero leemos el archivo de texto

vector <vector<int>> leerArchivo(string archivo){
    vector <vector<int>> contenido; //* Vector que guarda el vectores de enteros completo
    ifstream csv(archivo); //* El ifstream es una clase que permite el modo lectura del archivo
    if(csv.is_open()){ //* Revisa si el archivo esta abierto
        string linea; //* Linea del documento (conexion entre nodos y su peso)
        while(getline(csv,linea)){ //* Bucle que recorre todas las lineas
            vector <int> conexiones;//* Creamos un vector para guardar dos nodos
            istringstream stream(linea); //* Creamos un stream (secuencia de datos) a partir de un string
            string caracter; //* Variable que cotiene un numero por separado
            while(stream >> caracter){ //* Leemos los numeros de la linea por separados
                int numero = stoi(caracter); //*Convertimos los caracteres en numeros enteros
                conexiones.push_back(numero); //* Añadimos los numeros al final del vector
            }
            contenido.push_back(conexiones);//* Agregamos los valores al final del arreglo principal
        } 
        csv.close(); //* Cerramos la lectura
    }else{
        cout << "No se pudo leer el archivo" << endl; //* Imprimimos un mensaje de error si el archivo no se abre
    }
    // for(int i=0; i<contenido.size(); i++){ //* Imprimimos todos los elementos del vector principal
    //     for(int j=0; j<contenido[i].size(); j++){
    //         cout << contenido[i][j];
    //     }
    //     cout << "\n";
    // }
    // cout << contenido[13][2]; //* Se imprime el ultimo elemento del vector de vectores
    return contenido; //* Regresamos el vector de vectores
}

//* Algoritmo tipo sort: Usamos un sort para ordenar los pesos de cada conexion o del grafo

bool Comp(vector<int> a,vector<int> b){ //* Creamos una funcion que verifique y compare siempre el tercer elemento del vector. Luego, programamos que debe de ser en orden ascendente.
    return a[2] < b[2]; //* Devuelve true si el valor a debe de ir antes que b. False, si el valor a debe ir despues de b
}

vector <vector<int>> Sort(vector<vector<int>> grafo){
    sort(grafo.begin(),grafo.end(),Comp);
    // for (int i=0; i<grafo.size(); i++) {
    //         for(int j=0; j<grafo[i].size();j++){
    //             cout<<grafo[i][j]<<" ";
    //         }
    //         cout<<"\n";
    //     }
    return grafo;
}

//* Segundo Algoritmo de Kruskal
//* Algoritmo de kruskal, es un algoritmo vor que tiene el proposito de hallar MST en un grafo no dirigido. Se debe de ordenar el peso del grafo en forma ascendente

//* Funcion para crear conjuntos de acuerdo al numero de vertices

vector <int> Conjuntos(vector <vector<int>> Grafo){
    vector <int> Vertices;
    for(int i=0; i<Grafo.size(); i++){
        for(int j=0; j<Grafo[i].size()-1; j++){
            if(find(Vertices.begin(),Vertices.end(),Grafo[i][j]) == Vertices.end()){
                Vertices.push_back(Grafo[i][j]);
            }
        }
    }
    sort(Vertices.begin(),Vertices.end());
    return Vertices;
}

// //* Funcion recursiva para conjuntos disjunto

    int EncontrarPadre(int vertice, vector<int> Vertices){
    if (Vertices[vertice]==vertice){
        return vertice;
    }else{
        return EncontrarPadre(Vertices[vertice],Vertices);}
    }

// //* El algoritmo de Kruskal recibe un .txt con espacios y devuelve un vector de enteros

vector <vector<int>> Kruskal(string archivo){ 
     vector <vector<int>> Kruskal;
     vector <vector<int>> Grafo = leerArchivo(archivo);
     Grafo = Sort(Grafo);
     vector <int> ConexionConjuntos = Conjuntos(Grafo);
     for(int i=0; i<Grafo.size(); i++){
        int Start = EncontrarPadre(Grafo[i][0],ConexionConjuntos);
        int End = EncontrarPadre(Grafo[i][1],ConexionConjuntos);
        if (Start != End){
            Kruskal.push_back(Grafo[i]);
            ConexionConjuntos[Start] = End;
        }
     }
     for(int i=0; i<Kruskal.size(); i++){
        for(int j=0; j<Kruskal[i].size(); j++){
            cout << Kruskal[i][j] << " - ";
        }
        cout<<endl;
     }
     return Kruskal;
}

//* Algoritmo KMP (Knuth-Morris-Prat)

vector <int> prefix_function(string pattern) //* La funcion de prefijo recibe un patron en forma de caracter
{
    int x = 0, y = 1; //* Indices de que recorren nuestro string y el patron
    vector <int> prefix; //* Creamos nuestro vector solucion
    prefix.push_back(0); //* Inicializamos nuestro vector con 0

    while (pattern[y] != '\0')
    {
        //printf("Comparing %c and %c\n", pattern[y], pattern[x]);
        if (pattern[y] == pattern[x])
        {
            prefix.push_back(x);  
            x++;
        }
        else if (pattern[y] == pattern[0])
        {
            prefix.push_back(0);
            x = 1;
        }
        else
        {
            prefix.push_back(0);
            x = 0;
        }
        y++;
    }
    for(int i=0; i<prefix.size(); i++){
        cout<<" "<<prefix[i];
    }
    return(prefix);
}

// int    find_substring(char *main, char *pattern, int *match)
// {
//     int i, j = 0;

//     for (i=0; i < strlen(main); i++)
//     {
//         //printf("%c %c\n", main[i], pattern[j]);
//         if (pattern[j] == main[i])
//         {
//             j++;
//         }
//         else
//         {
//             //printf("Go to: %c in position %d\n", pattern[match[j -1]], match[j-1]);
//             j = match[j+1];
//         }
//         if (pattern[j] == '\0')
//         {
//             return (i + 1 - strlen(pattern));
//         }
//     }
//     return -1;
// }

int main(){
    // Kruskal("Archivo de pruebas.txt");
    prefix_function("aaaabaacd");
}


