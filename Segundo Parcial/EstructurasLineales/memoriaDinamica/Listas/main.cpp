#include <iostream>
#include "Node.h"
#include "LinkedList.h"
using namespace std;

int main(){
    Node<int> first;
    Node<float> second(3.45);
    Node<std::string> cad("Hola!");
    
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << cad << std::endl;
    
    LinkedList<int> * numeros = new LinkedList<int>();
    
    //primer elemento
    cout << "first = " << numeros->first() << endl;
    //tamaño de la lista
    cout << "size = " << numeros->size() << endl;
    //saber si esta vacía
    cout << "empty = " << (numeros->empty() ? "true" : "false") << endl;
    //insertar elementos
    numeros->insert(1,0);
    //imprimir lista
    cout << *numeros << endl;
    //obtener elemento
    int pos = 4;
    cout << "At(" << pos << ") = " << *(numeros->(pos)) <<endl;
    //obtener posicion del elemento
    Node<int> * node = numeros->at(0);
    cout << "Node esta en posicion: " << numeros->(node) <<endl;
    //crear nuevo nodo 
    Node<int> * newnode = new Node<int>(30);
    numeros->insertBack(newnode);
    //borrar nodos de la lista
    Node<int> * removenode = numeros->removeBack();
    cout <<  "Nodo a borrar " << *removenode << endl;
    delete removenode;
    
    delete numeros;
    
    return 0;
}