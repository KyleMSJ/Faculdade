#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<conio.h>


int main()
{
    int opc, i, qtd;
    float valor[100], soma = 0, pago, troco;
    setlocale(LC_ALL, "Portuguese");
    for (i=1;i<=100;i++)
        valor[i]=0;

    do
        {
    printf("\n**********Caixa do Mercado**********");
    printf("\n 1- Inserir valores dos produtos");
    printf("\n 2- Mostrar conta total");
    printf("\n 3- Inserir valor pago pelo cliente");
    printf("\n 4- Verificar situação do pagamento");
    printf("\n 5- Zerar conta total e valor pago");
    printf("\n 6- Sair do programa");
    printf("\nEscolha a opção desejada: ");
    scanf("%d", &opc);

    switch (opc)
    {
    case 1:
        soma = 0;
        for (i=1;i<=100;i++)
        {
        printf("\nInsira o valor do %dº produto(Digite 0 quando finalizar): ", i);
        scanf("%f", &valor[i]);
        if (valor[i] == 0){ // condição de parada do loop
            qtd = i; //Variável qtd recebendo o número de produtos cadastrados
        break;}
        if (valor[i] < 0)
        {
        printf("\nValor inválido! Digite um valor maior do que 0: \n");
        printf("\nInsira o valor do %dº produto(Digite 0 quando finalizar): ", i);
        scanf("%f", &valor[i]);
        }
        }
        break;
    case 2:
        if (soma <= 0) // Sem isso a variável "soma" acumula os valores toda vez que a opção 2 é selecionada
        {
            soma = 0;
            for (i=1;i<=qtd;i++)
            soma += valor[i];
        }
        printf("Conta total: R$ %.2f", soma);
        getch();
        printf("\n");
        break;
    case 3:
        printf("Valor pago: ");
        scanf("%f", &pago);
        printf("Valor registrado!");
    break;
    case 4:
        if (pago == soma)
        {
            printf("Pagamento OK");
        }
        else if (pago > soma)
            {
            printf("Pagamento a mais\n");
            troco = pago - soma;
            printf("\tTroco: %f", troco);
            }
        else if (pago < soma)
            printf("Pagamento insuficiente\n");
    case 5:
        printf("Valores zerados!");
        troco = 0;
        pago = 0;
        soma = 0;
        qtd = 0;
        for (i=1;i<=100;i++){
        valor[i] = 0;}

    }
    }while(opc!=6);
    return 0;
}
