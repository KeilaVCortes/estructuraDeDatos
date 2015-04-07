#include "Empresa.h"

std::string Empresa::getNombre(){
    return nombre;
}

int Empresa::getNumero(){
    return numero;
}

bool operator  == (const Empresa & empresa){
    return empresa.nombre == nombre;
}

bool operator  != (const Empresa & empresa){
    return empresa.nombre =! nombre;
}