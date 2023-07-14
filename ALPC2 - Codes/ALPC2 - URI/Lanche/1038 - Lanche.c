#include<stdio.h>

int main()
{
    int code, quant;
    float valor;

    scanf("%d %d", &code, &quant);
    switch(code)
    {
    case 1:
        valor = quant*4;
        printf("Total: R$ %.2f\n", valor);
        break;
    case 2:
        valor = quant*4.5;
        printf("Total: R$ %.2f\n", valor);
        break;
    case 3:
        valor = quant*5;
        printf("Total: R$ %.2f\n", valor);
        break;
    case 4:
        valor = quant*2;
        printf("Total: R$ %.2f\n", valor);
        break;
    case 5:
        valor = quant*1.5;
        printf("Total: R$ %.2f\n", valor);
        break;
    }
}
