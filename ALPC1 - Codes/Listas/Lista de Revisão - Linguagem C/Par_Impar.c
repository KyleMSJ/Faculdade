#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()

{
    int num, resultado;

    setlocale(LC_ALL, "Portuguese");
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);
    resultado = num%2;
    switch(resultado)
    {
        case 0:
        printf("o n�mero digitado � par");
        break;
        case 1:
        printf("o n�mero digitado � �mpar");
        break;
    }
}
