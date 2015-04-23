//
//  main.cpp
//  Queue
//
//  Created by Vicente Cubells Nonell on 19/03/15.
//  Copyright (c) 2015 Vicente Cubells Nonell. All rights reserved.
//

#include <iostream>
#include "Queue.h"
#include "Ejercicio3/Persona.h"


int main(int argc, const char * argv[]) {

    /* Definir una cola */
    Queue<Persona>* cola = new Queue<Persona>();
    
    Persona p1("a", "t", 0);
     Persona p2("b", "t", 0);
      Persona p3("c", "t", 0);
       Persona p4("d", "t", 0);
    
    

    cola->enqueue(p1);
    cola->enqueue(p2);
    cola->enqueue(p3);
    cola->enqueue(p4);    
    /* Insertar elementos en la cola 
    cola->enqueue();
    cola->enqueue(2);
    cola->enqueue(3);
    cola->enqueue(4);
    
    */
    /* Mostrar el contenido de la cola */
    std::cout << *cola << std::endl;
    
    /* Obtener el elemento que está al inicio */
    Node<Persona> * node = cola->first();
    
    if (node != nullptr) {
        std::cout << "First = " << *node << std::endl;
    }
    
    /* Obtener el elemento que está al final */
    node = cola->last();
    
    if (node != nullptr) {
        std::cout << "Last = " << *node << std::endl;
    }
    
    /* Eliminar un elemento */
    node = cola->dequeue();
    
    if (node != nullptr) {
        std::cout << "Nodo a eliminar = " << *node << std::endl;
        delete node;
    }
    
    /* Obtener el elemento que está al inicio */
    node = cola->first();
    
    if (node != nullptr) {
        std::cout << "First = " << *node << std::endl;
    }
    
    /* Mostrar el contenido de la cola */
    std::cout << *cola << std::endl;
    
    /* Eliminar la cola.
    * Automáticamente se invoca al destructor.
    */
    
    return 0;
}
