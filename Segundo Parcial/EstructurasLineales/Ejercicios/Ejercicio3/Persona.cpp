#include "Persona.h"



void Persona::agregarMovimiento(Movimiento movimiento){
    movimientos->insertBack(movimiento);
}

std::ostream & operator << (std::ostream & os,  const Persona & persona)
{
    os << persona.nombre << "(" << persona.tipo << ")" << std::endl;
    
    return os;
}

bool Persona::operator  == (const Persona & persona){
    return persona.tipo == tipo;
}

bool Persona::operator  != (const Persona & persona){
    return persona.tipo != tipo;
}
/*
bool Persona::operator == (Persona & persona)
{

    if (tipo == persona.getTipo()) {
        return true;
    }
    
    return false;
}*/