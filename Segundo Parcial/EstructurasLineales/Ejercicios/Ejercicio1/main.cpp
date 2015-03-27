/*
Margot Duek
Ejercicios de clase
Ejercicio 1
*/
#include "../Stack.h"
#include "../Queue.h"
#include <iostream>
#include <string>
using namespace std;


int main(){
    
    
    Stack<char> * pila = new Stack<char>();
    Queue<char> * cola = new Queue<char>();

    
    
    cout << "pon tu ecuacion" << endl;
    string ecuacion;
    cin >> ecuacion; 
    
    for(int i = 0; i < ecuacion.length(); ++i){
        pila->push(ecuacion[i]);
    }
       
    for(int i = 0; i < ecuacion.length(); ++i){
        cola->enqueue(pila->pop()->getInfo());
    }
  

    cout << *cola << endl;

     /* Eliminar la pila */
    delete pila;
    delete cola;
    
    return 0;
}