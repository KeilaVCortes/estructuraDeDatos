#include<iostream>
#include<ostream>
#include<algorithm>
#include "Persona.h"
#include "Ordenamiento.h"

int main(){
    const int n = 10;
    int enteros[n];
    
    /*Así se establece las emilla del generador de numeros aleatorios*/
    srand((unsigned int) time(nullptr));
    
    /*Así se inicializa el arreglo con números aleatorios*/
    generate(enteros, enteros + n, [](){return rand() %100;});
    
    /*Otra manera mas rápida y sencilla de imprimir*/
    copy(enteros, enteros + n, ostream_iterator<int>(cout, " "));
    cout << endl;
    
    /*ordenar elementos usando la funcion lambda*/
    Ordenamiento<int>::insercion(enteros, n , [](int a, int b){return a < b;});
    
    copy(enteros, enteros + n, ostream_iterator<int>(cout, " "));
    cout << endl;
    
    /*Ahora vamos a hacer lo mismo pero con objetos de tipo Persona*/
    Persona personas[n];
    personas[0] = Persona("Margot", "Duek", 20);
    personas[1] = Persona("jose", "Santos", 18);
    personas[2] = Persona("Miguel", "Martinez", 55);
    
    /*Imprimir usando forich*/
    for(auto p: personas){
        cout << p;
    }
    
    Ordenamiento<Persona>::seleccion(personas, n, Ordenamiento<Persona>::desc);
    for(auto p: personas){
        cout << p;
    }
    
    return 0;
}