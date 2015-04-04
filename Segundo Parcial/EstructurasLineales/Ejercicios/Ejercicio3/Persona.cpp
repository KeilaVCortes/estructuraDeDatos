#include "Persona.h"



std::ostream & operator << (std::ostream & os,  const Persona & persona)
{
    os << persona.nombre << "(" << persona.tipo << ")" << std::endl;
    
    return os;
}
/*
bool Persona::operator  == (Persona & persona){
    if(persona.tipo)
        return true;
}
*/
bool Persona::operator == (Persona & persona)
{

    if (tipo == persona.tipo) {
        return true;
    }
    
    return false;
}