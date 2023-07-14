#include <stdio.h>
#include <stdlib.h>
/*Fa�a uma adapta��o na fun��o criada no item acima para que o tri�ngulo seja desenhado ao
contr�rio. Observa��o: n�o altere o n�mero de par�metros que a fun��o recebe.*/

void triangulo(int n)
{
int i;

if(n==0)
return;
triangulo(n-1); // a adapta��o: chama a fun��o antes.
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
