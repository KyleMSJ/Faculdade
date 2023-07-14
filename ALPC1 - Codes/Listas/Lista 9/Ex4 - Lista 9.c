#include<stdio.h>
#include<locale.h>

int main()
{
    float num [11], soma = 0;
    int i;
    setlocale(LC_ALL, "Portuguese");
    for(i=1;i<=10;i++)
    {
        printf("\nDigite um número %d: ", i);
        scanf("%f", &num[i]);
    }
    for(i=1;i<=10;i++)
    {
        soma = soma + num[i];
    }
    printf("\n\t Soma:%.2f", soma);
}
