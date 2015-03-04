#pragma once
#include<iostream>
#include<string>
using namespace std;

class Persona{
    private: 
        string nombre;
        string apellido;
        int ife;
    public:
        Persona();
        Persona(string, string, int);
    
};

Persona::Persona(){
    
}

Persona::Persona(string n, string a, int i): nombre(n), apellido(a), ife(i){
    
}