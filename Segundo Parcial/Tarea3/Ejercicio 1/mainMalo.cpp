/*
Margot Duek
Tarea 3
Ejercicio 1
*/




/*

Este main no funciona :/

*/

#include <iostream>
#include "Node.h"
#include "LinkedList.h"
using namespace std;



int main (){
    
    LinkedList<int> * numeros = new LinkedList<int>();
    
    cout << "primer valor: ";
    int primerValor;
    cin >> primerValor;
    cout << "\nUltimo valor: ";
    int ultimoValor;
    cin >> ultimoValor;
    cout << "\nCantidad de numeros primos que biscas: " << endl;
    int n;
    cin >> n;
    
    for(int i = 0; i <= (ultimoValor - primerValor); ++i){
        numeros->insert( (primerValor + i) , i);
    }
    
    for(int i = 0; i < (ultimoValor - primerValor); ++i){
        int posi = primerValor + i;
        int contador = 0;
        if(primerValor == 0){
            for(int j = 1; j < (1 + i);  ++j){
                int temp;
                temp = ((*(numeros->at(i))).getInfo()) % j;
                if (temp == 0){
                    contador ++;
                }
            }
            if(contador <= 2){
                cout << primerValor + i << endl;
            }
        }else{
            for(int j = 1; j < (1 + i);  ++j){
                int temp;
                temp = ((*(numeros->at(primerValor + i ))).getInfo()) % j;
                if (temp == 0){
                    contador ++;
                }
            }
            if(contador <= 2){
                cout << primerValor + i << endl;
            }
        }
        
    }
    
    
    
    
    /* Imprimir el contenido de la lista */
    //std::cout <<  endl << *numeros << std::endl;
    
    
    return 0;
}