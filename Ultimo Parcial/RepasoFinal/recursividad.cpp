/*
 * Repaso examen
 * Recursividad
 * Algoritmo de Euclides
 */

#include <iostream>
using namespace std;


int euclides(int a, int b);
int main (){
  cout << euclides(848,656)  << endl;
  
  return 0;
}

int euclides(int a, int b){
  if(a%b == 0){
    return b;
  }else{
    euclides(a, (a%b));
  }
}
