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
                string tipo;
                cin >> tipo;
               
                
                Persona persona(nombre,tipo);
                cola->enqueue(persona);
                
                if(persona.tipo == "Retiro"){
                    espera += 4;
                }else if(persona.tipo == "Deposito"){
                    espera += 2;
                }else if(persona.tipo == "Consulta"){
                    espera += 3.5;
                }else if(persona.tipo == "Actualizacion"){
                    espera += 5;
                }else if(persona.tipo == "Pagos"){
                    espera += 2;
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