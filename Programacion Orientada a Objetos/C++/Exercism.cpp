using namespace std; //Incluimos para automaticamente agregar el prefijo std
#include <iostream> //Usamos la biblioteca de std para el input y output de los datos
#include <string> //Usamos la biblioteca para anipular y usar varios metodos de strings
#include <algorithm> //Usamos la biblioteca para usar algortimos genericos
#include<string>//* Libreria para manipular o utilizar funciones de strings
#include<stdexcept>//* Esta libreria nos permite manejar los datos o respuetas por exepcion

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

namespace lagsana_teory{
        // ovenTime returns the amount in minutes that the lasagna should stay in the
    // oven.
    int ovenTime() {
        // TODO: Return the correct time.
        cout << "40 Minutos\n";
        return 40;
    }
    /* remainingOvenTime returns the remaining
    minutes based on the actual minutes already in the oven.
    */
    int remainingOvenTime(int actualMinutesInOven) {
        // TODO: Calculate and return the remaining in the oven based on the time
        // the lasagna has already been there.
        cout << "La lasagna le falta" <<ovenTime() - actualMinutesInOven << " Minutos.\n";
        return ovenTime() - actualMinutesInOven;
    }
    /* preparationTime returns an estimate of the preparation time based on the
    number of layers and the necessary time per layer.
    */
    int preparationTime(int numberOfLayers) {
        // TODO: Calculate and return the preparation time with the
        // `numberOfLayers`.
        cout << "Te demoras " << numberOfLayers*2 << " poniendo las capas.\n";
        return numberOfLayers*2;
    }
    // elapsedTime calculates the total time spent to create and bake the lasagna so
    // far.
    int elapsedTime(int numberOfLayers, int actualMinutesInOven) {
        // TODO: Calculate and return the total time so far.
        cout << "Has durado " << preparationTime(numberOfLayers)+actualMinutesInOven << " en preparar la lasagna\n";
        return preparationTime(numberOfLayers)+actualMinutesInOven;
    }

    namespace triangle { //* Namespace de un ejercicios que averigua el tipo de triangulo
    flavor kind(double a,double b,double c){    //* La funcion recibe 2 argumentos (lados) y devuelve 
        if((a<=0||b<=0||c<=0)||(a+b<c||b+c<a||a+c<b)){ //* Condicional que evalua si el trinagulo es legal
            throw domain_error("This triangle is ilegal."); //* Se utiliza un throw para devolver una exepcion
        }
        if(a == b && a == c && b == c){ //* Tres lados iguales
            cout << "Triangulo equilatero";
            return flavor::equilateral;
        }
        else if(a == b || a == c || c == b){ //* Dos lados iguales
            cout << "Triangulo isosceles";
            return flavor::isosceles;
        }
        else{ //* Ningun lado es igual
            cout << "Triangulo escaleno";
            return flavor::scalene;
        }
    }
}  // namespace triangle
}
