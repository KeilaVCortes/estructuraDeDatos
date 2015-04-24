/*

Margot Duek
Estructuras de datos
Tarea 5 
Ejercicio 3
 
 
 Adicione a la clase BinaryTree desarrollada en clases, un método que permita determinar si el
árbol es simétrico con respecto al eje vertical que lo divide por la raíz. En el programa principal
debe hacer uso del método desarrollado y demostrar que funciona.
 
 */
 
 
#include "../BinaryTree.h"
#include <iostream>
#include <string>
using namespace std;

int main(){

     
    /* Crear un árbol binario */
    BinaryTree<int> numeros;
    BinaryTree<int> numerosS;
    
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
    std::cout << " ---- preOrder ----" << std::endl;
    numeros.preOrder();
    std::cout << std::endl;


    
    
    BNode<int> * unoS = new BNode<int>(1);
    numerosS.insert(nullptr, unoS);
    
    BNode<int> * dosS = new BNode<int>(2);
    numerosS.insert(unoS, dosS);
    
    BNode<int> * tresS = new BNode<int>(3);
    numerosS.insert(unoS, tresS);
    
    BNode<int> * cuatroS = new BNode<int>(4);
    numerosS.insert(dosS, cuatroS);
    
    BNode<int> * cincoS = new BNode<int>(5);
    numerosS.insert(dosS, cincoS);
    
    BNode<int> * diezS = new BNode<int>(10);
    numerosS.insert(tresS, diezS); 
    
    BNode<int> * once = new BNode<int>(11);
    numerosS.insert(tresS, once); 
    
    
        
    /* Mostrar el árbol en preOrder */
    std::cout << " ---- preOrder ----" << std::endl;
    numerosS.preOrder();
    std::cout << std::endl;
    
    return 0;
}