//* Este archivo contiene las declaraciones de los namespace y de las funciones para que nuestro codigo sea mas organizado y legible
//? Puedo usar la misma tactica de llamar a con "using namespace", para no declararlos aca
using namespace std;
#include <vector>
#include <string>

namespace leap{
    string anio();
}

namespace reverse_string1{ 
    string reversa(string cadena);
}

namespace reverse_string2{
    string reversa2(string cadena2);
}

namespace lagsana_teory{
    int ovenTime();
    int remainingOvenTime(int actualMinutesInOven);
    int preparationTime(int numberOfLayers);
    int elapsedTime(int numberOfLayers, int actualMinutesInOven);
}



