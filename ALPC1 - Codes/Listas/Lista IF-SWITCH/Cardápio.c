#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()

{
        setlocale(LC_ALL, "Portuguese");
        int code, quant;
        float valor;
        printf("Insira o código do produto (100-105): ");
        scanf("%d", &code);
        printf("Digite a quantidade do produto escolhido: ");
        scanf("%d", &quant);
        switch(code)
        {
            case 100:
            valor = 1.7 * quant;
            printf("O valor a pagar é: %.2f R$", valor);
            break;
            case 101:
            valor = 2.3 * quant;
            printf("O valor a pagar é: %.2f R$", valor);
            break;
            case 102:
            valor = 2.6 * quant;
            printf("O valor a pagar é: %.2f R$", valor);
            break;
            case 103:
            valor = 2.4 * quant;
            printf("O valor a pagar é: %.2f R$", valor);
            break;
            case 104:
            valor = 2.5 * quant;
            printf("O valor a pagar é: %.2f R$", valor);
            break;
            case 105:
            valor = 1 * quant;
            printf("O valor a pagar é: %.2f R$", valor);
            break;
            default:
            printf("Código inválido!");
        }
}
