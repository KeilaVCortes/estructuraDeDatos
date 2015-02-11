#pragma once
#include<iostream>
#include<string>
#include<ostream>
using namespace std;

class Persona{
    private:
        string nombre;
        string apellidos;
        int edad;
    public:
        Persona();
        Persona(string n, string a, int e) : nombre(n), apellidos(a), edad(e){}
        
        bool operator >(Persona & persona);
        bool operator <(Persona & persona);
        friend ostream & operator << (ostream & os, Persona & persona);
        
    
};