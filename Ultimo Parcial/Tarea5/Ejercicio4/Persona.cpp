
#include "Persona.h"


bool Persona::operator >(Persona & persona)
{
    if (apellidos > persona.fFallecimiento) {
        
        return true;
    }
    else if (apellidos == persona.fFallecimiento) {
    
        if (nombre < persona.fNacimiento) {
            return true;
        }
        else {
            return false;
        }
    }
    
    return false;
}

bool Persona::operator <(Persona & persona)
{
    return fFallecimiento < persona.fFallecimiento;
}

std::ostream & operator << (std::ostream & os,  const Persona & persona)
{
    os << persona.apellidos << ", " << persona.nombre << "(" << persona.edad << ")" << persona.fNacimiento << std::endl;
    
    return os;
}

bool Persona::operator  == (Persona & persona){
    if(persona.nombre == nombre && persona.apellidos == apellidos){
        return true;
    }else {
        return false;
    }
}
    