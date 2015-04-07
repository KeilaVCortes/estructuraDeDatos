/*
Margot Duek
Ejercicios de clase
Ejercicio 3
*/

#include "../Queue.h"
#include "../LinkedList.h"
#include "Persona.h"

using namespace std;


int main(){
    
    
    
    Queue<Persona> * cola = new Queue<Persona>();
    
    float espera = 0;
    int a = 1;
    while(a != 666){
        cout << "Que quieres hacer?" << endl;
        cout << " 1.- Añadir persona\n 2.- Saber tiempo de espera\n 3.- salir" << endl;
        int op;
        cin >> op;
        switch(op){
            case 1:{
                cout << "nombre: ";
                string nombre;
                cin >> nombre;
                cout << "tipo: ";
                string tipol;
                cin >> tipol;
               
                
                Persona persona(nombre,tipol,0);
                cola->enqueue(persona);
                
                if(tipol == "Retiro"){
                    espera += 4;
                    Movimiento movimiento("Retiro", 4);
                    persona.agregarMovimiento(movimiento);
                }else if(tipol == "Deposito"){
                    espera += 2;
                    Movimiento movimiento("Deposito", 2);
                    persona.agregarMovimiento(movimiento);
                }else if(tipol == "Consulta"){
                    espera += 3.5;
                    Movimiento movimiento("Consulta", 4);
                    persona.agregarMovimiento(movimiento);
                }else if(tipol == "Actualizacion"){
                    espera += 5;
                    Movimiento movimiento("Actualizacion", 5);
                    persona.agregarMovimiento(movimiento);
                }else if(tipol == "Pagos"){
                    espera += 2;
                    Movimiento movimiento("Pagos", 2);
                    persona.agregarMovimiento(movimiento);
                }  
            
                
            }
            break;
            
            case 2:{
                cout << "Tiempo total de espera:  " << espera << endl;
                cout << "Personas antes que usted: "<< *cola << endl;
            } 
                
            break;
            
            case 3:
                cout << "bye" << endl;
                a = 666;
            break;
            
        }
    }

     /* Eliminar la pila */
    delete cola;
    
    return 0;
}