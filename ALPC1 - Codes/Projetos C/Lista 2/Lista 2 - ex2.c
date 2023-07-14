#include<stdio.h>
#include<stdlib.h>

int main()

{
    float num1, num2, Rsub, Rmul, Rdiv;

    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite outro numero: ");
    scanf("%f", &num2);
    {
        Rsub = num1 - num2;
        Rmul = num1 * num2;
        Rdiv = num1 / num2;
    }


    printf("A subtracao do primeiro com o segundo numero eh: %.1f\n", Rsub);
    printf("A multiplicacao entre o primeiro e o segundo numero eh: %.1f\n", Rmul);
    printf("A divisao entre o primeiro e o segundo numero eh: %.1f\n", Rdiv);
}
