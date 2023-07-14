#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Digite três fases (aperte ENTER entre cada uma): ");
        char frase1 [30], frase2 [30], frase3 [30];
        fgets(frase1,30,stdin);
        fgets(frase2,30,stdin);
        fgets(frase3,30,stdin);
        printf("\n\t%s \t%s \t%s", frase3, frase2, frase1);
}
