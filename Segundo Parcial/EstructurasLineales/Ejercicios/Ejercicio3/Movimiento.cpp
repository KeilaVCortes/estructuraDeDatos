#include "Movimiento.h"

std::string Movimiento::getTipo(){
    return tipo;
}
bool Movimiento::operator  == (const Movimiento & movimiento){
    return movimiento.tipo == tipo;
}

bool Movimiento::operator  != (const Movimiento & movimiento){
    return movimiento.tipo != tipo;
}