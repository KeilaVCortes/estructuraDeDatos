/*
Clase Persona

*/
#include <string>
#include <iostream>
#include <ostream>

class Persona {
private:
    std::string nombre;
    std::string tipo;
    
    
public:
    Persona() : Persona("", "") {}
    Persona(std::string _nombre, std::string _tipo ) : nombre(_nombre), tipo(_tipo) {}
    
   
    bool operator  == (Persona & persona);
 
    
    friend std::ostream & operator << (std::ostream & os, const Persona & persona);
    
};