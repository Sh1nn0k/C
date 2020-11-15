#include <stdio.h>
#include <stdlib.h>

int main(void){

  int vet1[6], vet2[6], menor, maior, i, j;

  printf("Digite os valores do vetor: ");
  for(i=0; i<6; i++)
    scanf("%i",&vet1[i]);

  maior = 0;
  for(i=0; i<6; i++)
    if (vet1[i] > vet1[maior])
      maior = i;

  for(j=0; j<6;j++){
    menor = 0;
    for(i=0; i<6; i++)
        if (vet1[i] < vet1[menor])
          menor = i;
    vet2[j]= vet1[menor];

    vet1[menor] = vet1[maior];
                              
   }

  printf("\n\nOs valores do vetor, em ordem crescente, são: \n\n");
  for(i=0; i<6; i++)
    printf("%i\n",vet2[i]);

return 0;
}
