/*
Margot Duek
25/01/15
Algoritmo de una funcion recursiva que permita a un robot moverse.
*/

#include<iostream>
#include<string>
#include<cstdlib>
#define n 5
#define m 5

using namespace std;

void buscaCamino(int mat[n][m], int i, int j, int cont);
void imprimeMatriz(int mat[n][m]);

int main(){
    int mat[n][m];
    int cont = 1;
   
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            mat[i][j] = rand() % 1;
        }
    }
    
    imprimeMatriz(mat);
    buscaCamino(mat,0,0,cont);
    return 0;
}




void buscaCamino(int mat[n][m], int i, int j, int cont){
    if(mat[i][j] == 0 && i < n && j < n){
        mat[i][j] = 3;
        
        buscaCamino(mat, i, j+3, cont);
        buscaCamino(mat, i+1,j,cont);
    
        if(mat[n][m] == 3){
            cont++;
        }
    }
    cout << cont << endl;
}


//Funcion para imprimir matrices
//Creada por V. Cubells
void imprimeMatriz(int mat[n][m])
{
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << mat[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}