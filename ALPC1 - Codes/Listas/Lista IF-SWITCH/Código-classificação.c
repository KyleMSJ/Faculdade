#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()

{
    int code;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o código (1-15): ");
    scanf("%d", &code);
    if (code == 1)
        printf ("Alimento não-perecível");
        else if ((code >= 2) && (code <=4))
            printf("Alimento perecível");
        else if ((code == 5) || (code == 6))
            printf ("Vestuário");
            else if (code == 7)
                printf("Higiene pessoal");
            else if ((code >= 8) && (code <= 15))
                printf("Limpeza e utensílios domésticos");
            else
                printf("Código Inválido!");
}
