#include <stdio.h>
#include <stdlib.h>
/*Crie uma fun��o recursiva que receba como entrada um �nico valor inteiro n e �desenhe� na
tela (utilizando *s) um tri�ngulo de lado n*/

void triangulo(int n)
{
int i;
if(n==0) //Crit�rio de parada
return;
for(i=0; i<n; i++)
printf("*"); //Imprime na tela o n�mero de asteriscos
printf("\n");
triangulo(n-1);//Retorna a fun��o com um asterisco a menos
}

int main()
{
int n;
scanf("%d",&n); //L� um valor correspondente ao lado do tri�ngulo
triangulo(n);
}
