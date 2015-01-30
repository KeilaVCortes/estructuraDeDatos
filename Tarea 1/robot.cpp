/*
Margot Duek
25/01/15
Algoritmo de una funcion recursiva que permita a un robot moverse.
*/

#include<iostream>
#include<string>
#include<cstdlib>
#define n 7
#define m 10

using namespace std;

void buscaCamino(int mat[n][m], int i, int j, int cont);
void imprimeMatriz(int mat[n][m]);

int main(){
    int mat[n][m];
   
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            mat[i][j] = rand() % 9;
        }
    }
    
    buscaCamino(mat,0,0,1);
    

    return 0;
}


int ajedrez(int mat[n][m], int i, int j, int cont){
    if(i < n || j < m ){
        return(mat, i+3, j+2,cont+1);
        cout << cont;
    }
}

void buscaCamino(int mat[n][m], int i, int j, int cont){
    if(mat[i][j] == 0 && i < n && j < n){
        mat[i][j] = 3;
        if(mat[n-1][m-1] == 3){
            cont++;
        }
        buscaCamino(mat, i, j+3, cont);
        buscaCamino(mat, i+1,2,cont);
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