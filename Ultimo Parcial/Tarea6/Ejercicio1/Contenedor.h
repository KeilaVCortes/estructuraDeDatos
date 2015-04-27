#pragma once
#include <iostream>
#include <string>
#include "Prenda.h"
#include <list>

class Contenedor{
    private:
        std::string nombre;
        int numero;
        double costo;
        list<Prenda> prendas;
    public:
        void agregarPrenda(Prenda prenda);
        Contenedor() : Contenedor("", 0, 0){}
        Contenedor(std::string _nombre, double _costo, int _numero) : nombre(_nombre), costo(_costo), numero(_numero){}
        std::string getNombre();
        
};



void Contenedor::agregarPrenda(Prenda prenda){
    prendas->push_back(prenda);
}