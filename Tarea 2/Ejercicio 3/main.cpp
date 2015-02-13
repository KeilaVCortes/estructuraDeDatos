#include "Libro.h"
#include "Orden.h"
using namespace std;

template<typename T>
void imprimeArreglo(T [], int);

int main(){

    const int nLibros = 5;
    int tamanio = nLibros;
    Libro biblio[nLibros];
    
    biblio[0] = Libro("Hola", "mi", 98, 4 , "Editorial chafa", 1984);
    biblio[1] = Libro("Harry P ", "JK rowling", 989, 6, "Editorial Editores", 1994);
    biblio[2] = Libro("camara ", "camarilla", 854, 3 , "Editorial", 2010);
    biblio[3] = Libro("Har ", "JK ", 9, 3, "Editorial Editores", 555);
    biblio[4] = Libro("Crepus P ", "Alguien mas", 1254, 1, "l Editores", 1560);
    
    imprimeArreglo<Libro>(biblio, nLibros);
    
    int opi = 1;
    cout << "ordenar por\n 1.- titulo\n 2.- año\n 3.- edicion\n" << endl;
    cin >> opi;
    switch(opi){
        case 1:
            int opa = 1;
            cout << "\n 1.- burbuja desc\n 2.- insercion desc\n 3.- seleccion desc\n 4.- burbuja asc\n 5.- insercion asc\n 6.- seleccion asc" <<endl;
            cin >> opa;
            switch(opa){
                case 1:
                    Orden<string>::burbuja(biblio, tamanio, Orden<string>::desc);
                break;
                case 2:
                    Orden<string>::insercion(biblio, tamanio, Orden<string>::desc);
                break;
                case 3:
                    Orden<string>::seleccion(biblio, tamanio, Orden<string>::desc);
                break;
                case 4:
                    Orden<string>::burbuja(biblio, tamanio, Orden<string>::asc);
                break;
                case 5:
                    Orden<string>::insercion(biblio, tamanio, Orden<string>::asc);
                break;
                case 6:
                    Orden<string>::seleccion(biblio, tamanio, Orden<string>::asc);
                break;
                default:
                    cout << "pon una opciomn existente\n\n\n";
                break;
            }
        break;
        case 2:
            int ope = 1;
            cout << "\n 1.- burbuja desc\n 2.- insercion desc\n 3.- seleccion desc\n 4.- burbuja asc\n 5.- insercion asc\n 6.- seleccion asc" <<endl;
            cin >> ope;
            switch(ope){
                case 1:
                    Orden<string>::burbuja(biblio, tamanio, Orden<string>::desc);
                break;
                case 2:
                    Orden<string>::insercion(biblio, tamanio, Orden<string>::desc);
                break;
                case 3:
                    Orden<string>::seleccion(biblio, tamanio, Orden<string>::desc);
                break;
                case 4:
                    Orden<string>::burbuja(biblio, tamanio, Orden<string>::asc);
                break;
                case 5:
                    Orden<string>::insercion(biblio, tamanio, Orden<string>::asc);
                break;
                case 6:
                    Orden<string>::seleccion(biblio, tamanio, Orden<string>::asc);
                break;
                default:
                    cout << "pon una opciomn existente\n\n\n";
                break;
            }
        break;
        case 3:
            int opo = 1;
            cout << "\n 1.- burbuja desc\n 2.- insercion desc\n 3.- seleccion desc\n 4.- burbuja asc\n 5.- insercion asc\n 6.- seleccion asc" <<endl;
            cin >> opo;
            switch(opo){
                case 1:
                    Orden<string>::burbuja(biblio, tamanio, Orden<string>::desc);
                break;
                case 2:
                    Orden<string>::insercion(biblio, tamanio, Orden<string>::desc);
                break;
                case 3:
                    Orden<string>::seleccion(biblio, tamanio, Orden<string>::desc);
                break;
                case 4:
                    Orden<string>::burbuja(biblio, tamanio, Orden<string>::asc);
                break;
                case 5:
                    Orden<string>::insercion(biblio, tamanio, Orden<string>::asc);
                break;
                case 6:
                    Orden<string>::seleccion(biblio, tamanio, Orden<string>::asc);
                break;
                default:
                    cout << "pon una opciomn existente\n\n\n";
                break;
            }
        break;
        default:
            cout << "pon op valida" << endl;
        break;
    }
    
    
    return 0;
}



template <typename T>
void imprimeArreglo(T v[], int longitud){
    for (int i = 0; i < longitud; ++i) {
        cout << v[i] << "  ";
    }
    cout << endl;
}


