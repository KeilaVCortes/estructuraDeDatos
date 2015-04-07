/*
Margot Duek
Ejercicios de clase
Ejercicio 4 

En un almacén se guarda mercadería en contenedores. No es posible colocar más de n
contenedores uno encima del otro y, no hay área para más de m pilas de contenedores. Cada
contenedor tiene un número y un nombre de la empresa propietaria. Elabore un programa que
permita gestionar el ingreso y salida de contenedores. Note que para retirar un contenedor es
necesario retirar los contenedores que están encima de él y colocarlos en otra pila.
*/
#include "../Stack.h"
#include "Empresa.h"
using namespace std;

int main(){
    
    
    
    LinkedList< Stack<int> * > listaPilas;
    LinkedList<Empresa> empresas;
   
    
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
    
    listaPilas.insertBack( &empresa1 );
    

    int a = 1;
    while(a != 666){
        int cantidadEmpresas = 0;
        cout << "Que quieres hacer?" << endl;
        cout << " 1.- consultar almacen\n 2.- extraer elemento\n 3.- agregar empresa\n 4.- agregar pila\n 5.- salir" << endl;
        int op;
        cin >> op;
        switch(op){
            case 1:{
                 /* Mostrar toda la estructura */
                Node< Stack<int> * > * tmp = listaPilas.first();
                
                while ( tmp != nullptr) {
                    std::cout << *(tmp->getInfo()) << std::endl;
                    
                    tmp = tmp->getNext();
                }
            }
            break;
            
            case 2:{
                int extract; 
                int num;
                string empresaa;
                Stack<int> empresaal;
                cout << "Nombra la empresa de la cual vas a extraer ";
                cin >> empresaa;
                /*
                cout << "Pila de la cual deseas extraer(Numero): " ;
                cin << num;
                */
                
                Node< Stack<int> * > * tmp = empresaa.first();
                
                while ( tmp != nullptr) {
                    std::cout << *(tmp->getInfo()) << std::endl;
                    
                    tmp = tmp->getNext();
                }
                
                cout << "Elemento a extraer: " ;
                cin >> extract;
                Stack<int> pilaTemporal;
                
                if(empresaa.top() == extract){
                    empresaa.pop();
                }else if (!empresaa.empty()){
                    pilaTemporal.push(empresaa.pop());
                }else{
                    cout << "pon un elemento existente" << endl;
                }
            } 
                
            break;
            
            case 3:{
                cout << "Agregar empresa" << endl;
                cout << "Nombre: ";
                string nombre;
                cin >> nombre;
                cout << "Numero: ";
                int num;
                cin >> num;
                
                Empresa empresa(nombre, num);
                empresas.insertBack(empresa);
                
                
            }
            break;
            
            case 4:
                cout << "bye" << endl;
                a = 666;
            break;
            
        }
    }

    
    return 0;
}