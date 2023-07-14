#include <stdio.h>
#include <stdlib.h>
/*Crie uma função recursiva que receba como entrada um único valor inteiro n e “desenhe” na
tela (utilizando *s) um triângulo de lado n*/

void triangulo(int n)
{
int i;
if(n==0) //Critério de parada
return;
for(i=0; i<n; i++)
printf("*"); //Imprime na tela o número de asteriscos
printf("\n");
triangulo(n-1);//Retorna a função com um asterisco a menos
}

int main()
{
int n;
scanf("%d",&n); //Lê um valor correspondente ao lado do triângulo
triangulo(n);
}
