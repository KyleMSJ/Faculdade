//Caio Marcelo da Silva de Jesus - PC3011259
//Davi Trost Gouveia - PC3010741

#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<conio.h>

void Inserir();
void Produtos();
void Pagamento();
void Situacao();
void ZerarVar();
int opc,i,quant, qtde_prod[100];
float valor_prod[100],valorTotal=0,pag,situacao;
char nome_prod[100][20];

int main()
{
    setlocale(LC_ALL,"Portuguese");

    while(opc != 6)
    {
        printf("\n*********** Caixa do Mercado ***********\n");
        printf("\n1 - Inserir produtos");
        printf("\n2 - Mostrar produtos e conta total");
        printf("\n3 - Inserir valor pago pelo cliente");
        printf("\n4 - Verificar situação do pagamento");
        printf("\n5 - Zerar váriaveis");
        printf("\n6 - Sair do programa");
        printf("\nDigite a opção desejada: ");
        scanf("%d",&opc);
        printf("\n****************************************\n");

        switch(opc)
        {
        case 1:
            Inserir();
            break;
        case 2:
            Produtos();
            break;
        case 3:
            Pagamento();
            break;
        case 4:
            Situacao();
            break;
        case 5:
            printf("\n\n\tValores zerados.");
            quant=0;
            valorTotal=0;
            pag=0;
            situacao=0;
            for(i=0; i<100; i++)
            {
                qtde_prod[i]=0;
                valor_prod[i]=0;
                nome_prod[i][20]=0;
            }
            break;
        case 6:
            printf("\nSaindo do programa.");
            break;
        default:
            printf("\n\n\tOpção Inválida");
            break;
        }
    }

}

void Inserir()
{
    for(i=0; i<100; i++)
    {
        printf("\nDigite nessa ordem: [Nome] [Quantidade] [Valor]\n");
        scanf("%s %d %f", nome_prod[i], &qtde_prod[i], &valor_prod[i]);
        if((strcmp(nome_prod[i],"0")==0)&&(qtde_prod[i]==0)&& (valor_prod[i]==0)) //Condição de parada
            break;
        quant = i+1;
        valorTotal = (qtde_prod[i]*valor_prod[i])+ valorTotal;
    }

}
void Produtos()
{
    for(i=0; i<quant; i++)
    {
        printf("\n-%s \t %d \t R$%.2f \t R$%.2f\n", nome_prod[i], qtde_prod[i], valor_prod[i],(qtde_prod[i]*valor_prod[i]));
    }
    printf("Valor Total: R$%.2f\n", valorTotal);
}
void Pagamento()
{
    printf("\nValor à pagar: R$%.2f",valorTotal);
            printf("\n\n\tPagamento: R$");
            scanf("%f",&pag);
            if(pag < 0)
            {
                printf("Valor inválido.");
                pag = 0;
            }
            situacao = valorTotal - pag;
}
void Situacao()
{
    printf("\n\nValor pago: R$%.2f",pag);
            if(situacao == 0)
            {
                printf("\nPagamento OK. Volte sempre!");
            }
            else if(situacao<0)
            {
                printf("\nPagamento a Mais.\nValor à pagar: R$0,00");
                printf("\nTroco: R$%.2f",situacao*(-1));
            }
            else if(situacao>0)
                printf("\nPagamento Insuficiente.\nValor à pagar: R$%.2f",situacao);
}
