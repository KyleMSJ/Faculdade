#include<stdio.h>

int minhaFuncao(int x, int y)
{
   printf("%d, %d, ", x, y); // Imprime na tela os valores de x e y da função main antes de dar um outro valor para essas variáveis (2,4)
   x=1;
   y=5;
   return x+y; // retorna 6
}


int main()
{
   int x=4, y=2;
   int res=0;
   res = minhaFuncao(y,x); /// Começa pelo y!
   printf("%d, %d, %d", x, y, res);
}
