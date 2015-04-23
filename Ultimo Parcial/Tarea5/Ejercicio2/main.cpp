/*

Margot Duek
Estructuras de datos
Tarea 5 
Ejercicio 2
 
 
Adicione a la clase BinaryTree desarrollada en clases, un método que permita obtener la
reflexión del árbol. En el programa principal debe hacer uso del método desarrollado y
demostrar que funciona.
Nota: Para obtener la reflexión de un árbol binario, para cada nodo existente se deben
intercambiar de lugar los hijos izquierdo y derecho.En el programa principal debe hacer uso del
método desarrollado y demostrar que funciona.
 */
 
 
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
    
    //BinaryTree<int>::copyTreeUPD(uno, unob);
    
    /* Mostrar el árbol en preOrder */
    std::cout << " ---- preOrder ----" << std::endl;
    numeros.preOrder();
    std::cout << std::endl;
   

    numeros.reflex();
    
    /* Mostrar el árbol en preOrder */
    std::cout << " ---- preOrder ----" << std::endl;
    numeros.preOrder();
    std::cout << std::endl;
     
    
    
    return 0;
}