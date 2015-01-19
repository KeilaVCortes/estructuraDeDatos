/*
19/01/14
Ejercicio recursividad
*/
#include <iostream>
#include <string>
using namespace std;

int euclides(int m, int n);
int vector(int a, int b, int c);

int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << euclides(a,b) << endl;
    cout << vector(a, b, c) << endl;
    
    
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
        return arr[i] + suma(arr, (i+1), r);
    }
}

