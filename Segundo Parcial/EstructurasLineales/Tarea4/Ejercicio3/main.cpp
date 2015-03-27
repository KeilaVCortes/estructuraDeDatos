/*
Margot Duek
Tarea 4 
Ejercicio 3
Editor de texto donde se pueda 
    • Leer un archivo
    • Guardar el archivo
    • Insertar una línea
    • Borrar una línea
    • Insertar palabras
    • Borrar palabras
    • Ir al inicio de una línea
    • Ir al final de una línea- 
*/

//#include "DoubleCircularLinkedList.h" // by jginsburgn
#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "Que deseas hacer?\n 1.-Leer un archivo \n 2.-Guardar el archivo\n 3.-Insertar una línea\n 4.-Borrar una línea\n 5.-Insertar palabras\n 6.-Borrar palabras\n 7.-Ir al inicio de una línea\n 8.-Ir al final de una línea\n 9.-Nada" << endl;
    int op;
    cin >> op;
    switch(op){
        case 1:{
            /*Leer archivo*/
        }
        break;
        
        case 2:{
            /*Guardar el archivo*/   
        }
        break;
        
        case 3:{
            /*insertar una linea*/
        }
        break;
        
        case 4:
           /*Borrar una línea*/
        break;
        
        case 5:{
          /*Insertar palabras*/
        }
        break;
        
        case 6:
           /*Borrar palabras*/
        break;
        
        case 7:
            /*Ir al inicio de una línea*/
        break;
        
        case 8:
            /*Ir al final de una líne*/
        break;
        
        case 9:
            cout << "bye" << endl;
        break;
        
        default:
            cout << "Pon una opcion valida" << endl;
        break;
    }
    
    
    return 0;
}