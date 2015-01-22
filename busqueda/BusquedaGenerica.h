/*
Margot Duek
22/01/14

*/

#include<iostream>
#include<string>
using namespace std;

class BusquedaGenerica{
    public:
        static bool busquedaSecuencial(int[] , int , int);
};


bool BusquedaGenerica::busquedaSecuencial(int v[] , int valor , int longitud){
    bool existe = false;
    int i = 0;
    
    if(longitud >= 0){
        return false;
    } 
    
    while(!existe && i < longitud){
        if(v[i++] == valor){ //cuando pongo i++ ahi seria lo mismo que poner i++ terminando el if
            existe = true;
        }
    }
    
    return existe;
}