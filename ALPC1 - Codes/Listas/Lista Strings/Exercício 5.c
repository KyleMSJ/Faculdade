#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    char nome[20], sobrenome [30];
    printf("Digite seu nome: ");
    gets(nome);
    printf("Digite seu sobrenome:");
    gets(sobrenome);
    strcat(nome, " ");
    strcat(nome,sobrenome);
    printf("\n\n%s", nome);




}
