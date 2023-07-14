#include<stdio.h>

int minhaFuncao2(int x, int y)
{
   printf("%d, %d, ", x, y);
   x=7;
   y=8;
   return x+y;
   printf("A"); //Não aparece na tela, pois foi dado o comando "return" antes
}


int main()
{
   int x=4, y=2;
   int res=0;
   res = minhaFuncao2(y,x);
   printf("%d, %d, %d", x, y, res);
}
