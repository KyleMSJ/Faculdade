#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()

{
    int code;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira o c�digo (1-15): ");
    scanf("%d", &code);
    if (code == 1)
        printf ("Alimento n�o-perec�vel");
        else if ((code >= 2) && (code <=4))
            printf("Alimento perec�vel");
        else if ((code == 5) || (code == 6))
            printf ("Vestu�rio");
            else if (code == 7)
                printf("Higiene pessoal");
            else if ((code >= 8) && (code <= 15))
                printf("Limpeza e utens�lios dom�sticos");
            else
                printf("C�digo Inv�lido!");
}
