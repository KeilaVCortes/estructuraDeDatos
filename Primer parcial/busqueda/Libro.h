/*
Margot Duek
26/01/15
Estructura de datos
Libreria clase Libro
*/

#include<iostream>
#include<string>
using namespace std;

class Libro{
    private:
        string titulo;
        int anio;
        string isbn;
    public:
        Libro();
        Libro(string, int, string);
        
        friend ostream & operator <<(ostream &, Libro &);
};