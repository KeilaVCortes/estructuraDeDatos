#include "Orden.h"
#include<cstdlib>

#define tamanio 1000

char genRandomChar();
void fill(string arreglo[]);
void printLista(string arreglo[]);

int main(){
    string caracteres[tamanio];
    
    fill(caracteres);
    printLista(caracteres);
    
    int op = 1;
    cout << "\n 1.- burbuja desc\n 2.- insercion desc\n 3.- seleccion desc\n 4.- burbuja asc\n 5.- insercion asc\n 6.- seleccion asc" <<endl;
    cin >> op;
    switch(op){
        case 1:
            Orden<string>::burbuja(caracteres, tamanio, Orden<string>::desc);
        break;
        case 2:
            Orden<string>::insercion(caracteres, tamanio, Orden<string>::desc);
        break;
        case 3:
            Orden<string>::seleccion(caracteres, tamanio, Orden<string>::desc);
        break;
        case 4:
            Orden<string>::burbuja(caracteres, tamanio, Orden<string>::asc);
        break;
        case 5:
            Orden<string>::insercion(caracteres, tamanio, Orden<string>::asc);
        break;
        case 6:
            Orden<string>::seleccion(caracteres, tamanio, Orden<string>::asc);
        break;
        default:
            cout << "pon una opciomn existente\n\n\n";
        break;
    }


    printLista(caracteres);
 

    return 0;
}

char genRandomChar(){
	static const char alphanum[] =
	"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
	"abcdefghijklmnopqrstuvwxyz";

	int stringLength = sizeof(alphanum) - 1;
	return alphanum[rand() % stringLength];
}

void fill(std::string arreglo[]){
	std::string palabra;
	for (int i = 0; i < tamanio; i++)
	{
		for (int a = 0; a < 5; a++)
		{
			palabra += genRandomChar();
		}
		
		arreglo[i] = palabra;
		palabra.clear();
	}
}

void printLista(std::string arreglo[]){
	for(int i = 0; i < tamanio; i++)
	{
		std::cout << arreglo[i] << "   ";
	}
}
