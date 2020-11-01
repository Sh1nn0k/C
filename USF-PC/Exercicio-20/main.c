#include <stdio.h>
#include <math.h>

int main(void) {
  int x1, y1, x2, y2;
  float d;

  printf("Cálculo da distância entre dois pontos no eixo cartesiano.\n\n");
  printf("Para o primeiro ponto, digite as coordenadas abaixo:\n\n");
  printf("X: ");
  scanf("%d", &x1);
  printf("Y: ");
  scanf("%d", &y1);

  printf("\nPara o segundo ponto, digite as coordenadas abaixo:\n\n");
  printf("X: ");
  scanf("%d", &x2);
  printf("Y: ");
  scanf("%d", &y2);

  d = sqrt(pow(x2-x1,2)+ pow(y2-y1,2));

  printf("\nA distância entre os dois pontos é: %f", d);

  return 0;
}