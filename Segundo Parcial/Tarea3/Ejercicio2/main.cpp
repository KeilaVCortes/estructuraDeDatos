/*
Margot Duek
Tarea 3
Ejercicio 2


Requisitos del programa:

Programe una aplicación que permita ingresar n números reales a una lista enlazada y m
números reales a otra lista, siendo m y n elegibles por el usuario (entrados por consola). A las
listas anteriores les llamaremos N y M respectivamente.
Después de tener ambas listas, la aplicación debe ser capaz de realizar las siguientes
operaciones:
• N ⋃ M (Los elementos duplicados deben aparecer una sola vez)
• N - M
• M - N
• N * M
• N ⋂ M 

*/

#include <iostream>
#include "Node.h"
#include "LinkedList.h"
using namespace std;

int main(){
    
        
    LinkedList<int> * N = new LinkedList<int>();
    LinkedList<int> * M = new LinkedList<int>();
    LinkedList<int> * P = new LinkedList<int>();
    
    
    cout << "Hola! empezaremos llenando la lista ´N´ " << endl;
    cout << "Cuantos numeros deceas meter en N ? " ;
    int longitudN;
    cin >> longitudN;
    for (int i = 0; i < longitudN ; ++i){
        cout << "pon número:  ";
        int numero;
        cin >> numero;
        N->insertFront(numero);
    }
    cout << "Listo, ahora haremos la lista ´M´ " << endl;
    cout << "Cuantos numeros deceas meter en M ? " ;
    int longitudM;
    cin >> longitudM;
    for (int i = 0; i < longitudM ; ++i){
        cout << "pon número:  ";
        int numero;
        cin >> numero;
        M->insertFront(numero);
    }
    

    cout << "Tu lista N contiene: " << endl;
    cout << *N << endl;
    cout << "Tu lista M contiene: " << endl;
    cout << *M << endl;
    
    
    cout << "Que deseas hacer?\n 1.- N ⋃ M\n 2.- N - M\n 3.- M - N\n 4.- N * M\n 5.- N ⋂ M \n 6.- Nada" << endl;
    int op;
    int tam;
    if(longitudM < longitudN){
        tam = longitudN -1;
    }else{
        tam = longitudM -1 ;
    }
    //cout << tam;
    cin >> op;
    switch(op){
        case 1:{
            int n;
            for (int i = 0; i < tam; ++i){
                n = ((*(N->at(i))).getInfo());
                if(P->empty()){
                    P->insertFront(n);
                }else{
                    if (((*(P->at(i))).getInfo()) != n){
                        P->insertFront(n);
                    }    
                }
            }  
            cout << *P << endl;
        }
        break;
        
        case 2 :
        
        break;
        
        case 3:
        
        break;
        
        case 4:
        
        break;
        
        case 5:
        
        break;
        
        case 6:
            exit();
        break;
        
        default:
            cout << "Pon una opcion valida" << endl;
        break;
    }
    
    
    return 0;
}

