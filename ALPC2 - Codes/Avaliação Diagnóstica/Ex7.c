#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int ndgit = 0, num, soma = 0;

    printf("Digite um n�mero: ");
    scanf("%d", &num);
    while(num >= 0){
        printf("Digite um n�mero: ");
        ndgit++;
        soma += num;
        scanf("%d", &num);
    }
    if (ndgit==0)
        printf("Nenhum n�mero maior ou igual a 0 digitado.");
    else
    printf("A quantidade de n�meros digitados foi %d e a m�dia entre eles � %.2f", ndgit, (float)soma/ndgit);
    return 0;
}

