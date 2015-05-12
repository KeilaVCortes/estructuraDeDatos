/*
 * Margot Duek
 * Pregunta 2
 * Fractal
 */


#include <iostream>
#define n 6
#define m 6
using namespace std;

void fractales(int mat[n][m], int i, int j, int nn);

int main(){
  int mat[n][m];

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      mat[i][j] = 1;
    }
  }
  for (int i = 2; i <= 3; ++i) {
    for (int j = 2; j <= 3; ++j) {
      mat[i][j] = 8;
    }
  }

  fractales(mat, 0, 0, 5);

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      cout << mat[i][j];
    }
    cout << endl;
  }

  //fractales(mat, 0, 0, 5);

  return 0;
}

void fractales(int mat[n][m], int i, int j, int nn){
  if(mat[i][j] == 8 && i < n && j < n){
      mat[i-1][j-1] = 8;
      mat[i+2][j-1] = 8;
      mat[i-1][j+2] = 8;
      mat[i+2][j+2] = 8;
      //fractales(mat, 0, 0, nn-1);
  }
  else if(mat[i][j] == 1 && i < n && j < n){
    fractales(mat, i+1, j+1, nn);
    //fractales(mat, i+1, j, nn);
  }
}
