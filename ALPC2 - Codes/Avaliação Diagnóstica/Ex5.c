#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num, i;

    printf("Digite um número: ");
    scanf("%d", &num);
    printf("\n");
    for (i=0; i<num; i++)
    {
        printf("IFSP \n");
    }
}
