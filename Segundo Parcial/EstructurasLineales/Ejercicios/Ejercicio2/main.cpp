/*
Margot Duek
Ejercicios de clase
Ejercicio 2
*/
#include "../Stack.h"
#include <iostream>
#include <string>
using namespace std;


int main(){
    
    
    Stack<string> * pila = new Stack<string>();

    cout << "pon tu frase" << endl;
    string ecuacion;
    getline (cin, ecuacion); 
    cout << ecuacion << endl;
    string temp = "0";

    

    for(int i = 0; i < ecuacion.length(); ++i){
        while(ecuacion[i] != ' ' && ecuacion[i] != '\0'){
            temp += ecuacion[i];
            i++;
        }
        pila->push(temp);
        temp = " ";
    }
       
    cout << *pila << endl;

     /* Eliminar la pila */
    delete pila;

    
    return 0;
}