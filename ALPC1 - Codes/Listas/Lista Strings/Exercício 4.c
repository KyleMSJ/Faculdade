#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    char frase1[30],frase2[30],frase3[30],frase4[10]="IFSP-PRC";
    printf("Digite 3 frases: ");
    gets(frase1);
    gets(frase2);
    gets(frase3);
    printf("\n A quantidade de caracteres na frase 1 é: %zu", strlen(frase1));
    printf("\n A quantidade de caracteres na frase 2 é: %zu", strlen(frase2));
    printf("\n A quantidade de caracteres na frase 3 é: %zu", strlen(frase3));
    if(strcmp(frase1,frase2)==0)
        printf("\n\n\t Frase 1 igual a frase 2");
    else
        printf("\n\n\t Frase 1 diferente da frase 2");
    printf("\n\t%s", strcat(frase1,frase2));
    printf("\n\t%s", strcat(frase3,frase4));



}
