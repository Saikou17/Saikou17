//* Incluimos las librerias
using namespace std;
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

//* Tarea de Algormitmos

//*Algormitos de Kruskal

//*Primero leemos el archivo de texto

vector <string> leerArchivo(string archivo){
    vector <string> contenido; //* Vector que guarda el vector completo
    ifstream csv(archivo); //* El ifstream es una clase que permite el modo lectura del archivo
    if(csv.is_open()){ //* Revisa si el archivo esta abierto
        string linea; //* Vector que guarda una conexion de nodos
        while(getline(csv,linea)){ //*
            if(linea==","){
                continue;//* Si la linea contiene un coma lo ignora y continua a la siguiente iteracion
            }
            contenido.push_back(stoi(linea));
        }
        csv.close();
    }else{
        cout << "No se pudo leer el archivo" << endl;
    }
    for(int i=0; i<contenido.size(); i++){
        cout << contenido[i] << endl;
    }
    return contenido;
}

int main(){
    leerArchivo("Archivo de pruebas.txt");
}


