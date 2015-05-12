/*
 * Margot Duek
 * Pregunta 2
 * Fractal
 */


#include <iostream>
#define n 6
#define m 6

int main(){
  int mat[n][m];

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      mat[i][j] = 0;
    }
  }

  return 0;
}




void buscaCamino2(int mat[n][m], int i, int j){
    if(mat[i][j] == 0 && i < n && j < n){
        mat[i][j] = 3;
        buscaCamino2(mat, i, j+1);
        buscaCamino2(mat, i+1, j);
    }
}
