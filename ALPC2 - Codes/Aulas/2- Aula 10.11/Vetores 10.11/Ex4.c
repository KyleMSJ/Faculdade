#include<stdio.h>
#include<stdlib.h>

/* Faça um programa que leia 8 letras, armazene em um vetor, e diga quantas
consoantes foram lidas. Imprima na tela somente as consoantes. */
int main()
{
    char letras[8];
    int i;
    int cons = 0;
    printf("Digite 8 letras\n");

    for(i=0; i<8; i++)
    {
        scanf(" %c", &letras[i]); //o espaço antes do "%c" faz com que o scanf ignore espaços em brancos e leia apenas os caracteres
    }

    for(i=0; i<8; i++)
    {
        if (letras[i] != 'a' && letras[i] != 'e' && letras[i] != 'i' && letras[i] != 'o' && letras[i] != 'u' && letras[i] != 'A' && letras[i] != 'E' &&
            letras[i] != 'I' && letras[i] != 'O' && letras[i] != 'U')
            {
            cons++;
            printf("%c", letras[i]);
            }
    }
    printf("\n Numero de consoantes: %d", cons);

    return 0;

}
