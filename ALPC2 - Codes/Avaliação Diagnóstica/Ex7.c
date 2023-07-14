#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int ndgit = 0, num, soma = 0;

    printf("Digite um número: ");
    scanf("%d", &num);
    while(num >= 0){
        printf("Digite um número: ");
        ndgit++;
        soma += num;
        scanf("%d", &num);
    }
    if (ndgit==0)
        printf("Nenhum número maior ou igual a 0 digitado.");
    else
    printf("A quantidade de números digitados foi %d e a média entre eles é %.2f", ndgit, (float)soma/ndgit);
    return 0;
}

