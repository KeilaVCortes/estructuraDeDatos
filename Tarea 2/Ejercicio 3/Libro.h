#pragma once
#include<iostream>
#include<string>
#include<ostream>
using namespace std;

class Libro{
    private:
        string titulo;
        string autor;
        int paginas;
        int edicion;
        string editorial;
        int anio;
    public:
        Libro();
        Libro(string, string, int, int, string, int);
        void nuevoLibro(Libro);
        void borrarLibro(Libro);
        
        bool operator<(Libro &);
        bool operator>(Libro &);
        bool operator==(Libro &);
        
        friend ostream & operator <<(ostream &, Libro &);
};
