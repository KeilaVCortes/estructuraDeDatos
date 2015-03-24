/*
Margot Duek
Tarea 4
Ejercicio 1
*/
#include "Stack.h"
#include <iostream>
#include <string>
using namespace std;


int main(){
    
    
    Stack<char> * pila = new Stack<char>();
    bool banlanceado = false;
    int noBal = 0;
    
    
    cout << "pon tu ecuacion" << endl;
    string ecuacion;
    cin >> ecuacion; 
    
    for(int i = 0; i < ecuacion.length(); ++i){
        if (ecuacion[i] == '(' || ecuacion[i] == '{' || ecuacion[i] == '[' ){
           pila->push(ecuacion[i]);
        }
        else if(ecuacion[i] == ')'){
            if(pila->top()->getInfo() == '(' && !pila->empty()){
                pila->pop();
            }
        }
        else if(ecuacion[i] == '}'){
            if(pila->top()->getInfo() == '{' && !pila->empty()){
                pila->pop();
            }
        }
        else if(ecuacion[i] == ']'){
            if(pila->top()->getInfo() == '['){
                if(pila->empty()){
                    noBal++;
                }else{
                    pila->pop();
                }
               
            }
        }
    }
    if (pila->empty()){
        banlanceado = true;
    }
   
    
    cout << *pila << endl;
    cout << banlanceado << endl;
    
     /* Eliminar la pila */
    delete pila;
    
    return 0;
}