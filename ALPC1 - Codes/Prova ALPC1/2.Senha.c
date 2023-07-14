#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<string.h>

int main()
{
    char nome[15], sobrenome[15], senha[15];
    int i;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite seu nome: ");
    gets(nome);
    printf("Digite seu sobrenome: ");
    gets(sobrenome);
    strcat(sobrenome, " ");
    strcat(sobrenome, nome);
    for(i=0;i<5;i++)
        {
    printf("Digite a senha (5 tentativas): ");
    gets(senha);
    if(strcmp(senha, sobrenome)==0)
        {
        printf("Acertou a senha na %dª tentativa!\n", i+1);
        return 0;
        }
    else
        printf("\n Senha incorreta\t Tentativa (%d/5)\n", i+1);
        }
    if (i=5)
        printf("Número máximo de tentativas excedido!");

}

