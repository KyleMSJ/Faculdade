#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fa�a um programa que leia 10 n�meros inteiros do teclado e armazene os n�meros
em um vetor. Mostre na tela, em ordem inversa, todos os n�meros armazenados.  */
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int vet[10], i;
    for (i=0; i<10; i++)
    {
    printf("Digite o %d� N�mero: ", i+1);
    scanf("%d", &vet[i]);
    }
    printf("\n");
    for (i=9; i>=0; i--)
        {
    printf("  %d", vet[i]);
        }
}
