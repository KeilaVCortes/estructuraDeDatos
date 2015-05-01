/*
 * Margot Duek
 * Estructuras de datos
 * Tarea 6
 * Ejercicio 2

Para un estudio sociológico en una universidad, una empresa consultora quiere desarrollar una
aplicación que le permita establecer las relaciones entre estudiantes durante su vida estudiantil.
La aplicación debe ser capaz de generar los siguientes resultados:
• Con quiénes se ha relacionado un estudiante y qué tiempo duró cada relación
• Qué porcentaje del tiempo ha estado acompañado y qué porcentaje del tiempo ha estado solo
• Quién es el estudiante que ha tenido más relaciones
• Quiénes son los estudiantes que no han tenido relaciones
• Quién es el estudiante más estable en sus relaciones

*/

#include <iostream>
#include <string>
#include "Persona.h"
#include <list>
using namespace std;

list<Persona> personas;
    
int main(){
    cout << "1. iniciar sesion\n 2. Registrarte " << endl;
    int op;
    if (op == 1){
        //inicia sesion
        cout << "Nombre: " ;
        string nombre;
        cin.ignore();
        getline(cin,nombre);
        
        cout << "Apellido: " ;
        string apellido;
        cin >> apellido;
        
        
        
        
        validaPersona(persona);
    
        
        
    }else if(op == 2){
        //Registrate
        cout << "Nombre: " ;
        string nombre;
        cin.ignore();
        getline(cin,nombre);
        
        cout << "Apellido: " ;
        string apellido;
        cin >> apellido;
        
        Persona persona(nombre, apellido, 0, 0);
        personas.push_back(persona);
        
        navega(persona);
    }else{
        cout << "pon una opcion real" << endl;
    }
   
    
    
    return 0;
}

void tienesUnNuevoAmigo(string nombre, string apellido){

    
    
    
}


void navega(persona){
     int whilo = 0;
    while(whilo != 666){
        cout << "1. Eres una persona nueva a analizar \n2. Tienes un nuevo amigo" << endl;
        cout << "3. Pasaste tiempo con una persona\n4.- Quieres saber tus porcentajes de tiempo (Solito o acompañado)" << endl;
        cout << "5. Nominaciones" << endl;
        cout << "6. Salir" << endl;
        int op;
        cin >> op;
        switch(op){
            case 1:{
                
            }
            break;
            
            case 2:{
                cout << "Nombre de tu amigo: " ;
                string nombre;
                cin.ignore();
                getline(cin,nombre);
                
                cout << "Apellido de tu amigo: " ;
                string apellido;
                cin >> apellido;
                
                int whila = 0;
                bool registrado = false;
                while (whila != 666){
                    for (auto mar : personas){
                        if( mar.getNombre() == nombre && mar.getApellido() == apellido){
                            //persona = mar;
                            //cout << endl;
                            //cout << "Bienvend@   " << persona.getNombre() << "  " << persona.getApellido() << endl;
                            registrado = true;
                        }
                    }
                    if(!registrado){
                        cout << "No existe esa persona" << endl;
                        whilo = 666;
                        return;
                    } 
                }
                
                cout << "Tiempo que pasaste con tu amigo (en minutos)" << endl;
                int minutos;
                cin >> minutos;
                
                
                
                
            }
            break;
            
            default:
                cout << "Pon una opcion correcta" << endl;
            break;
        }
    }
}