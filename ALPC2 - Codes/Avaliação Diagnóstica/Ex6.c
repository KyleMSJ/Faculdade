#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<strings.h>

int main()
{
    int num, i, j;  //tamanho do triângulo

    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número entre 2 e 20: ");
    scanf("%d", &num);

    //para cada linha i
    for (i=0; i<=num; i++)
    {
        //escreva i *'s
        for (j=0; j<i; j++){
            printf("*");
        }
        //escreva um '/n'
        printf("\n");
    }
}
