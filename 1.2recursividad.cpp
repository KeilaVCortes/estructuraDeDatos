/*
19/01/14
Ejercicio recursividad
Ejercicio 3
*/

#include<iostream>
#include<string>
using namespace std;

#define n 5
#define m 6

int suma(int fila, int columna, int mat[n][m]);

int main(){
    int mat[n][m] = {0};
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            mat[i][j] =  5;
        }
    }
    suma(n , m , mat);
    return 0;
}    
   
    
    
    
//Ejercicio 3
//Suma de elemnetos de una matriz
int suma(int fila, int columna, int mat[n][m]){
    if(fila == 0 && columna ==0){
        return mat[fila][columna];
    }else if (fila == 0){
        return mat[fila][columna] + suma(fila-1, m-1, mat);
    }else{
        return mat[fila][columna] + suma(fila-1, columna-1, mat);
    }
}

