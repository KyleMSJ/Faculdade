#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite o número: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("Número par!");
    else
        printf("Número ímpar");
}

