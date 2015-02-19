#pragma once
#include<iostream>
#include<string>
#include<ostream>
using namespace std;

class Vehiculo{
    private:
        string placa;
        int servicios[5];
        int contServicio;
        int costo;
    public:
        Vehiculo();
        Vehiculo(string,int, int);
        
        int getCosto();
        string getPlaca();
        int getContServicio();
        
        friend ostream& operator << (ostream& os, Vehiculo coche);
    
};