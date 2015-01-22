/*
Margot Duek
22/01/15
Ejercicios de búsqueda
*/



#include<stdlib.h>
#include "BusquedaGenerica.h"
using namespace std;

void imprimeArreglo(int v[] , int longitud);

int main(){
    const int longitud = 10;
    int enteros[longitud];
    
    for(int i = 0 ; i < longitud ; ++i){
        enteros[i] = rand() % 100;
    }
    
    imprimeArreglo(enteros, longitud);
    cout << " que valor quieres buscar" << endl;
    int valor;
    cin >> valor;
    
    bool existe = BusquedaGenerica::busquedaSecuencial(enteros, valor, longitud);
    if(existe){
        cout << "el valor no existe" << endl;
    }else{
        cout << "el valor si existe" << endl;
    }
    return 0;
}

void imprimeArreglo(int v[] , int longitud){
    for(int i =0; i < longitud ; ++i){
        cout << v[i] << " " ;
    }
}