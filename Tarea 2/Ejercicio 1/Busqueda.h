#pragma once
#include<iostream>
#include<string>
#include "Libro.h"

template <class T>
class Busqueda{
    public:
        static Libro busquedaBin(T [], T , int, int);
        
};


template<typename T>
Libro Busqueda<T>::busquedaBin(T l[], T valor, int inferior, int superior){
    if (inferior >= superior){
        return -1;
    }else{
        int mitad = (inferior + superior) / 2;
        
        if(l[mitad] == valor){
            return mitad;
        }else if(valor < l[mitad]){
            return busquedaBin(l, valor, inferior, mitad);
        }else{
            return busquedaBin(l, valor, mitad + 1, superior);
        }
        
    }
}



/*

• Mostrar los libros que se hayan publicado antes de una fecha dada.
• Mostrar los libros que se hayan publicado después de una fecha dada.
• Mostrar los libros que se hayan publicado en un período de tiempo determinado.
• Mostrar los libros escritos por un autor
• Mostrar los libros publicados por una editoria

*/