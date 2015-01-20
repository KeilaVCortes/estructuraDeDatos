/*
19/01/14
Ejercicio recursividad
Ejercicios 1 y 2
*/
#include <iostream>
#include <string>
using namespace std;

    
int euclides(int m, int n);
int vector(int arr[], int i, int n);



int main(){
    int a = 0;
    int b = 0;
    int c = 0;

    int ar[8];
    cin >> a;
    cin >> b;
    cin >> c;
    for(int i = 0; i < 8 ; i++){
        ar[i] = 1 + i;
    }

    
    cout << "el maximo comun divisor de " << a << " y " << b <<" es : " << euclides(a,b) << endl;
    cout << "la suma de los vectores es : " << vector(ar, 0, 8) << endl;

    return 0;    
}

//Ejercicio 1
//Algoritmo de Euclides
int euclides(int m , int n ){
    int r = m % n;
    if (r == 0){
        return n;
    }else{
        return euclides(n , r);
    }
    
}

//Ejercicio 2
//Suma de elementos de un vector
int vector(int arr[], int i, int n){
    if (i == n){
        return 0;
    }else{
        return arr[i] + vector(arr, (i+1), n);
    }
}
