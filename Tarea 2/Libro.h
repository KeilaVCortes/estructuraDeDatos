#pragma once
#include<iostream>
#include<string>

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
        Libro(string, string, int, int, srting, int);
        void nuevoLibro(Libro);
        void borrarLibro(Libro);
        Libro antesDeFecha(int anio);
        Libro despuesDeFecha(int anio);
        Libro periodo(int anio, int anio);
        Libro porAutor(string autor);
        Libro porEditorial(string editorial);
};
