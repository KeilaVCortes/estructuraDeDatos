#include "Libro.h"
#include <iostream>
#include <string>
#include "LinkedList.h"

using namespace std;

int acomoda(int N, int M, int K);
LinkedList<Libro> * libros = new LinkedList<Libro>();


int main(){



  /*
   * Importante
   * Ingresar los datos ordenadamente!!!
   */

   //Ordenamiento<Libro>::ordenar(libros,3, [](Libro a, Libro b){ if (a.getanio() > b.getanio()) return true; return false;  }, Ordenamiento<Libro>::burbuja);

  Libro libro1("A", 50, 3);
  libros->insertBack(libro1);
  Libro libro2("B", 20, 5);
  libros->insertBack(libro2);
  Libro libro3("C", 58, 5);
  libros->insertBack(libro3);
  Libro libro4("D", 98, 7);
  libros->insertBack(libro4);
  Libro libro5("E", 73, 8);
  libros->insertBack(libro5);
  Libro libro6("A", 50, 8);
  libros->insertBack(libro6);
  Libro libro7("B", 20, 9);
  libros->insertBack(libro7);
  Libro libro8("C", 58, 10);
  libros->insertBack(libro8);
  Libro libro9("D", 98, 14);
  libros->insertBack(libro9);
  Libro libro10("E", 73, 20);
  libros->insertBack(libro10);


  cout << "Nivel de prolijidad: " << acomoda(3,10,4) << endl;

}

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
