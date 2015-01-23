/*
Margot Duek
22/01/15
Algoritmo de una funcion recursiva que haga una matriz de N x N numeros, 
en donde N puede ser el valor de cualquier número.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;


//int llenaMatriz(int matriz[nu][nu], int nu);

int main(){
    int nu;
    int matriz[nu][nu];
    
    for (int i = 0; i < nu; ++i) {
        for (int j = 0; j < nu; ++j) {
            matriz[i][j] = rand() % 5;
        }
    }
    
    cout << "De cuantos elementos quieres tu matriz?" << endl;
    cin >> nu;
    
   
    //cout << llenaMatriz(matriz, nu) << endl;
    return 0;
}

int llenaMatriz(int matriz[nu][nu], int nu){
    //int matriz[n][n];
    
    if(nu == 1){
        return matriz[nu][nu];
    }else{
        return llenaMatriz(matriz[nu*2][nu*2], nu);
    }
}

/*

void imprimeMatriz(int m[N][M])
{
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            std::cout << m[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}

int sumaMatriz(int m[N][M], int f, int c)
{
    if (f == 0 && c == 0) {
        return m[f][c];
    }
    else if (c == 0) {
        return m[f][c] + sumaMatriz(m, f-1, M-1);
    }
    else {
        return m[f][c] + sumaMatriz(m, f, c-1);
    }
}
*/