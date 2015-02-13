#pragma once
#include<iostream>
#include<string>
#include "Libro.h"

template <class T>
class Busqueda{
    public:
        static Libro busquedaSe(T [], T , int);
        
};


template<typename T>
Libro Busqueda<T>::busquedaSe(T v[], T valor,  int longitud){
    int  existe = -1;
    int indice = 0;
    
    if(longitud <= 0) return existe;
    
    while(existe == -1 && indice < longitud){
        if(v[indice++] == valor){
            existe = indice;
        }
    }
    return existe;
}



/*

• Mostrar los libros que se hayan publicado antes de una fecha dada.
• Mostrar los libros que se hayan publicado después de una fecha dada.
• Mostrar los libros que se hayan publicado en un período de tiempo determinado.
• Mostrar los libros escritos por un autor
• Mostrar los libros publicados por una editoria

*/