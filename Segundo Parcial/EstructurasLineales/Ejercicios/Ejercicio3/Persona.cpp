#include "Persona.h"



std::ostream & operator << (std::ostream & os,  const Persona & persona)
{
    os << persona.apellidos << ", " << persona.nombre << "(" << persona.edad << ")" << persona.fNacimiento << std::endl;
    
    return os;
}

bool Persona::operator  == (Persona & persona){
    if(persona.tipo)
        return true;
}


void Persona::agregarEdoDeCuenta(EdoDeCuenta nuevoEstado){
    estadosDeCuent->insertBack(nuevoEstado);
}