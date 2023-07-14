#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()

{
    int num, resultado;

    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    resultado = num%2;
    switch(resultado)
    {
        case 0:
        printf("o número digitado é par");
        break;
        case 1:
        printf("o número digitado é ímpar");
        break;
    }
}
