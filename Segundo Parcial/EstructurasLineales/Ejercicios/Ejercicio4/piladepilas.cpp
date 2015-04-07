/*
Margot Duek
Ejercicios de clase
Ejercicio 4 
*/
#include "../Stack.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
    
    
    
    Stack< Stack<int> *> pila1;
    Stack< Stack<int> *> pila2;
    
    Stack<int> empresa1;
    Stack<int> empresa2;
    Stack<int> empresa3;
    Stack<int> empresa4;
    
    empresa1.push(11);
    empresa1.push(12);
    empresa2.push(21);
    empresa2.push(22);
    empresa3.push(31);
    empresa3.push(32);
    empresa4.push(41);
    empresa4.push(42);
    
    pila1.push ( &empresa1 );
    pila1.push ( &empresa2 );
    pila1.push ( &empresa3 );
    pila1.push ( &empresa4 );
    
    Stack<int> empresa21;
    Stack<int> empresa22;
    Stack<int> empresa23;

    empresa21.push(211);
    empresa21.push(212);
    empresa22.push(221);
    empresa22.push(222);
    empresa23.push(231);
    empresa23.push(232);

    
    pila2.push ( &empresa21 );
    pila2.push ( &empresa22 );
    pila2.push ( &empresa23 );



    int a = 1;
    while(a != 666){
        cout << "Que quieres hacer?" << endl;
        cout << " 1.- consultar almacen\n 2.- extraer elemento\n 3.- salir" << endl;
        int op;
        cin >> op;
        switch(op){
            case 1:{
                 /* Mostrar toda la estructura */
                Node< Stack<int> * > * tmp = pila1.top();
                
                while ( tmp != nullptr) {
                    std::cout << *(tmp->getInfo()) << std::endl;
                    
                    tmp = tmp->getNext();
                }
                
                Node< Stack<int> * > * tmp2 = pila2.top();
                
                while ( tmp2 != nullptr) {
                    std::cout << *(tmp2->getInfo()) << std::endl;
                    
                    tmp2 = tmp2->getNext();
                }
                
            }
            break;
            
            case 2:{
                int extract; 
                int lista;
                string empresaa;
                cout << "Pila de la cual deseas extraer: " ;
                cin << lista;
                cout << "Elemento a extraer: " ;
                cin >> extract;
                cout << "Nombra la empresa de la cual vas a extraer ";
                cin >> empresaa;
                
                if(lista == 1){
                    
                }else if (lista == 2){
                    
                }else{
                    cout << "pon una lista valida" << endl;
                }
                
            } 
                
            break;
            
            case 3:
                cout << "bye" << endl;
                a = 666;
            break;
            
        }
    }

    
    return 0;
}