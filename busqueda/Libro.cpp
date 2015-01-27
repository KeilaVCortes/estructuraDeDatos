/*
Margot Duek
26/01/15
Estructura de datos
Libro cpp
*/
#include "Libro.h"

Libro::Libro() : Libro("La historia de Margot", 2016, "Mar94"){
    
}

Libro::Libro(string t, int ap, string i) : titulo(t), anio(ap), isbn(i){
    
}

ostream & operator <<(ostream & os, Libro & libro){
    os << libro.titulo << endl;
    return os;
}

