/*
Margot Duek
Tarea 3
Ejercicio 2


Requisitos del programa:

Realice un programa que permita a un usuario entrar los datos de n personas y almacenarlos en
una lista enlazada ordenada, de tal manera que en todo momento las personas se encuentren
ordenadas alfabéticamente por el apellido y luego por el nombre. El usuario puede entrar tantas
personas como desee. La aplicación debe permitir en todo momento:
• Añadir una persona
• Buscar una persona
• Borrar una persona
• Visualizar los datos de todas las personas almacenadas
• Borrar todas las personas
• Determinar la cantidad de personas existentes
Para resolver el ejercicio debe, a partir de la clase LinkedList, crear una nueva clase
denominada OrderedLinkedList que herede de la clase anterior y sobreescriba y/o defina
los métodos necesarios para mantener la lista ordenada en todo momento. Esta clase debe ser
genérica.
Los datos de las personas que interesan son: nombre, apellidos, edad y fecha de
nacimiento

*/


#include "Persona.h"

#include <iostream>
#include "Node.h"
#include "LinkedList.h"
using namespace std;
int main(){
    
    LinkedList<Persona> * M = new LinkedList<Persona>();
    int a = 1;
    while(a != 666){
        cout << "Que quieres hacer?" << endl;
        cout << " 1.- Añadir persona\n 2.- Buscar persona\n 3.- Borrar persona\n 4.- ver todas la personas\n 5.- borrar todas las personas\n 6.- Ver cantidad de personas\n 7.- salir" << endl;
        int op;
        cin >> op;
        switch(op){
            case 1:{
                cout << "nombre: ";
                string nombre;
                cin >> nombre;
                cout << "apellido: ";
                string apellido;
                cin >> apellido;
                cout << "Edad: ";
                int edad;
                cin >> edad;
                cout << "año de nacimiento: ";
                int anio;
                cin >> anio;
                
                Persona persona(nombre,apellido, edad, anio);
                M->insertBack(persona);
                 
            }
            break;
            
            case 2:{
                cout << "nombre: ";
                string nombre;
                cin >> nombre;
                cout << "apellido: ";
                string apellido;
                cin >> apellido;
                cout << "Edad: ";
                int edad;
                cin >> edad;
                cout << "año de nacimiento: ";
                int anio;
                cin >> anio;
                
                Persona persona(nombre,apellido, edad, anio);
                
                if (M->search(persona)){
                    cout << "Si existe " << endl;
                }else{
                    cout << "no existe" << endl;
                }
                
                
            } 
                
            break;
            
            case 3:{
                cout << "nombre: ";
                string nombre;
                cin >> nombre;
                cout << "apellido: ";
                string apellido;
                cin >> apellido;
                cout << "Edad: ";
                int edad;
                cin >> edad;
                cout << "año de nacimiento: ";
                int anio;
                cin >> anio;
                
                Persona persona(nombre,apellido, edad, anio);
                
                
                if (M->search(persona)){
                    cout << "Borrado " << endl;
                    M->remove(M->searchNode(persona));
                }else{
                    cout << "no existe" << endl;
                }
            }
            break;
            
            case 4:
                 cout << endl << *M << endl;
            break;
            
            case 5:
                M->clear();
                cout << "Lito :) " << endl;
            break;
            
            case 6:
                cout << "hay " << M->size() << "personas" << endl;
            break;
            
            case 7:
                cout << "bye" << endl;
                a = 666;
            break;
            
        }
        
        
    }
    
    
    delete M;
    return 0;
}