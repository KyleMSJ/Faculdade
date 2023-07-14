#include<stdio.h>
#include<math.h>
int main()

{
    float delta, x1, x2, a, b, c;

    printf("Equacao do segundo grau\n");
    printf("Digite o valor de A: ");
    scanf("%f", &a);
    printf("Digite o valor de B: ");
    scanf("%f", &b);
    printf("Digite o valor de C: ");
    scanf("%f", &c);
    delta = pow(b, 2) - 4*a*c; //pow - potência
    printf("Valor de delta: %.2f\n", delta);
    if (delta == 0)
        {
        x1 = (-b + sqrt(delta))/(2*a);
        printf("Possui duas raizes iguais a: %.2f", x1);
        }
        else
            if (delta > 0)
            {
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            printf("Possui duas raizes: ");
            printf("x1 = %.2f\n", x1);
            printf("\t\t    x2 = %.2f", x2);
            }
        else
            printf("Nao possui raizes reais!");
}
