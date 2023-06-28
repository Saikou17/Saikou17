using namespace std; //Incluimos para automaticamente agregar el prefijo std
#include <iostream> //Usamos la biblioteca de std para el input y output de los datos

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

int main(){
    #ifdef anio_leap //El ifdef revisa o identifica si esta definido el identificador
        leap::anio(); //Codigo dentro del condicional
    #endif
    return 0;
}