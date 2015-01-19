/*
19/01/14
Ejercicio recursividad
*/
#include <iostream>
#include <string>
using namespace std;

int euclides(int m, int n);
int vector(int arr[], int i, int n);
int suma(int fila, int columna, int mat[m][n]);

int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    
    int ar[8];
    int matrix[][];
    cin >> a;
    cin >> b;
    cin >> c;
    for(int i = 0; i < 8 ; i++){
        ar[i] = 1 + i;
    }
    cout << euclides(a,b) << endl;
    cout << vector(ar, 0, 8) << endl;
    cout << suma(5,5,matrix) << endl;
    
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

//Ejercicio 3
//Suma de elemnetos de una matriz
int suma(int fila, int columna, int mat[m][n]){
    if(fila == 0 && columna ==0){
        return mat[fila][columna];
    }else if (fila == 0){
        return mat[fila][columna] + suma(mat,fila-1, m-1);
    }else{
        return mat[fila][columna] + suma(mat, fila-1, columna-1);
    }
}