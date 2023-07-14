#include <stdio.h>
#include <stdlib.h>
/*Faça uma adaptação na função criada no item acima para que o triângulo seja desenhado ao
contrário. Observação: não altere o número de parâmetros que a função recebe.*/

void triangulo(int n)
{
int i;

if(n==0)
return;
triangulo(n-1); // a adaptação: chama a função antes.
for(i=0; i<n; i++)
printf("*");
printf("\n");
}

int main()
{
int n;
scanf("%d",&n);
triangulo(n);
}
