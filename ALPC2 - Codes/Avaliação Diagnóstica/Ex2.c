#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    printf("Digite o n�mero: ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("N�mero par!");
    else
        printf("N�mero �mpar");
}

