#pragma once
#include<iostream>
#include<string>
#include "Vehiculo.h"
#include "Persona.h"
using namespace std;

class Registro{
    private:
        int monto;
        Vehiculo vehiculo;
        Persona persona;
    public:
        Registro();
        Registro(int, Vehiculo, Persona);
};

Registro::Registro(){
    
}

Registro::Registro(int m, Vehiculo v, Persona p): monto(m), vehiculo(v), persona(p) {
    
}
