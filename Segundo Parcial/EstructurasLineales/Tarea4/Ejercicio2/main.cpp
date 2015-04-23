/*
Margot Duek
Tarea 4 
Ejercicio 2
simulacion de Token Ring
*/

#include "CircularLinkedList.h"
#include "Token.h"
#include "Node.h"

using namespace std;


bool ping(Token token, CircularLinkedList<Computadora> * red);
void recibido(Token token, CircularLinkedList<Computadora> * red);
//void ping(Computadora de, Computadora a, Computadora en, CircularLinkedList<Computadora> * red);
int main(){
    
    CircularLinkedList<Computadora> * red = new CircularLinkedList<Computadora>();
    
    Token token(79,1, "Hola");
    
    red->insertBack({6});
    red->insertBack({1}); 
    red->insertBack({9});
    red->insertBack({2});
    red->insertBack({12});
    red->insertBack({98});
    //cout << "hola" << endl;
    
    bool existe;
    //ping(1,5,1,red);
    
    existe = ping(token, red);
    if(existe){
        recibido(token, red);
    }
    
    delete red;
     
    return 0;
}

bool ping(Token token, CircularLinkedList<Computadora> * red){
    bool existe = false;
    int vueltasPosibles = 100;
    int vueltas;
    int pos =0;
    while(!existe && vueltas < vueltasPosibles){
        if((red->at(pos)->getInfo()) == token.destino){
             cout  << "ping  " << *(red->at(pos)) << "  56(84) bytes of data  " << pos << endl; 
             cout << "Mensaje recibido" << endl;
             token.mensaje = "Ahi te va de regreso";
             existe = true;
             return existe;
        }
        else{
            cout  << "ping  " << *(red->at(pos)) << "  56(84) bytes of data  " << pos << endl; 
            vueltas ++;
            pos++;
            if (pos >= red->size()){
                pos = 0;
            }
            red->at(pos)->getNext();
        }
    }
    if(vueltas >= 100){
        cout << "Mensaje perdido" << endl;
        return existe;
    }

}


void recibido(Token token, CircularLinkedList<Computadora> * red){
    Computadora temp = token.destino;
    token.destino = token.salida;
    token.salida = temp;
    bool existe = false;
    int vueltasPosibles = 100;
    int vueltas;
    int pos =0;
    while(!existe){
        if((red->at(pos)->getInfo()) == token.destino){
             cout  << "ping  " << *(red->at(pos)) << "  56(84) bytes of data  " << pos << endl; 
             cout << "Tu amigo recibio el mensaje" << endl;
             token.mensaje = "Ahi te va de regreso";
             existe = true;
             
        }
        else{
            cout  << "ping  " << *(red->at(pos)) << "  56(84) bytes of data  " << pos << endl; 
            vueltas ++;
            pos++;
            if (pos >= red->size()){
                pos = 0;
            }
            red->at(pos)->getNext();
        }
    }
    if(vueltas >= 100){
        cout << "Mensaje perdido" << endl;
    }
}

/*
void ping(Computadora de, Computadora a, Computadora en, CircularLinkedList<Computadora> * red){
    bool existe = false;
    int vueltas;
    while(en != a && vueltas > 3){
   
        cout  << "ping  " << en._ip << "  56(84) bytes of data" << *(red->at(en._ip)) << endl;  
        if(en==de){
            vueltas++;
        }
        en = *(en.getNext());
    }
    if(en==a){
        existe = true;
        cout << "Mensaje recibido" << endl;
    }

    
}
*/