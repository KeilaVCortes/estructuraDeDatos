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
    
    cout << "1.-Nuevo libro\n2.-Borrar libro\n3.-ver libros publicados antes de:\n4.-Ver libros publicados despues de;\n5.-ver libros en el periodo de:\n6.-Ver libros de:\n7.-Ver libros de la editorial:\n" << endl;
    int op = 1;
    cin >> op;
    switch(op){
        case 1:
            //nuevoLibro1(nuevoLibrillo, nLibros, biblio);
        break;
        case 2:
        
        break;
        case 3:
            cout << "Desde que fecha quieres libros?" << endl;
            int anii;
            cin >> anii;
            //int pos = Busqueda<int>::busquedaSe(biblio, anii , nLibros);
        break;
        case 4:
        
        break;
        case 5:
        
        break;
        case 6:
        
        break;
        case 7:
        
        break;
        default:
            cout << "ingrese una opcion válida " << endl;
        break;
    }
    
    
    imprimeArreglo<Libro>(biblio, nLibros);
    return 0;
}
/*
Libro nuevoLibro1(Libro libro, int lib, Libro biblio[]){
    int tam = lib + 1;
    Libro temp[tam];
    for(int i  = 0; i < lib; i++){
        temp[i] = biblio[i];
    }
    temp[tam] = libro;
    biblio = temp;
    return biblio;
}
*/



template <typename T>
void imprimeArreglo(T v[], int longitud){
    for (int i = 0; i < longitud; ++i) {
        cout << v[i] << "  ";
    }
    cout << endl;
}


