/*

Memoria dinamica

* --> operacion de indireccion (contenido de memoria)
& --> operador de referencia u operador de direccion (direccion de memoria)



*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    int n = 5;
    int * ptr = &n;
    
    cout << "n = " << n << endl;
    cout << "&n = " << &n << endl;
    cout << "ptr = " << ptr << endl;
    cout << "&ptr = " << &ptr << endl;
    cout << "*ptr = " << *ptr << endl;
    
    
    //memoria dinamica en arreglos:
    cout <<  "Cuantoes elementos quieres? " << endl;
    int x;
    cin >> x;
    int * numeros = new int[x];
    
    //llenamos el arreglo de manera tradicional
    for(int i  = 0; i < x; ++i){
        numeros[i] = i*i;
    }
    
    //recuperamos los valores con aritmetica de apuntadores
    for(int j = 0; j < x; ++j){
        cout << *(numeros+j) << endl;
    }
    
    //Hacer mas grande el arreglo:
    cout << "de que tamaño quieres que sea ahora tu arreglo? " << endl;
    cin >> x;
    numeros = (int *)realloc
    
    delete [] numeros;
    
    
    //
    
    return 0;
}