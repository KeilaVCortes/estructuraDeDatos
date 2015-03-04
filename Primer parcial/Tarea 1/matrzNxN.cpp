/*
Margot Duek
22/01/15
Algoritmo de una funcion recursiva que haga una matriz de N x N numeros, 
en donde N puede ser el valor de cualquier número.
*/

#include <iostream>
#include <string>
#include <stdlib.h>
#include<math.h>


#define n 7


using namespace std;

void imprimeMatriz(int m[n][n]);
int llenaMatriz(int matriz[n][n], int tam, int num, int i, int j);


int main(){
   
    
    int matriz[n][n];
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matriz[i][j] = rand() % 5;
        }
    }
    
   
    llenaMatriz(matriz, n, 0, 0,0);
    imprimeMatriz(matriz);
    return 0;
}


int llenaMatriz(int mat[n][n], int tam, int num, int i, int j){
   if(j <= i && i < tam){
       mat[j][i] = pow(2,j);
       return llenaMatriz(mat, tam, num, i+1, j );
   } else if(j > i && i < tam){
       mat[j][i] = pow(2,i);
       return llenaMatriz(mat, tam, num, i+1, j);
   }else if(j < tam){
       return llenaMatriz(mat, tam, num, 0, j+1);
   }else{
       cout << "camara" << endl;
   }

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