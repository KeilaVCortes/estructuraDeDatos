#include <iostream>
#include "Ciudad.h"
#include <ctime>
#include <cstdlib>

int main(){
    
    const int numero_ciudades = 5;
    Ciudad * ciudades[numero_ciudades];
    for(int i = 0; i < numero_ciudades; ++i){
        ciudades[i] = new Ciudad("ciudad" + itoa(i), rand % 10000000);
    }
    
    return 0;
}