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
#define N 5
#define M 5

using namespace std;

void imprimeMatriz(int m[][M]);
int llenaMatriz(int matriz[][n], int num);


int main(){
    int nu ;

    
    
    cout << "De cuantos elementos quieres tu matriz?" << endl;
    cin >> nu;
    
    int matriz[nu][nu];
    
    for (int i = 0; i < nu; ++i) {
        for (int j = 0; j < nu; ++j) {
            matriz[i][j] = rand() % 5;
        }
    }
    
   
    cout << llenaMatriz(matriz, nu) << endl;
    imprimeMatriz(matriz);
    return 0;
}


int llenaMatriz(int mat[][n], int num){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == num || j == num){
                mat[i][j] = num;
            }else{
                return llenaMatriz(mat, num+1);
            }
        }
    }
}


//Funcion para imprimir matrices
//Creada por V. Cubells
void imprimeMatriz(int m[][M])
{
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            std::cout << m[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}