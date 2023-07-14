#include<stdio.h>
#include<stdlib.h>

int main()
{
    float num, sucessor, antecessor;

    printf("Digite um numero: ");
    scanf("%f", &num);
    sucessor = num + 1;
    antecessor = num - 1;
    printf("o numero que sucede ao escolhido eh: %.1f\n", sucessor);
    printf("o numero que antecede ao escolhido eh: %.1f\n", antecessor);
}
