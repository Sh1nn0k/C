#include<stdlib.h>
#include<stdio.h>


int main(void) {
  int i, j, v[3];
  int mat[2][3], mat2[2][3], matfinal[2][3];

  for (i=0;i<2;i++){

    for (j=0;j<3;j++){
      printf("Matriz 1: Digite o valor da posição linha %i, coluna %i: ", i+1, j+1);
      scanf("%i", &mat[i][j]);

    }
    
  }

  printf("\n\n");

    for (i=0;i<2;i++){

      for (j=0;j<3;j++){
        printf("Matriz 2: Digite o valor da posição linha %i, coluna %i: ", i+1, j+1);
        scanf("%i", &mat2[i][j]);

    }
  }

  for (i=0;i<2;i++){

    for (j=0;j<3;j++){
       
      matfinal[i][j] = mat[i][j] + mat2[i][j];

    }
  }

  printf("\n\nSoma matricial: \n");
  for (i=0;i<2;i++){
    
    for (j=0;j<1;j++){
      printf("[%i, %i, %i]\n",matfinal[i][j], matfinal[i][j+1], matfinal[i][j+2]);

      }
    }
  return 0;
  }
