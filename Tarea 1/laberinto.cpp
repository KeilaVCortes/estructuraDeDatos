/*
Margot Duek
25/01/15
Algoritmo de una funcion recursiva que permita salir de un laberinto en una matriz 
de N x N, donde N puede ser cualquier número.
*/

#include<iostream>
#include<string>
#include<cstdlib>
#define n 6
#define m 7
using namespace std;

void imprimeMatriz(int mat[n][m]);
int buscaCamino(int mat[n][m], int i, int j);


int main(){
   int mat[n][m];
   
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            mat[i][j] = rand() % 9;
            if(mat[i][j] < 7){
                mat[i][j] = 0;    
            }else{
                mat[i][j] = 1;
            }
            
        }
    }
    
    imprimeMatriz(mat);
    buscaCamino(mat, 0,0);
    imprimeMatriz(mat);
    
    return 0;
}



//Funcion para imprimir matrices
//Creada por V. Cubells
void imprimeMatriz(int mat[n][m]){
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << mat[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    cout << endl;
}


int buscaCamino(int mat[n][m], int i, int j){
    
    if(i < n && j < m){
        if(mat[i][j] == 0){
            mat[i][j] = 3;
            return buscaCamino(mat, i+1, j);
        }else if(mat[i][j] == 1){
            if(mat[i-1][j+1] == 0){
                return buscaCamino(mat, i, j+1);
            }else{
                return buscaCamino(mat,0,0);
            }
        }
    }else if(i < n){
        return buscaCamino(mat, 0, j);
    }
    
    
    
}