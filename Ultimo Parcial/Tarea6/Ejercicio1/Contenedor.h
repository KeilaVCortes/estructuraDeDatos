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
        std::list<Prenda> prendas;
    public:
        Contenedor() : Contenedor("", 0, 0){}
        Contenedor(std::string _nombre, double _costo, int _numero) : nombre(_nombre), costo(_costo), numero(_numero){}
        
        std::string getNombre();
        int getNumero();
        double getCosto();
        void agregarPrenda(Prenda prenda);
        void setCosto(double costo);
        int getSizeLista();
        void imprimeLista();
        std::list<Prenda> getLista();
        
         friend std::ostream & operator << (std::ostream & os, const Contenedor & contenedor);
};

void Contenedor::setCosto(double costo){
    this->costo = costo;
}

void Contenedor::agregarPrenda(Prenda prenda){
    prendas.push_back(prenda);
}

std::string Contenedor::getNombre(){
    return nombre;
}

int Contenedor::getNumero(){
    return numero;
}
/*
double Contenedor::getCosto(){
    for(int i  = 0; i < prendas.size() ; ++i ){
        costo += prendas.at(i)->getCosto();
    }
    return costo;
}
*/

double Contenedor::getCosto(){
    for(auto mar: prendas){
        costo += mar.getCosto();
    }
    return costo;
}


std::ostream & operator << (std::ostream & os,  const Contenedor & contenedor)
{
    os << contenedor.nombre << ", " << contenedor.numero << "(" << contenedor.costo << ")"  << std::endl;

    return os;
}


int Contenedor::getSizeLista(){
    return prendas.size();
}

void Contenedor::imprimeLista(){
    for(auto mar : prendas){
        std::cout << mar << std::endl;    
    }
}

std::list<Prenda> Contenedor::getLista(){
    return prendas;
}