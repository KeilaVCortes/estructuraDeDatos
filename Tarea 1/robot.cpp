/*
Margot Duek
25/01/15
Algoritmo de una funcion recursiva que permita a un robot moverse.
*/

#include<iostream>
#include<string>
#define n 7
#define m 10
using namespace std;

int main(){
    int mat[n][m];
   
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            mat[i][j] = rand() % 9;
        }
    }
    
    

    return 0;
}


int ajedrez(int mat[i][j], int i, int j){
    
}