#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float notas[5], soma = 0, media;
    int i;

    for (i=0; i<5; i++)
    {
    printf("%dª Nota do aluno: ", i+1);
    scanf("%f", &notas[i]);
    soma += notas[i];
    }
    media = soma / 5;

    printf("\n\tMédia final: %.2f", media);
}
