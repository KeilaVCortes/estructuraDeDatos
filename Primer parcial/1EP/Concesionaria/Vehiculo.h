#pragma oce
#include<iostream>
#include<string>
using namespace std;

class Vehiculo{
    private:
        string vehiculo;
        string codigo;
        string marca;
        int modelo;
        double kilometraje;
        string traccion;
        string cilindraje;
    public:
        Vehiculo();
        Vehiculo(string, string, string, int, double, string, string);
};

Vehiculo::Vehiculo(){
    
}

Vehiculo::Vehiculo(string vehiculo, string codigo, string marca, int modelo, double kilometraje , string traccion, string cilindraje):vehiculo(vehiculo), codigo(codigo), marca(marca), modelo(modelo), kilometraje(kilometraje),traccion(traccion), cilindraje(cilindraje){
    
} 