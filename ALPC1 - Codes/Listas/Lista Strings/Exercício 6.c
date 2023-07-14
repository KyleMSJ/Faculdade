#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

int main()
{
    char nome1 [15], nome2[15], nome3[15], nome[15];
    int opc = 0;

    setlocale(LC_ALL, "Portuguese");
    do
    {
    printf("\nLoja");
    printf("\n1. Cadastrar clientes");
    printf("\n2. Buscar cliente");
    printf("\n3. Mostrar todos os clientes");
    printf("\n4. Sair do Programa");
    printf("\nOpção: ");
    scanf("\t%d", &opc);
    fflush(stdin);
    switch(opc)
    {
    case 1:
        printf("\nDigite o nome do cliente: ");
        gets(nome1);
        printf("\nDigite o nome do cliente: ");
        gets(nome2);
        printf("\nDigite o nome do cliente: ");
        gets(nome3);
    break;
    case 2:
        printf("Nome do cliente:");
        gets(nome);
        if(strcmp(nome,nome1)==0 || (strcmp(nome,nome2)==0) || (strcmp(nome,nome3)==0))
            printf("Este cliente está cadastrado\n");
        else
            printf("Este cliente não está cadastrado\n");
        break;
    case 3:
        printf("Clientes cadastrados:   %s \t\t\t%s \t\t\t%s", nome1, nome2, nome3);
    break;
    case 4: return 0;
    }
    }
    while(opc != 4);
}
