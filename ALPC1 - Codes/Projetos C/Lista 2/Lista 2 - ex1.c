#include<stdio.h>
#include<stdlib.h>

int main()
{
    //vari�veis
    float num1, num2, resultado;

    //comandos
    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite outro numero: ");
    scanf("%f", &num2);

    //Processamento
    //Para escolher quantas casas decimais: ".(n�mero de casas)" depois da %
    resultado = num1 + num2;
    printf("Resultado: %.1f", resultado);

}
