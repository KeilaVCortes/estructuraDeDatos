#include <string>
#include <iostream>
#include <ostream>
#include "../LinkedList.h"

class Movimiento{
    private:
        std::string tipo;
        int tiempo;
    public:
        std::string getTipo();
        int getTiempo();
        Movimiento() : Movimiento("", 0){}
        Movimiento(std::string _tipo, int _tiempo) : tipo(_tipo), tiempo(_tiempo){}
        bool operator  == (const Movimiento & movimiento);
        bool operator  != (const Movimiento & movimiento);
    
};
