/*
Clase Persona

*/

#include "Movimiento.h"

class Persona {
private:
    std::string nombre;
    std::string tipo;
    int a;
    LinkedList<Movimiento> * movimientos = new LinkedList<Movimiento>;
    
    
    
public:

    Persona() : Persona("", "",0) {}
    Persona(std::string _nombre, std::string _tipo, int _a ) : nombre(_nombre), tipo(_tipo), a(_a) {}
    
    void agregarMovimiento(Movimiento movimiento);
   
    bool operator  == (const Persona & persona);
    bool operator  != (const Persona & persona);
 
    
    friend std::ostream & operator << (std::ostream & os, const Persona & persona);
    
};