/*

 */

#include "BinaryTree.h"
#include <iostream>
#include <string>

using namespace std;

void preArbolin(string cadena);
void inArbolin(string cad);
BinaryTree<char> pre;
BinaryTree<char> en;
BinaryTree<char> pren;

int main(){
  string preOrden = "GEAIBMCLDFKJH";
  string enOrden = "IABEGLDCFMKHJ";
  string preNum = "2108354";


  preArbolin(preOrden);
  preArbolin(preNum);
  inArbolin(enOrden);

  /* Mostrar el árbol en preOrder */
  std::cout << " ---- preOrder ----" << std::endl;
  pre.preOrder();
  std::cout << std::endl;
  pren.preOrder();

  /* Mostrar el árbol en preOrder */
  std::cout << " ---- inOrder ----" << std::endl;
  en.inOrder();
  std::cout << std::endl;

  return 0;
}

void preArbolin(string cad){
  string cadena;
  for(int i = cad.length(); i >= 0 ; i--){
    cadena += cad[i];
  }
  for(int i = 0; i < cadena.length(); ++i){
    char j = cadena[i];
    pre.insertPre(j);
  }
}

void inArbolin(string cadena){
  for(int i = 0; i < cadena.length(); ++i){
    char j = cadena[i];
    en.insertIn(j);
  }
}
