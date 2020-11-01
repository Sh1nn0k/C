#include<stdio.h>
#include<stdlib.h>

int main(void){

int a,b,c;

printf("Verificação de tipos de triângulos, baseado nos lados A, B e C\n\n");
printf("Digite o valor do lado A:\n ");
scanf("%i",&a);
printf("Digite o valor do lado B:\n ");
scanf("%i",&b);
printf("Digite o valor do lado C:\n ");
scanf("%i",&c);

if (b-c<a && a<b+c && a-c<b && b<a+c && a-b<c && c<a+b){
  
  if (a==b && a==c && b==c)
    printf("O triângulo é equilátero");
  else
    if (a==b || a==c || b==c)
      printf("O triângulo é isósceles");
    else
      if (a!=b && a!=c && b!=c)
        printf("O triângulo é escaleno");

}
else
  printf("Os valores inseridos não compõem um triângulo");

return 0;
}
