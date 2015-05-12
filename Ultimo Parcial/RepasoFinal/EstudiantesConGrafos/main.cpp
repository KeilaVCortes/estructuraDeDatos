/*
 * Repaso para el examen
 * Grafos
 * Margot Duek
 * Estructuras de datos
 
    Para un estudio sociológico en una universidad, una empresa consultora quiere
    desarrollar una aplicación que le permita establecer las relaciones entre estudiantes
    durante su vida estudiantil. La aplicación debe ser capaz de generar los siguientes
    resultados:
    • Con quiénes se ha relacionado un estudiante y qué tiempo duró cada relación
    • Qué porcentaje del tiempo ha estado acompañado y qué porcentaje del tiempo
    ha estado solo
    • Quién es el estudiante que ha tenido más relaciones
    • Quiénes son los estudiantes que no han tenido relaciones
    • Quién es el estudiante más estable en sus relaciones
    Diseñe e implemente la aplicación antes mencionada. Haga las consideraciones que
    considere necesarias


*/


#include <iostream>
#include "Graph.h"
//#include "Persona.h"
using namespace std;

int main(){
    
    Graph<string, int> mapa("Guía Roji");
    
     Vertex<string, int> * Margot = new Vertex<string, int>();
     Vertex<string, int> * Jacobo = new Vertex<string, int>();
     Vertex<string, int> * Bleier = new Vertex<string, int>();
     Vertex<string, int> * Emilio = new Vertex<string, int>();
    
    mapa.addVertex(Margot);
    mapa.addVertex(Jacobo);
    mapa.addVertex(Bleier);
    mapa.addVertex(Emilio);
    
    mapa.addEdge(Margot, Emilio, 30);
    mapa.addEdge(Emilio, Jacobo, 100);
    mapa.addEdge(Margot, Bleier, 50);
    mapa.addEdge(Bleier, Jacobo, 75);

    
     std::cout << mapa << std::endl;
    
    return 0;
}