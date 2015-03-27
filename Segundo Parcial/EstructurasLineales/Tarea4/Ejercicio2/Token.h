/*destino 
salida
mensaje*/



#include <iostream>
#include <string>
#include <ostream>
#include "Computadora.h"

class Token{
    public: 
        Computadora destino;
        Computadora salida;
        std::string mensaje;
        
        Token(Computadora _destino, Computadora _salida, std::string _mensaje) : destino(_destino), salida(_salida), mensaje(_mensaje){ }
        Token() { }
};

