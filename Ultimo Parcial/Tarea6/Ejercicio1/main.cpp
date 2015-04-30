/*
 * Margot Duek
 * Estructuras de datos
 * Tarea 6
 * Ejercicio 1
 
 Una empresa de gestión de contenedores en un puerto quiere desarrollar una aplicación
que le permita conocer en todo momento la distribución de sus contenedores en el
almacén. Para lo anterior se conoce que:
• No es posible colocar más de n contenedores uno encima del otro y, no hay área
para más de m pilas de contenedores.
• Cada contenedor tiene un número y un nombre de la empresa propietaria.
• Cada contenedor puede contener diferentes tipos de productos, donde de cada
producto se conoce su descripción, cantidad y precio unitario.
• A medida que van llegando los contenedores, se van apilando comenzando por la
primera pila. Si esta llega a su tope, se pasa a ingresar contenedores a la segunda
pila y así sucesivamente hasta que las m pilas se encuentren llenas con n
contenedores cada una, en cuyo caso no se aceptarán más contenedores.
Elabore un programa que permita gestionar el ingreso de contenedores al almacén
utilizando las estructuras y algoritmos de la STL.
Adicione una funcionalidad que permita conocer el costo total de: un contenedor, una pila
completa de contenedores y de todo el almacén, a partir de un reporte donde se visualice
el contenido de cada contenedor. Por ejemplo, el resultado debe ser algo similar a lo
siguiente, suponiendo que se tienen 2 pilas de contenedores:

Pila 1
Contenedor No 1
 Zapatos 5 $5.00
 Pantalón 7 $100.00
 Costo del contenedor: $725.00  

Contenedor No 2
 Blusa 10 $80.00
 Zapatos 10 $187.00
 Bufanda 20 $5.5
 Costo del contenedor: $ 2780
Costo de la pila: $3505.00

Pila 2
Contenedor No 1
 Gorra 5 $10.00
 Cinturón 7 $50.00
 Costo del contenedor: $400.00
Costo de la pila: $400.00

Costo del almacén: $3905.00 

 */
#include <iostream>
#include <string>
#include "Contenedor.h"
#include <stack>  
using namespace std;
 
int main(){
    
    stack<Contenedor> pila1;
    stack<Contenedor> pila2;
    stack<Contenedor> pila3;
    int hilee = 0;
    cout << "Contenedores Plus les da la boienvanida! " << endl;
    cout << "Le recordamos que no puede meter mas de 20 contenedores en una pila y lamentablemente no tenemos espacio para mas de 3 pilas" << endl; 
    
    while(hilee != 666){
       
        cout << "Elija una opcion: \n 1.- Dar de alta un contenedor \n 2.- Consultar pila \n 3.- Consultar almacen \n 4.- salir" << endl;
        int op;
        cin >> op;
        switch(op){
            case 1:{
                cout << "Nombre del contenedor" << endl;
                string nombre;
                cin >> nombre;
                cout << "Id del contenedor" << endl;
                int id;
                cin >> id;
                cout << "cuantos articulos deseas meter en tu contenedor?" << endl;
                int cantidad;
                cin >> cantidad;
                Contenedor contenedor(nombre, 0, id);
                for(int i = 0; i < cantidad; ++i){
                    cout << "Nombre de la prenda" << endl;
                    string nombreP;
                    cin >> nombreP;
                    cout << "Cantidad de articulas de este tipo" << endl;
                    int cant;
                    cin >> cant;
                    cout << "Costo por unidad" << endl;
                    double costo;
                    cin >> costo;
                    cout << "descripcion" << endl;
                    string descripcion;
                    cin >> descripcion;
                    Prenda prenda(nombreP, costo, cant, descripcion);
                    contenedor.agregarPrenda(prenda);
                }
                cout << contenedor.getCosto() << endl;
                double x;
                x = contenedor.getCosto();
                contenedor.setCosto(x);
                if(pila1.size() < 20){
                    pila1.push(contenedor);
                }else if(pila1.size() > 20 && pila2.size() < 20 ){
                    pila2.push(contenedor);
                }else if( pila2.size() > 20 && pila3.size() < 20 ){
                    pila3.push(contenedor);
                }else{
                    cout << "ya no puedes meter mas contenedores" << endl;
                }
            } 
            break;
            
            case 2:{
                cout << "que pila deseas ver?\n 1, 2 o 3" << endl;
                int opi;
                cin >> opi;
                if( opi == 1){
                    while( !pila1.empty()){
                        cout << pila1.top() << endl;
                        pila1.top().imprimeLista();
                        pila1.pop();
                    }
                    
                }else if (opi == 2){
                   while( !pila2.empty()){
                        cout << pila2.top() << endl;    
                        pila2.pop();
                    }
                }else if (opi == 3){
                   while( !pila3.empty()){
                        cout << pila3.top() << endl;    
                        pila3.pop();
                    }
                }else{
                    cout << "pon una opcion existente" << endl;
                }
            }
            break;
            
            case 3:
       
                while( !pila1.empty()){
                    cout << pila1.top() << endl;   
                    for(int i = 0; i < pila1.top().getSizeLista() ; ++i){
                        pila1.top().imprimeLista();
                    }
                    pila1.pop();
                }
    
               while( !pila2.empty()){
                    cout << pila2.top() << endl;    
                    pila2.pop();
                }
    
               while( !pila3.empty()){
                    cout << pila3.top() << endl;    
                    pila3.pop();
                }
            break;
            
            case 4:
                cout << "bye" << endl;
                hilee = 666;
            break;
            
            default:
                cout << "Pon una opcion correcta" << endl;
            break;
        }
    }
    
    return 0;
}