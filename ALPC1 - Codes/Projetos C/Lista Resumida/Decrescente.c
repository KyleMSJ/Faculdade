#include<stdio.h>

int main()

{
    int valor1, valor2;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor1);
    printf("Digite outro valor inteiro: ");
    scanf("%d", &valor2);
    if (valor1 > valor2)
        printf("%d %d", valor1, valor2);
    else
        if (valor2 > valor1)
        printf("%d %d", valor2, valor1);
}
