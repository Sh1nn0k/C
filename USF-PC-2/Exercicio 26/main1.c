#include <stdlib.h>
#include <stdio.h>


int main(void) {

  int i, j, v[3];
  int mat[2][3], mat2[3][2], matfinal[2][2];

  for (i=0;i<2;i++){

    for (j=0;j<3;j++){
      printf("Matriz 1: Digite o valor da posição linha %i, coluna %i: ", i+1, j+1);
      scanf("%i", &mat[i][j]);

    }
  }

  printf("\n\n");

    for (i=0;i<3;i++){

      for (j=0;j<2;j++){
        printf("Matriz 2: Digite o valor da posição linha %i, coluna %i: ", i+1, j+1);
        scanf("%i", &mat2[i][j]);

    }
  }

  for (i=0;i<1;i++){

    for (j=0;j<1;j++){
       
      matfinal[i][j] = ((mat[i][j] * mat2[i][j]) + (mat[i][j+1] * mat2[i+1][j]) + (mat[i][j+2] * mat2[i+2][j]));
    }
    for (j=1;j<2;j++){
       
      matfinal[i][j] = ((mat[i][j-1] * mat2[i][j]) + (mat[i][j] * mat2[i+1][j]) + (mat[i][j+1] * mat2[i+2][j]));
  }
}


  for (i=1;i<2;i++){

    for (j=0;j<1;j++){
       
      matfinal[i][j] = ((mat[i][j] * mat2[i-1][j]) + (mat[i][j+1] * mat2[i][j]) + (mat[i][j+2] * mat2[i+1][j]));

    }
    for (j=1;j<2;j++){
       
      matfinal[i][j] = ((mat[i][j-1] * mat2[i-1][j]) + (mat[i][j] * mat2[i][j]) + (mat[i][j+1] * mat2[i+1][j]));
  }
}

  printf("\n\nMultiplicação matricial: \n");
  for (i=0;i<2;i++){
    
    for (j=0;j<1;j++){
      printf("[%i, %i]\n",matfinal[i][j], matfinal[i][j+1]);

      }
    }
  return 0;
  }
