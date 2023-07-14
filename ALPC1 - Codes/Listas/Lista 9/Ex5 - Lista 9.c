#include<stdio.h>
#include<locale.h>

int main()
{
    float num [9],media, soma = 0;
    int i;
    setlocale(LC_ALL, "Portuguese");
    for(i=1;i<=8;i++)
    {
        printf("\nDigite um número (%d/8): ", i);
        scanf("%f", &num[i]);
    }
    for(i=1;i<=8;i++)
    {
        soma = soma + num[i];
    }
    printf("\n\t Soma: %.2f", soma);
    media = soma / 8;
    printf("\n\t Média: %.2f", media);
}
