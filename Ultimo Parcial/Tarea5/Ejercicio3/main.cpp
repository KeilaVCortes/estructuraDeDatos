/*

Margot Duek
Estructuras de datos
Tarea 5 
Ejercicio 3
 
 */
 
 
#include "../BinaryTree.h"
#include <iostream>
#include <string>
using namespace std;

int main(){

     
    /* Crear un árbol binario */
    BinaryTree<int> numeros;
    BinaryTree<int> reflejo;
    
    /* Insertar nodos */
    
    BNode<int> * uno = new BNode<int>(1);
    numeros.insert(nullptr, uno);
    
    BNode<int> * unob = new BNode<int>(1);
    reflejo.insert(nullptr, unob);
    
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
    
    //BinaryTree<int>::copyTreeUPD(uno, unob);
    
    /* Mostrar el árbol en preOrder */
    std::cout << " ---- preOrder ----" << std::endl;
    numeros.preOrder();
    std::cout << std::endl;


     
    
    
    return 0;
}