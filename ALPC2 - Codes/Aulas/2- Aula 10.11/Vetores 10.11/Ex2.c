#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa que leia 10 números inteiros do teclado e armazene os números
em um vetor. Mostre na tela, em ordem inversa, todos os números armazenados.  */
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vet[10], i;
    for (i=0; i<10; i++)
    {
    printf("Digite o %dº Número: ", i+1);
    scanf("%d", &vet[i]);
    }
    printf("\n");
    for (i=9; i>=0; i--)
        {
    printf("  %d", vet[i]);
        }
}
