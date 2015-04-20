
#include "../BinaryTree.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    
    
 
    /* Crear un árbol binario */
    BinaryTree<int> numeros;
    
    /* Insertar nodos */
    
    BNode<int> * uno = new BNode<int>(1);
    numeros.insert(nullptr, uno);
    
    BNode<int> * dos = new BNode<int>(2);
    numeros.insert(uno, dos);
    
    
    BNode<int> * tres = new BNode<int>(3);
    numeros.insert(uno, tres);
    
    BNode<int> * cuatro = new BNode<int>(4);
    numeros.insert(dos, cuatro);
    
    BNode<int> * cinco = new BNode<int>(5);
    numeros.insert(dos, cinco);
    
        
    BNode<int> * diez = new BNode<int>(10);
    numeros.insert(tres, diez);
    

    
        /* Mostrar el árbol en preOrder */
    std::cout << " si sumas ...." << std::endl;
    numeros.preOrder();
    std::cout << std::endl;
    
    /*Sumar nodos :)  */
    int suma = 0;
    suma = numeros.intPreOrder();
    cout << "te da: ";
    cout << suma << endl;
    
    
    return 0;
}