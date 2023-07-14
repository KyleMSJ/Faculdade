#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    int opc;
    float transf, saldo = 0;
    setlocale(LC_ALL, "Portuguese");
    while (opc != 4)
    {
    printf("\n*************** Banco do Brasil ********************\n");
    printf("1 – Consultar saldo da conta\n");
    printf("2 – Realizar depósito\n");
    printf("3 – Fazer saque da conta\n");
    printf("4 – Sair do programa\n");
    printf("Escolha a opção desejada: _____");
    scanf("%d", &opc);

    switch(opc)
    {
        case 1:
        printf("\nSeu saldo é de: %.2f R$\n", saldo);
        break;
        case 2:
        printf("Quanto deseja depositar na conta?\n\t:");
        scanf("%f", &transf);
        saldo = saldo + transf;
        break;
        case 3:
        printf("Quanto deseja sacar?\n\t:");
        scanf("%f", &transf);
        saldo = saldo - transf;
        break;
        default:
        return 0;
    }
    }
}
