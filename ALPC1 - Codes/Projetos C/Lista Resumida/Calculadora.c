#include<stdio.h>

int main()
 {
    float n1,n2;
    int op;

    printf("Digite o primeiro numero: ");
    scanf("%f",&n1);
    printf("Selecione a Operacao:");
    printf("\n 1 - Soma;\n 2 - Subtracao;\n 3- Multiplicacao;\n 4- Divisao:\n");
    scanf("%d",&op);
    printf("Digite o segundo numero:");
    scanf("%f",&n2);
    if (op == 1)
    printf("O resultado eh: %.1f", n1 + n2);
    else
        if (op == 2)
               printf("O resultado eh: %.1f", n1 - n2);
        else
            if (op == 3)
                   printf("O resultado eh: %.1f", n1*n2);
            else
                if ((op == 4) && (n2 != 0))
                       printf("O resultado eh: %.1f",n1 / n2);
                   else
                    printf("Operacao nao permitida!");
 }
