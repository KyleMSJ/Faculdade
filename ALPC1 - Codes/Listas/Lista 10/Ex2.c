#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main()
{
    int opc, produtos, i;
    float preco[20], caro=0, barato=10000, soma, media;
    setlocale(LC_ALL, "Portuguese");
    while (opc != 9)
    {
    printf("\nLoja Linda Mulher");
    printf("\n 1. Informar a quantidade de produtos");
    printf("\n 2. Cadastrar pre�o de custo");
    printf("\n 3. Calcular valor de venda");
    printf("\n 4. Mostrar pre�os");
    printf("\n 5. Produto mais caro");
    printf("\n 6. Produto mais barato");
    printf("\n 7. Soma de todos os produtos");
    printf("\n 8. Media de pre�os");
    printf("\n 9. Sair do programa\n");
    scanf("%d", &opc);

    switch (opc)
    {
    case 1:
        printf("\nQuantos produtos deseja cadastrar? (m�x. 20): \n\n");
        scanf("%d", &produtos);
        if (produtos > 20)
            printf("Valor inv�lido!\n\n");
        break;
    case 2:
        for (i=0; i<produtos; i++)
        {
            printf("\nDigite o pre�o de custo (%d/%d): \n", i+1, produtos);
            scanf("%f", &preco[i]);
        }
        break;
    case 3:
        for (i=0; i<produtos; i++)
        {
        preco [i] = preco[i]* 1.15;
        }
        printf("Valor de venda calculado!\n");
        break;
    case 4:
        for (i=0; i<produtos; i++)
            printf("Pre�os reajustados: %d = R$%.2f\n",i+1, preco[i]);
        break;
    case 5:
        for (i=0; i<produtos; i++)
            if (preco[i]>caro)
            caro = preco [i];
        printf("O valor do produto mais caro �: R$%.2f", caro);
        break;
    case 6:
        for (i=0; i<produtos; i++)
            if (preco[i]<barato)
            barato = preco [i];
        printf("O valor do produto mais barato �: R$%.2f", barato);
        break;
    case 7:
        for (i=0; i<produtos; i++)
        soma += preco[i];
        printf("Valor total: R$%.2f", soma);
        break;
    case 8:
        for (i=0; i<produtos; i++)
        media = soma / produtos;
        printf("M�dia dos pre�os: R$%.2f", media);
    }
    }
}

