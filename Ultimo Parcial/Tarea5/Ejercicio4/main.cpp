/*

Margot Duek
Estructuras de datos
Tarea 5 
Ejercicio 4
 



Desarrolle una aplicación que permita crear un árbol genealógico de una familia y que incluya
las siguientes funcionalidades:
a) Adicionar nuevos miembros a la jerarquía, indicando su padre
b) Visualizar todos los descendientes de una persona dada
c) Visualizar los hermanos y primos hermanos de una persona dada
d) Visualizar todos los ancestros de una persona dada
e) Establecer un miembro del árbol como fallecido así como su fecha de fallecimiento
f) Visualizar todos los miembros de la familia que fallecieron antes de una fecha
determinada
g) Visualizar todos los miembros familiares que aún se encuentran vivos

*/   

 
#include "../BinaryTree.h"
#include <iostream>
#include <string>
#include "Persona.h"
using namespace std;

int main(){
    
    
    /* Crear un árbol binario */
    BinaryTree<Persona> familiaRdz;
    
    /* Crear personas*/
    Persona abuelito("Moises","Duek", 80, 1925, 2013);
    Persona papa("Zury","Duek", 50, 1955, 0);
    Persona tio("Salo" ,"Duek", 40, 1965, 0);
    Persona yo("Margot","Duek", 20, 1985, 0);
    Persona hermana("Bertha","Duek", 25, 1980, 0);

    
    /* Insertar nodos */
    
    BNode<Persona> * uno = new BNode<Persona>(abuelito);
    familiaRdz.insert(nullptr, uno);

    BNode<Persona> * dos = new BNode<Persona>(papa);
    familiaRdz.insert(uno, dos);
    
    
    BNode<Persona> * tres = new BNode<Persona>(tio);
    familiaRdz.insert(uno, tres);
    
    BNode<Persona> * cuatro = new BNode<Persona>(yo);
    familiaRdz.insert(dos, cuatro);
    
    BNode<Persona> * cinco = new BNode<Persona>(hermana);
    familiaRdz.insert(dos, cinco);
    

      /* Mostrar el árbol en preOrder */
    std::cout << " ---- Su familia Sr Rodriguez! ----" << std::endl;
    familiaRdz.preOrder();
    std::cout << std::endl;
     
    
    
    
    return 0;
}