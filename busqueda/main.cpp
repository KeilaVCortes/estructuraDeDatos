/*
Margot Duek
22/01/15
Ejercicios de búsqueda
*/



#include<stdlib.h>
#include "BusquedaGenerica.h"
using namespace std;


template<typename T>
void imprimeArreglo(T [], int);

int main(){
    
    const int longitud = 10;
    int enteros[longitud];
    
    for(int i = 0 ; i < longitud ; ++i){
        enteros[i] = rand() % 100;
    }
    
    imprimeArreglo<int>(enteros, longitud);
    cout << " que valor quieres buscar" << endl;
    int valor;
    cin >> valor;
    
    
    /*Buscar enteros*/
    bool existe = BusquedaGenerica<int>::busquedaSecuencial(enteros, valor, longitud);
    if(existe){
        cout << "el valor si existe" << endl;
    }else{
        cout << "el valor no existe" << endl;
    }
    
    
    /*Buscar con punto flotante*/
    float flotante[longitud];
    for (int i  = 0; i < longitud; ++i){
        flotantes[i] = (rand() % 100) *0.5;
    }
    
    imprimeArreglo<float>(flotantes, longitud);
    cout << "que numero quieres buscar" << endl;
    float valorf;
    cin >> valorf;
    bool existe = BusquedaGenerica<float>busquedaSecuencial(flotantes, valorf, longitud);
    if (existe){
        cout << "existe" << endl;
    }else{
        cout << "No existe" << endl;
    }
    
    
    /* Buscar libros*/
    const int libros = 3;
    Libro biblioteca[nlibros];
    biblioteca[0] = Libro();
    biblioteca[1] = Libro("crepusculo", 1998, "abcd");
    biblioteca[2] = Libro("Hola", 1598, "qqqw"):

    imprimeArreglo<Libro>(biblioteca, nlibros);    
    
    
    return 0;
}




template<typename T>
void imprimeArreglo(T v[] , int longitud){
    for(int i =0; i < longitud ; ++i){
        cout << v[i] << " " ;
    }
}