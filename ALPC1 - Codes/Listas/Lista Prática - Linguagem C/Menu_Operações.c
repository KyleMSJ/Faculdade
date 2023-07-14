#include<stdio.h>
#include<locale.h>

int main ()
{
    float num1, num2, result;
    int opc;
    setlocale(LC_ALL, "Portuguese");

    printf("Digite um n�mero: ");
    scanf("%f", &num1);
    printf("Digite outro n�mero: ");
    scanf("%f", &num2);

    while (opc != 6)
        {
    printf("\n\n********************* Pro � IFSP ********************\n");
    printf("1 � Somar n�meros\n");
    printf("2 � Subtrair n�meros\n");
    printf("3 � Multiplicar n�meros\n");
    printf("4 � Dividir n�meros\n");
    printf("5 � Digitar outros n�meros\n");
    printf("6 � Sair do programa\n");
    printf("Escolha a op��o desejada: ");
    scanf("%d", &opc);
    printf("***************************************************\n");
    switch (opc)
    {
    case 1:
        result = num1 + num2;
        printf("O resultado �: %.2f", result);
        break;
    case 2:
        result = num1 - num2;
        printf("O resultado �: %.2f", result);
        break;
    case 3:
        result = num1 * num2;
        printf("O resultado �: %.2f", result);
        break;
    case 4:
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("O resultado �: %.2f", result);
        }
        else
            printf("\nN�o � poss�vel dividir por 0\n");
        break;
    case 5:
        printf("\nDigite um n�mero: ");
        scanf("%f", &num1);
        printf("Digite outro n�mero: ");
        scanf("%f", &num2);

        break;
    default:
        return 0;
    }
        }
}
