#include <stdio.h>
#include <stdlib.h>

void funcao1()
{
   x=7; // vari�vel n�o declarada na fun��o "funcao1"
}

int main()
{
   int x=5;
   funcao1();
   printf("%d",x);
}
