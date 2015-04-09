#include <iostream>
#include "../Node.h"
#include "../Stack.h"
#include "../LinkedList.h"
using namespace std;

int main(){
    
        
    LinkedList<int> * N = new LinkedList<int>();
    LinkedList<int> * M = new LinkedList<int>();
    LinkedList<int> * P = new LinkedList<int>();
    Stack<char> * pila = new Stack<char>();
    
    
    string ecuacion = "";
    
    for(int i = 0; i < ecuacion.length(); ++i){
        if (ecuacion[i] == '(' || ecuacion[i] == '{' || ecuacion[i] == '[' ){
            for(int j == i; j <  ecuacion.length(); ++j){
                while(ecuacion[j] != ')' || ecuacion[j] != '}' || ecuacion[j] == ']' ){
                    pila->push(ecuacion[i]);
                }
            }
            
        }
       
    }
    
    
    int op;
    
    for(int i = 0; i <  ecuacion.length(); ++i){
        if(ecuacion[i] == "+"){
            op == 1;
        }else if(ecuacion[i] == "+"){
            op == 2;
        }
    }
    
    
    

    cin >> op;
    switch(op){
        case 1:{
            int n;
            for (int i = 0; i < longitudN; ++i){
                n = N->at(i)->getInfo();
                P->insertBack(n);
            }
            
            for (int i = 0; i < longitudM; ++i){
                n = M->at(i)->getInfo();
                if (!P->search(n)){
                    P->insertBack(n);    
                }
            }
            cout << *P << endl;
        }
        break;
        
        
        case 2:{
          for(int i = 0; i < tam; ++i){
                if(N->search(M->at(i)->getInfo())){
                    P->insertBack(M->at(i)->getInfo());  
                }
            }
            
        }
        
        break;
        
        case 3:
            cout << "bye" << endl;
        break;
        
        default:
            cout << "Pon una opcion valida" << endl;
        break;
    }
    
    
    cout << endl << *P << endl;
    
    delete M;
    delete N;
    delete P;
    
    return 0;
}

