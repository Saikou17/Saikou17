using namespace std; //Incluimos para automaticamente agregar el prefijo std
#include <iostream> //Usamos la biblioteca de std para el input y output de los datos
#include <string> //Usamos la biblioteca para anipular y usar varios metodos de strings
#include <algorithm> //Usamos la biblioteca para usar algortimos genericos

namespace leap{
    string anio(){ //Funcion que regresa un string y recibe un entero
        int ano;
        cout << "Ingresa un año: ";
        cin >> ano;
        if(ano%4==0 && ano%100!=0){cout << "El anio es bisiesto"; return "Es un año bisiesto";}
        else if(ano%400==0){cout << "El anio es bisiesto"; return "Es un año bisiesto";}
        else {cout << "El anio no es bisiesto"; return "No es un año bisiesto";}       
        }
}

//29 Junio
namespace reverse_string1{ //Creamos un bloque de codigo para revertir una cadena 
    string reversa(string cadena){ //Funcion que devuelve un string revertido
        reverse(cadena.begin(),cadena.end()); //La funcion reverse es un algoritmo que recibe el incio y el final de una cadena
        cout << cadena;
        return cadena; //Devolvemos la cadena original, ya que esta fue modificada directamente
    }
}

namespace reverse_string2{ //Otra forma de voltear una cadena
    string reversa2(string cadena2){ //Creamos la funcion que devuelve y recibe un string 
        string reversa = ""; //Cadena vacia que gurdara el valor 
        for(int i = cadena2.length()-1; i>=0; i--){ //Recorremos la cadena original desde el ultimo elemento hasta el primero.Nota: cuidado con los indices
            reversa.push_back(cadena2[i]); //Usamos push back para agregar elementod al final del array 
            cout << reversa << "\n"; //Imprimimos el procedimiento
        }
        return reversa; //Regresamos el string
    }
}

int main(){
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
    return 0;
}