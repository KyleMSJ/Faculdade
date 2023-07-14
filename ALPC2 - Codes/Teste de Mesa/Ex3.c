#include<stdio.h>

void funcao1(float x)
{
   float n1 = 0.5;
   static float n2=0.5; // Armazena o resultado até o fim do programa
   n1+=x;
   n2+=x;
   printf("%.1f %.1f ",n1,n2);
}

int main()
{
   funcao1(0.5);
   funcao1(0.5);
}
