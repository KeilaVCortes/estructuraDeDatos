
#include "Persona.h"


bool Persona::operator >(Persona & persona)
{
    if (fFallecimiento > persona.fFallecimiento) {
        return true;
    }
    return false;
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
    