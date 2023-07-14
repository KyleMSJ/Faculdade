#include<stdio.h>
#include<conio.h>

int main()
{
    int numero;
    printf("Programa de Codigo Secreto \n\n");

    while (numero!=18)
    {
        printf("\n\tDigite o codigo secreto: ");
        scanf("%d", &numero);

        if (numero!=18)
            printf("\tVoce errou o codigo. Tente novamente! \n\n");
        else
            printf("\n\n\tParabens. Voce acertou o codigo.\n\n");
    }

    printf("\n\n");
    printf("IFSP - Hortolandia ");
    putchar(2); //retorna a tecla digitada
}
