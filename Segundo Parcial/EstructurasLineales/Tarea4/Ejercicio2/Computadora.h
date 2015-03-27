/*
clase Computadora

*/

#include <iostream>
#include <string>
#include <ostream>

class Computadora{
    private:
       
    public:
     int _ip;
        Computadora( int ip ) : _ip(ip) { }
        Computadora() : Computadora(0) { }
        
        int getIp() { return _ip; }
        
        bool operator ==(const Computadora & computadora);
        bool operator !=(const Computadora & computadora);
        
        friend std::ostream & operator <<(std::ostream & os, const Computadora & computadora);
        
    };


bool Computadora::operator ==(const Computadora & computadora)
{
    return _ip == computadora._ip;
}

bool Computadora::operator !=(const Computadora & computadora)
{
    return !(*this == computadora);
}

std::ostream & operator <<(std::ostream & os, const Computadora & computadora)
{
    os << computadora._ip;
    
    return os;
}
    
    
