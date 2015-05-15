#include "Libro.h"
#include <iostream>
#include <string>
#include "LinkedList.h"
#include "OrdenamientoGenerico.h"

using namespace std;

int acomoda(int N, int M, int K);
void encuentra(int N, int M, int K, int P);
LinkedList<Libro> * libros = new LinkedList<Libro>();


int main(){


  Libro librosA[100];


  /*
   * Importante
   * Ingresar los datos ordenadamente!!!
   */


  Libro libro1("A", 50, 3);
  Libro libro2("B", 20, 5);
  Libro libro3("C", 58, 5);
  Libro libro4("D", 98, 7);
  Libro libro5("E", 73, 8);
  Libro libro6("A", 50, 8);
  Libro libro7("B", 20, 9);
  Libro libro8("C", 58, 10);
  Libro libro9("D", 98, 14);
  Libro libro10("E", 73, 20);
/*
  librosA[0] = libro1;
  librosA[1] = libro2;
  librosA[2] = libro3;
  librosA[3] = libro4;
  librosA[4] = libro5;
  librosA[5] = libro6;
  librosA[6] = libro7;
  librosA[7] = libro8;
  librosA[8] = libro9;
  librosA[9] = libro10;

  Ordenamiento<Libro>::seleccion(librosA,10, [](Libro a, Libro b){ if (a.getAltura() > b.getAltura()) return true; return false;  }, Ordenamiento<Libro>::burbuja);
*/
  libros->insertBack(libro1);
  libros->insertBack(libro2);
  libros->insertBack(libro3);
  libros->insertBack(libro4);
  libros->insertBack(libro5);
  libros->insertBack(libro6);
  libros->insertBack(libro7);
  libros->insertBack(libro8);
  libros->insertBack(libro9);
  libros->insertBack(libro10);

  cout << "Nivel de prolijidad: " << acomoda(3,10,4) << endl;
  encuentra(3,10,4,3);
  encuentra(3,10,4,9);

}

/*
void encuentra(int N, int M, int K, int P){
  bool registrado = false;
  for (int i = 0; i < libros->size(); ++i){
     if(libros->at(i)->getInfo.getPos == P){
       registrado = true;
       cout << libros->at(i)->getInfo().getNombre() << libros->at(i)->getInfo().getPaginas() << libros->at(i)->getInfo().getAltura();
     }
 }
 if(!registrado){
     cout << "no existe en esa posicion" << endl;
 }

}
*/


int acomoda(int N, int M, int K){
  int prolijidad = 0;
  string repizas = "";
  int cont = 0;
  for(int i = 0; i < K; ++i){
    if(cont >= M){
      break;
    }
    cont ++;
    repizas += libros->at(i)->getInfo().getNombre() + "  ";
    if(i+1 >= K){
      break;
    }
    prolijidad += (libros->at(i+1)->getInfo().getAltura() - libros->at(i)->getInfo().getAltura());
    //cout << prolijidad;

  }
  repizas+= "\n";

  for(int i = K; i < K*2 ; ++i ){
    if(cont >= M){
      break;
    }
    repizas += libros->at(i)->getInfo().getNombre() + "  ";
    cont ++;
    if(i+1 >= K*2 || i+1 >= M){
      break;
    }
    prolijidad += (libros->at(i+1)->getInfo().getAltura() - libros->at(i)->getInfo().getAltura());

  }
  repizas+= "\n";

  for(int i = K*2; i < K*3 ; ++i ){
    if(cont >= M){
      break;
    }
    repizas += libros->at(i)->getInfo().getNombre() + "  ";
    cont ++;
    if(i+1 >= K*3 || i+1 >= M){
      break;
    }
    prolijidad += (libros->at(i+1)->getInfo().getAltura() - libros->at(i)->getInfo().getAltura());

  }

  for(int i = K*3; i < K*4; ++i){
    if(cont >= M){
      break;
    }
    repizas += libros->at(i)->getInfo().getNombre() + "  ";
    cont ++;
    if(i+1 >= K*4 || i+1 >= M){
      break;
    }
    prolijidad += (libros->at(i+1)->getInfo().getAltura() - libros->at(i)->getInfo().getAltura());

  }
  repizas+= "\n";

  for(int i = K*4; i < K*5 ; ++i ){
    if(cont >= M){
      break;
    }
    repizas += libros->at(i)->getInfo().getNombre() + "  ";
    cont ++;
    if(i+1 >= K*5 || i+1 >= M){
      break;
    }
    prolijidad += (libros->at(i+1)->getInfo().getAltura() - libros->at(i)->getInfo().getAltura());

  }
  repizas+= "\n";

  for(int i = K*6; i < K*7 ; ++i ){
    if(cont >= M){
      break;
    }
    repizas += libros->at(i)->getInfo().getNombre() + "  ";
    cont ++;
    if(i+1 >= K*6 || i+1 >= M){
      break;
    }
    prolijidad += (libros->at(i+1)->getInfo().getAltura() - libros->at(i)->getInfo().getAltura());

  }


  for(int i = K; i < K*27; ++i ){
    if(cont >= M){
      break;
    }
    repizas += libros->at(i)->getInfo().getNombre() + "  ";
    cont ++;
    if(i+1 >= K*7 || i+1 >= M){
      break;
    }
    prolijidad += (libros->at(i+1)->getInfo().getAltura() - libros->at(i)->getInfo().getAltura());

  }
  repizas+= "\n";

  for(int i = K*8; i < K*3 ; ++i ){
    if(cont >= M){
      break;
    }
    repizas += libros->at(i)->getInfo().getNombre() + "  ";
    cont ++;
    if(i+1 >= K*8 || i+1 >= M){
      break;
    }
    prolijidad += (libros->at(i+1)->getInfo().getAltura() - libros->at(i)->getInfo().getAltura());

  }

  for(int i = K*9; i < K*4; ++i){
    if(cont >= M){
      break;
    }
    repizas += libros->at(i)->getInfo().getNombre() + "  ";
    cont ++;
    if(i+1 >= K*9 || i+1 >= M){
      break;
    }
    prolijidad += (libros->at(i+1)->getInfo().getAltura() - libros->at(i)->getInfo().getAltura());

  }
  repizas+= "\n";

  for(int i = K*10; i < K*5 ; ++i ){
    if(cont >= M){
      break;
    }
    repizas += libros->at(i)->getInfo().getNombre() + "  ";
    cont ++;
    if(i+1 >= K*10 || i+1 >= M){
      break;
    }
    prolijidad += (libros->at(i+1)->getInfo().getAltura() - libros->at(i)->getInfo().getAltura());

  }
  repizas+= "\n";

  for(int i = K*11; i < K*7 ; ++i ){
    if(cont >= M){
      break;
    }
    repizas += libros->at(i)->getInfo().getNombre() + "  ";
    cont ++;
    if(i+1 >= K*12 || i+1 >= M){
      break;
    }
    prolijidad += (libros->at(i+1)->getInfo().getAltura() - libros->at(i)->getInfo().getAltura());

  }
  cout << repizas << endl;;

  return prolijidad;
}
