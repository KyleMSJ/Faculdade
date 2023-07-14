#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    printf("os cinco numeros que antecedem o escolhido sao: %1.d\n", num - 5, num - 4, num - 3, num - 2, num - 1);
}
