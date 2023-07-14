#include<stdio.h>

int main()
{
   int vet[5] = {9, 8, 7, 6, 5};
   int ac=0, i;
   for(i=1;i<=5;i++); //remover ; e i - inicializando em 0 e < 5
   {
      ac=ac+vet[i];
   }
   printf("%d",ac);
}
