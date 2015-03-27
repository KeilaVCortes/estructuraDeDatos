/*
Margot Duek
Ejercicios de clase
Ejercicio 3
*/
#include "../Stack.h"
#include "../Queue.h"
#include <iostream>
#include <string>
using namespace std;


int main(){
    
    
    
    Queue<char> * cola = new Queue<char>();
    
    
    int a = 1;
    while(a != 666){
        cout << "Que quieres hacer?" << endl;
        cout << " 1.- Añadir persona\n 2.- Saber tiempo de espera\n 7.- salir" << endl;
        int op;
        cin >> op;
        switch(op){
            case 1:{
                cout << "nombre: ";
                string nombre;
                cin >> nombre;
                cout << "tipo: ";
                string tipo;
                cin >> tipo;
               
                
                Persona persona(nombre,tipo);
                cola->enqueue(persona);
                 
            }
            break;
            
            case 2:{
                if()
            } 
                
            break;
        }
    }




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
    delete cola;
    
    return 0;
}