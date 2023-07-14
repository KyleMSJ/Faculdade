#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
    char nome [20];
    int idade;

    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("%s possui %d anos", nome, idade);
}
