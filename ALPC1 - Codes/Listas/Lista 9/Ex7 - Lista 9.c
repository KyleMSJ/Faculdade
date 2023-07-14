#include<stdio.h>
#include<locale.h>

int main()
{
    int num [8], i;

    setlocale(LC_ALL, "Portuguese");
    for(i=0;i<=7;i++)
    {
        printf("\nDigite um número (%d/8): ", i+1);
        scanf("%d", &num[i]);
    }
    for(i=0;i<=7;i++)
    {
    if (num [i] % 2 == 0)
        printf("\nNúmero na posição %d:\t %d \t Este número é par", i+1, num[i]);
    else
        printf("\nNúmero na posição %d:\t %d \t Este número é ímpar", i+1, num[i]);
    }

}
