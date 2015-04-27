#pragma once
#include <iostream>
#include <string>

class Prenda{
    private:
        double costo;
        std::string nombre; 
        int cantidad;
        std::string descripcion;
    public:
        Prenda() : Prenda("", 0, 0, ""){}
        Prenda(std::string _nombre, double _costo, int _cantidad, std::string _descripcion) : nombre(_nombre), costo(_costo), cantidad(_cantidad), descripcion(_descripcion){}
        std::string getNombre();
        double getCosto();
          friend std::ostream & operator << (std::ostream & os, const Prenda & prenda);
        
};

std::string Prenda::getNombre(){
    return nombre;
}

double Prenda::getCosto(){
    return costo;
}

std::ostream & operator << (std::ostream & os,  const Prenda & prenda)
{
    os << prenda.nombre << " "  << "(" << prenda.cantidad << ")" << prenda.costo << "\n   " << prenda.descripcion << std::endl;
    
    return os;
}
