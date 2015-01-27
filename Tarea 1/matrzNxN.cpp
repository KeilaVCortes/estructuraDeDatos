/*
Margot Duek
22/01/15
Algoritmo de una funcion recursiva que haga una matriz de N x N numeros, 
en donde N puede ser el valor de cualquier número.
*/

#include <iostream>
#include <string>
#include <stdlib.h>


#define n 5


using namespace std;

void imprimeMatriz(int m[n][n]);
int llenaMatriz(int matriz[n][n], int num);


int main(){
   
    
    int matriz[n][n];
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matriz[i][j] = rand() % 5;
        }
    }
    
   
    llenaMatriz(matriz, 0);
    imprimeMatriz(matriz);
    return 0;
}


int llenaMatriz(int mat[n][n], int num){
   

}


//Funcion para imprimir matrices
//Creada por V. Cubells
void imprimeMatriz(int m[n][n])
{
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << m[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}