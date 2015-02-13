#include <iostream>
#include "Libro.h"
#include "Busqueda.h"
using namespace std;


template<typename T>
void imprimeArreglo(T [], int);

int main(){

    const int nLibros = 5;
    Libro biblio[nLibros];
    
    biblio[0] = Libro("Hola", "mi", 98, 4 , "Editorial chafa", 1984);
    biblio[1] = Libro("Harry P ", "JK rowling", 989, 6, "Editorial Editores", 1994);
    biblio[2] = Libro("camara ", "camarilla", 854, 3 , "Editorial", 2010);
    biblio[3] = Libro("Har ", "JK ", 9, 3, "Editorial Editores", 555);
    biblio[4] = Libro("Crepus P ", "Alguien mas", 1254, 1, "l Editores", 1560);
   
    imprimeArreglo<Libro>(biblio, nLibros);
    return 0;
}



template <typename T>
void imprimeArreglo(T v[], int longitud){
    for (int i = 0; i < longitud; ++i) {
        cout << v[i] << "  ";
    }
    cout << endl;
}


