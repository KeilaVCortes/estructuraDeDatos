//
//  main.cpp
//  LinkedList
//
//  Created by Vicente Cubells Nonell on 23/02/15.
//  Copyright (c) 2015 Vicente Cubells Nonell. All rights reserved.
//

#include <string>
#include <iostream>
using namespace std;


#include "DoubleLinkedListMia.h"

int main(int argc, const char * argv[]) {
    
    /* Crear un Node entero */
    Node<int> first(1);

    /* Declaración de una lista de enteros */
    DoubleLinkedListMia<int> numeros;

    numeros.insert(1,1);
    numeros.insert(14,8);
    numeros.insert(11,4);
    numeros.insert(12,5);
    
    cout << numeros << endl;
}
