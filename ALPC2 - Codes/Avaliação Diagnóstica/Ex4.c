#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float valor;

    printf("Valor do produto: ");
    scanf("%f", &valor);

    if ((valor > 0) && (valor <= 50))
        valor = valor * 0.95;
    else if ((valor > 50) && (valor <= 100))
        valor = valor * 0.90;
    else if ((valor > 100))
        valor = valor * 0.85;
    else
        printf("Valor Inválido!");

    printf("\nO novo valor com desconto é de: %.2f R$", valor);
}
